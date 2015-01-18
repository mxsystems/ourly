<?php
/**
 * @file
 * ourly_notification.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ourly_notification_default_rules_configuration() {
  $items = array();
  $items['rules_daily_reminder'] = entity_import('rules_config', '{ "rules_daily_reminder" : {
      "LABEL" : "Daily Reminder",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "email", "notification", "reminder" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "account" : { "label" : "User", "type" : "list\\u003Cuser\\u003E" } },
      "ACTION SET" : [
        { "LOOP" : {
            "USING" : { "list" : [ "account" ] },
            "ITEM" : { "list_user" : "Current User" },
            "DO" : [
              { "mail" : {
                  "to" : [ "list-user:mail" ],
                  "subject" : "Please enter your time on [site:name] for [site:current-date]",
                  "message" : "Dear [list-user:name],\\r\\n\\r\\nThis is a system generated email reminding you to log onto [site:url] and enter the time you have worked for the day.\\r\\n\\r\\n\\r\\nThank you\\r\\n\\r\\n\\r\\n[site:name] team.",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_daily_reminder_email'] = entity_import('rules_config', '{ "rules_daily_reminder_email" : {
      "LABEL" : "Daily Reminder Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "ourly_notification", "rules", "rules_scheduler" ],
      "ON" : { "ourly_notification_cob" : [] },
      "IF" : [
        { "ourly_notification_email_reminder" : [] },
        { "ourly_notification_check_last_reminder_day" : [] },
        { "ourly_notification_notification_hour" : [] },
        { "ourly_notification_weekend" : [] }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "rules_daily_reminder",
            "date" : "+1 minutes",
            "identifier" : "Reminder email for [account:uid] for [site:current-date]",
            "param_account" : [ "account" ]
          }
        },
        { "ourly_notification_setting_reminder_date" : [] }
      ]
    }
  }');
  return $items;
}
