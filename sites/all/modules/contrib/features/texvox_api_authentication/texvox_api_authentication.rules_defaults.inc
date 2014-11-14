<?php
/**
 * @file
 * texvox_api_authentication.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function texvox_api_authentication_default_rules_configuration() {
  $items = array();
  $items['rules_freeswitch_delete_user'] = entity_import('rules_config', '{ "rules_freeswitch_delete_user" : {
      "LABEL" : "FreeSwitch delete user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "texvox", "rules" ],
      "ON" : { "user_delete" : [] },
      "DO" : [ { "texvox_delete_user_in_freeswitch" : { "user" : [ "account" ] } } ]
    }
  }');
  $items['rules_freeswitch_register_user'] = entity_import('rules_config', '{ "rules_freeswitch_register_user" : {
      "LABEL" : "FreeSwitch register user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "texvox", "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [ { "texvox_register_user_in_freeswitch" : { "user" : [ "account" ] } } ]
    }
  }');
  $items['rules_freeswitch_update_user'] = entity_import('rules_config', '{ "rules_freeswitch_update_user" : {
      "LABEL" : "FreeSwitch update user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "texvox", "rules" ],
      "ON" : { "user_update" : [] },
      "DO" : [ { "texvox_update_user_in_freeswitch" : { "user" : [ "account" ] } } ]
    }
  }');
  return $items;
}
