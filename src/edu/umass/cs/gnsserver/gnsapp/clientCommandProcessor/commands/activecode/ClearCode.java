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
package edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commands.activecode;

import edu.umass.cs.gnscommon.utils.Format;

import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.SignatureException;
import java.security.spec.InvalidKeySpecException;

import org.json.JSONException;
import org.json.JSONObject;

import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.ClientRequestHandlerInterface;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commandSupport.ActiveCode;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commandSupport.CommandResponse;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commands.CommandModule;
import edu.umass.cs.gnscommon.CommandType;
import edu.umass.cs.gnscommon.GNSProtocol;
import edu.umass.cs.gnscommon.packets.CommandPacket;
import edu.umass.cs.gnscommon.ResponseCode;
import edu.umass.cs.gnsserver.gnsapp.clientCommandProcessor.commands.AbstractCommand;
import edu.umass.cs.gnsserver.interfaces.InternalRequestHeader;

import java.text.ParseException;
import java.util.Date;

/**
 * The command to clear the active code for the specified GNSProtocol.GUID.toString() and action.
 *
 */
public class ClearCode extends AbstractCommand {

  /**
   * Creates a Clear instance.
   *
   * @param module
   */
  public ClearCode(CommandModule module) {
    super(module);
  }

  /**
   *
   * @return the command type
   */
  @Override
  public CommandType getCommandType() {
    return CommandType.ClearCode;
  }

  @Override
  public CommandResponse execute(InternalRequestHeader header, CommandPacket commandPacket,
          ClientRequestHandlerInterface handler) throws InvalidKeyException,
          InvalidKeySpecException, JSONException, NoSuchAlgorithmException,
          SignatureException, ParseException {
    JSONObject json = commandPacket.getCommand();
    String guid = json.getString(GNSProtocol.GUID.toString());
    String writer = json.getString(GNSProtocol.WRITER.toString());
    String action = json.getString(GNSProtocol.AC_ACTION.toString());
    String signature = json.getString(GNSProtocol.SIGNATURE.toString());
    String message = json.getString(GNSProtocol.SIGNATUREFULLMESSAGE.toString());
    Date timestamp = json.has(GNSProtocol.TIMESTAMP.toString())
            ? Format.parseDateISO8601UTC(json.getString(GNSProtocol.TIMESTAMP.toString())) : null; // can be null on older client

    try {
      ResponseCode response = ActiveCode.clearCode(header, commandPacket,
              guid, action,
              writer, signature, message, timestamp, handler);

      if (!response.isExceptionOrError()) {
        return new CommandResponse(ResponseCode.NO_ERROR, GNSProtocol.OK_RESPONSE.toString());
      } else {
        return new CommandResponse(response, GNSProtocol.BAD_RESPONSE.toString()
                + " " + response.getProtocolCode());
      }
    } catch (IllegalArgumentException e) {
      return new CommandResponse(ResponseCode.UNSPECIFIED_ERROR, GNSProtocol.BAD_RESPONSE.toString()
              + " " + ResponseCode.UNSPECIFIED_ERROR.getProtocolCode() + " " + e.getMessage());
    }
  }

}
