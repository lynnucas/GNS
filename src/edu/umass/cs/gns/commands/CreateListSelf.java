/*
 * Copyright (C) 2014
 * University of Massachusetts
 * All Rights Reserved 
 *
 * Initial developer(s): Westy.
 */
package edu.umass.cs.gns.commands;

import static edu.umass.cs.gns.clientsupport.Defs.*;

/**
 *
 * @author westy
 */
public class CreateListSelf extends CreateList {

  public CreateListSelf(CommandModule module) {
    super(module);
  }

  @Override
  public String[] getCommandParameters() {
    return new String[]{GUID, FIELD, VALUE, SIGNATURE, SIGNATUREFULLMESSAGE};
  }

  @Override
  public String getCommandName() {
    return CREATELIST;
  }
  
  @Override
  public String getCommandDescription() {
    return "Adds a key value pair to the GNS for the given GUID. Value is a list of items formated as a JSON list.";
  }
}