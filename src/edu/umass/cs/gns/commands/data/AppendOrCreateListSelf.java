/*
 * Copyright (C) 2014
 * University of Massachusetts
 * All Rights Reserved 
 *
 * Initial developer(s): Westy.
 */
package edu.umass.cs.gns.commands.data;

import edu.umass.cs.gns.commands.CommandModule;
import edu.umass.cs.gns.clientsupport.UpdateOperation;
import static edu.umass.cs.gns.clientsupport.Defs.*;

/**
 *
 * @author westy
 */
public class AppendOrCreateListSelf extends AbstractUpdateList {

  public AppendOrCreateListSelf(CommandModule module) {
    super(module);
  }

  @Override
  public UpdateOperation getUpdateOperation() {
    return UpdateOperation.APPEND_OR_CREATE;
  }

  @Override
  public String getCommandName() {
    return APPENDORCREATELIST;
  }

  @Override
  public String[] getCommandParameters() {
    return new String[]{GUID, FIELD, VALUE, SIGNATURE, SIGNATUREFULLMESSAGE};
  }

  @Override
  public String getCommandDescription() {
    return "Adds a key value pair to the GNS for the given GUID if it doesn not exist "
            + "otherwise appends values onto existing value."
            + "Value is a list of items formated as a JSON list.";
  }
}