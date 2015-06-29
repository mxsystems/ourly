Installation instructions

1. Please run drush to unpack the installation profile to your local htdocs root
drush make build-open_hourglass.make /path/to/your/installation

2. Use drush to install the site
drush site-install open_hourglass --db-url=mysql://[user]:[pass]@127.0.0.1/[db_name] --site-name=Open Hourglass --account-name=admin --account-pass=123456

Notes:

1. Please make sure you have drush installed
2. Have a local LAMP environment set up
3. Have a local database setup for the installation


-----------------
Changelog
-----------------
1.2
#Bug: Back to top link smooth scroll
#Refinement: Make project list alphabetical in new time entry page
#Features: Time entry timer
#Features: Time entry bulk time entry

1.1
#Bug: For non-admin users create new time should be in overlay.
#Bug: On mobile unable to click on secondary menu item (weekly, monthly reports)
#Bug: Hiding rate for regular user but also clean up the css container
#Bug: Highlight home menu item when you are on home page.
#Bug: Project pages do not have the project menu item highlighted
#Refinement: My time page change create time entry button to “primary style”.
#Refinement: Adding a total on the weekly report
#Refinement: Switch out the charting system (To D3)
#Refinement: Charts should match filters correspondingly
#Refinement: Promote project and demote other promoted project
#Refinement: Add more demo project.
#Refinement: Add a real name for user if they have entered it
#Features: Email notification for time entry reminder.
#Features: Individual project page display
#Features: Project creating/editing page (2 column)
#Features: Time entry creating/editing page (2 column)