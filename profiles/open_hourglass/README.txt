Installation instructions

1. Please run drush to unpack the installation profile to your local htdocs root
drush make build-open_hourglass.make /path/to/your/installation

2. Use drush to install the site
drush site-install open_hourglass --db-url=mysql://[user]:[pass]@127.0.0.1/[db_name] --site-name=Open Hourglass --account-name=admin --account-pass=123456

Notes:

1. Please make sure you have drush installed
2. Have a local LAMP environment set up
3. Have a local database setup for the installation