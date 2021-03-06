/*
 *
 *  Copyright (c) 2015 University of Massachusetts
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you
 *  may not use this file except in compliance with the License. You
 *  may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 *  implied. See the License for the specific language governing
 *  permissions and limitations under the License.
 *
 *  Initial developer(s): Westy
 *
 */
package edu.umass.cs.gnsserver.database;

import edu.umass.cs.gnscommon.exceptions.server.FailedDBOperationException;
import edu.umass.cs.gnscommon.exceptions.server.RecordExistsException;
import edu.umass.cs.gnscommon.exceptions.server.RecordNotFoundException;
import edu.umass.cs.gnsserver.gnsapp.recordmap.GNSRecordMap;
import edu.umass.cs.gnsserver.gnsapp.recordmap.NameRecord;
import edu.umass.cs.gnscommon.utils.Format;
import edu.umass.cs.gnsserver.utils.ValuesMap;
import edu.umass.cs.utils.DelayProfiler;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Map;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import org.json.JSONException;
import org.json.JSONObject;

/**
 * Ascertains the maximum throughput of reads on the mongo database.
 *
 * Typical incantation:

 java -cp jars/GNS.jar edu.umass.cs.gnsserver.database.NoSQLRecordsThroughputTest frank_ActiveReplica CAB372BF40B3DB576786E5CC6AB05B63CC680F4D environment
 *
 * @author westy
 */
public class NoSQLRecordsThroughputTest {

  private static final ScheduledThreadPoolExecutor EXECUTOR = new ScheduledThreadPoolExecutor(5);
  private static long initTime = System.currentTimeMillis();

  /**
   * Run the test.
   *
   * @param args
   * @throws Exception
   * @throws RecordNotFoundException
   */
  public static void main(String[] args) throws Exception, RecordNotFoundException {
    if (args.length == 3) {
      for (int i = 0; i < EXECUTOR.getCorePoolSize(); i++) {
        EXECUTOR.submit(new Runnable() {
          public void run() {
            testlookupMultipleSystemAndUserFields(args[0], args[1],
                    args[2]);
          }
        });
      }
    } else {
      System.out.println("Usage: edu.umass.cs.gnsserver.test.MongoRecordsThroughputTest <node> <guid> <field>");
    }
    // important to include this!!
    //System.exit(0);
  }

  private static int count = 0;

  private static synchronized int incrCount() {
    return ++count;
  }

  private static synchronized int getCount() {
    return count;
  }

  private static synchronized void reset() {
    count = 0;
    initTime = System.currentTimeMillis();
  }
  
  private static final String COLLECTION_NAME = MongoRecords.DBNAMERECORD;

  private static void testlookupMultipleSystemAndUserFields(String node, String guid, String field) {

    //NoSQLRecords instance = new MongoRecords<String>(node);
    NoSQLRecords instance = new DiskMapRecords(node);
    GNSRecordMap<String> recordMap = new GNSRecordMap<String>(instance, COLLECTION_NAME);
    JSONObject json = new JSONObject();
    try {
      json.put(field, "some value");
    } catch (JSONException e) {
      System.out.println("Problem creating json " + e);
    }
    ValuesMap valuesMap = new ValuesMap(json);
    NameRecord nameRecord = new NameRecord(recordMap, guid, valuesMap);
    try {
      instance.insert(COLLECTION_NAME, guid, nameRecord.toJSONObject());
    } catch (JSONException e) {
      System.out.println("Problem writing json " + e);
    } catch (FailedDBOperationException e) {
      System.out.println("Problem adding " + json.toString() + " as value of " + guid + ": " + e);
    } catch (RecordExistsException e) {
      System.out.println(guid + " record already exists in database. Try something else." + e);
    }

    // and try to read it as fast as possible
    try {
      ArrayList<ColumnField> userFields = new ArrayList<>(Arrays.asList(new ColumnField(field,
              ColumnFieldType.USER_JSON)));
      int frequency = 10000;
      reset();
      do {
        Map<ColumnField, Object> map = instance.lookupSomeFields(
                COLLECTION_NAME, guid,
                NameRecord.NAME, NameRecord.VALUES_MAP, userFields);
        if (incrCount() % frequency == 0) {
          System.out.println(map);
          System.out.println(DelayProfiler.getStats());
          System.out.println("op/s = " + Format.formatTime(getCount() * 1000.0 / (System.currentTimeMillis() - initTime)));
          if (getCount() > frequency * 20) {
            System.out.println("**********************resetting************************");
            reset();
          }
        }
      } while (true);
    } catch (FailedDBOperationException | RecordNotFoundException e) {
      System.out.println("Lookup failed: " + e);
    }
  }
}
