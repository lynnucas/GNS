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
package edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commands.group;

import static edu.umass.cs.gnscommon.GnsProtocol.*;
import edu.umass.cs.gnscommon.utils.Format;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.ClientRequestHandlerInterface;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commandSupport.CommandResponse;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commandSupport.GroupAccess;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commands.CommandModule;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commands.CommandType;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commands.GnsCommand;

import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.SignatureException;
import java.security.spec.InvalidKeySpecException;

import java.text.ParseException;
import java.util.Date;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/**
 * Command to return the groups that a GUID is a member of formatted as a JSON Array.
 *
 * @author westy
 */
public class GetGroups extends GnsCommand {

  /**
   *
   * @param module
   */
  public GetGroups(CommandModule module) {
    super(module);
  }

  @Override
  public CommandType getCommandType() {
    return CommandType.GetGroups;
  }

  @Override
  public String[] getCommandParameters() {
    return new String[]{GUID, READER, SIGNATURE, SIGNATUREFULLMESSAGE};
  }

  @Override
  public String getCommandName() {
    return GET_GROUPS;
  }

  @Override
  public CommandResponse<String> execute(JSONObject json, ClientRequestHandlerInterface handler) throws InvalidKeyException, InvalidKeySpecException,
          JSONException, NoSuchAlgorithmException, SignatureException, ParseException {
    String guid = json.getString(GUID);
    // reader might be same as guid
    String reader = json.optString(READER, guid);
    // signature and message can be empty for unsigned cases
    String signature = json.optString(SIGNATURE, null);
    String message = json.optString(SIGNATUREFULLMESSAGE, null);
    Date timestamp = json.has(TIMESTAMP) ? Format.parseDateISO8601UTC(json.getString(TIMESTAMP)) : null; // can be null on older client
    return new CommandResponse<>(new JSONArray(GroupAccess.lookupGroupsLocally(guid, reader,
            signature, message, timestamp, handler)).toString());
  }

  @Override
  public String getCommandDescription() {
    return "Returns the groups that a guid is a member of formatted as a JSON Array. Reader guid needs to have read access and sign the command.";
  }
}
