<?php
/**
 * @file
 * texvox_nodes_and_fields.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function texvox_nodes_and_fields_default_rules_configuration() {
  $items = array();
  $items['rules_delete_branch_when_delete_organization'] = entity_import('rules_config', '{ "rules_delete_branch_when_delete_organization" : {
      "LABEL" : "Delete branch when delete organization",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "texvox", "rules" ],
      "ON" : { "node_delete--organization" : { "bundle" : "organization" } },
      "DO" : [
        { "texvox_delete_branch_when_delete_organization" : { "node" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_delete_ivr_when_delete_branch'] = entity_import('rules_config', '{ "rules_delete_ivr_when_delete_branch" : {
      "LABEL" : "Delete IVR when delete branch",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "texvox", "rules" ],
      "ON" : { "node_delete--branch" : { "bundle" : "branch" } },
      "DO" : [ { "texvox_delete_ivr_when_delete_branch" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_warning_for_duplicate_screen_codes'] = entity_import('rules_config', '{ "rules_warning_for_duplicate_screen_codes" : {
      "LABEL" : "Warning for duplicate screen codes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "texvox", "rules" ],
      "ON" : {
        "node_insert--ivr" : { "bundle" : "ivr" },
        "node_update--ivr" : { "bundle" : "ivr" }
      },
      "IF" : [ { "texvox_condition_duplicate_screen_code" : { "node" : [ "node" ] } } ],
      "DO" : [
        { "drupal_message" : {
            "message" : "There are screens with the same screen code in this IVR, please review and change it.",
            "type" : "warning",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
