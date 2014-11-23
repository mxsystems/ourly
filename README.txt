
CONTENTS OF THIS FILE
---------------------

 * Requirements and notes
 * Optional server requirements
 * Installation
 * Building and customizing your site
 * Multisite configuration
 * More information

REQUIREMENTS AND NOTES
----------------------
Our.ly is built on the popular CMS framework Drupal (http://www.drupal.org) as a distribution, for help on installation or configuration please refer to Drupal documentations.

Our.ly requires:

- A web server. Apache (version 2.0 or greater) is recommended.
- PHP 5.2.4 (or greater) (http://www.php.net/).
- One of the following databases:
  - MySQL 5.0.15 (or greater) (http://www.mysql.com/).
  - MariaDB 5.1.44 (or greater) (http://mariadb.org/). MariaDB is a fully
    compatible drop-in replacement for MySQL.
  - Percona Server 5.1.70 (or greater) (http://www.percona.com/). Percona
    Server is a backwards-compatible replacement for MySQL.
  - PostgreSQL 8.3 (or greater) (http://www.postgresql.org/).
  - SQLite 3.4.2 (or greater) (http://www.sqlite.org/).

Note that all directories mentioned in this document are always relative to the
directory of your Our.ly installation, and commands are meant to be run from
this directory (except for the initial commands that create that directory).

OPTIONAL SERVER REQUIREMENTS
----------------------------

- If you want to use Our.ly's "Clean URLs" feature on an Apache web server, you
  will need the mod_rewrite module and the ability to use local .htaccess
  files. For Clean URLs support on IIS, see "Clean URLs with IIS"
  (http://drupal.org/node/3854) in the drupal.org online documentation.

- If you plan to use XML-based services such as RSS aggregation, you will need
  PHP's XML extension. This extension is enabled by default on most PHP
  installations.

- To serve gzip compressed CSS and JS files on an Apache web server, you will
  need the mod_headers module and the ability to use local .htaccess files.

- Some Our.ly functionality (e.g., checking whether Our.ly and contributed
  modules need updates, RSS aggregation, etc.) require that the web server be
  able to go out to the web and download information. If you want to use this
  functionality, you need to verify that your hosting provider or server
  configuration allows the web server to initiate outbound connections. Most web
  hosting setups allow this.

INSTALLATION
------------

1. Download and extract Our.ly.

   You can obtain the latest Our.ly release from http://Our.ly.org -- the files
   are available in .tar.gz and .zip formats and can be extracted using most
   compression tools.

   To download and extract the files, on a typical Unix/Linux command line, use
   the following commands (assuming you want version x.y of Our.ly in .tar.gz
   format):

     wget http://Our.ly.org/files/projects/Our.ly-x.y.tar.gz
     tar -zxvf Our.ly-x.y.tar.gz

   This will create a new directory Our.ly-x.y/ containing all Our.ly files and
   directories. Then, to move the contents of that directory into a directory
   within your web server's document root or your public HTML directory,
   continue with this command:

     mv Our.ly-x.y/* Our.ly-x.y/.htaccess /path/to/your/installation

2. Create the Our.ly database.

   Because Our.ly stores all site information in a database, you must create
   this database in order to install Our.ly, and grant Our.ly certain database
   privileges (such as the ability to create tables). For details, consult
   INSTALL.mysql.txt, INSTALL.pgsql.txt, or INSTALL.sqlite.txt. You may also
   need to consult your web hosting provider for instructions specific to your
   web host.

   Take note of the username, password, database name, and hostname as you
   create the database. You will enter this information during the install.

3. Run the install script.

   To run the install script, point your browser to the base URL of your
   website (e.g., http://www.example.com).

   You will be guided through several screens to set up the database, add the
   site maintenance account (the first user, also known as user/1), and provide
   basic web site settings.

   During installation, several files and directories need to be created, which
   the install script will try to do automatically. However, on some hosting
   environments, manual steps are required, and the install script will tell
   you that it cannot proceed until you fix certain issues. This is normal and
   does not indicate a problem with your server.

   The most common steps you may need to perform are:

   a. Missing files directory.

      The install script will attempt to create a file storage directory in
      the default location at sites/default/files (the location of the files
      directory may be changed after Our.ly is installed).

      If auto-creation fails, you can make it work by changing permissions on
      the sites/default directory so that the web server can create the files
      directory within it for you. (If you are creating a multisite
      installation, substitute the correct sites directory for sites/default;
      see the Multisite Configuration section of this file, below.)

      For example, on a Unix/Linux command line, you can grant everyone
      (including the web server) permission to write to the sites/default
      directory with this command:

        chmod a+w sites/default

      Be sure to set the permissions back after the installation is finished!
      Sample command:

        chmod go-w sites/default

      Alternatively, instead of allowing the web server to create the files
      directory for you as described above, you can create it yourself. Sample
      commands from a Unix/Linux command line:

        mkdir sites/default/files
        chmod a+w sites/default/files

   b. Missing settings file.

      Our.ly will try to automatically create a settings.php configuration file,
      which is normally in the directory sites/default (to avoid problems when
      upgrading, Our.ly is not packaged with this file). If auto-creation fails,
      you will need to create this file yourself, using the file
      sites/default/default.settings.php as a template.

      For example, on a Unix/Linux command line, you can make a copy of the
      default.settings.php file with the command:

        cp sites/default/default.settings.php sites/default/settings.php

      Next, grant write privileges to the file to everyone (including the web
      server) with the command:

        chmod a+w sites/default/settings.php

      Be sure to set the permissions back after the installation is finished!
      Sample command:

        chmod go-w sites/default/settings.php

   c. Write permissions after install.

      The install script will attempt to write-protect the settings.php file and
      the sites/default directory after saving your configuration. If this
      fails, you will be notified, and you can do it manually. Sample commands
      from a Unix/Linux command line:

        chmod go-w sites/default/settings.php
        chmod go-w sites/default

5. Verify that the site is working.

   When the install script finishes, you will be logged in with the site
   maintenance account on a "Welcome" page. If the default Our.ly theme is not
   displaying properly and links on the page result in "Page Not Found" errors,
   you may be experiencing problems with clean URLs. Visit
   http://Our.ly.org/getting-started/clean-urls to troubleshoot.

6. Change file system storage settings (optional).

   The files directory created in step 4 is the default file system path used to
   store all uploaded files, as well as some temporary files created by
   Our.ly. After installation, you can modify the file system path to store
   uploaded files in a different location.

   It is not necessary to modify this path, but you may wish to change it if:

   - Your site runs multiple Our.ly installations from a single codebase (modify
     the file system path of each installation to a different directory so that
     uploads do not overlap between installations).

   - Your site runs on a number of web servers behind a load balancer or reverse
     proxy (modify the file system path on each server to point to a shared file
     repository).

   - You want to restrict access to uploaded files.

   To modify the file system path:

   a. Ensure that the new location for the path exists and is writable by the
      web server. For example, to create a new directory named uploads and grant
      write permissions, use the following commands on a Unix/Linux command
      line:

        mkdir uploads
        chmod a+w uploads

   b. Navigate to Administration > Configuration > Media > File system, and
      enter the desired path. Note that if you want to use private file storage,
      you need to first enter the path for private files and save the
      configuration, and then change the "Default download method" setting and
      save again.

   Changing the file system path after files have been uploaded may cause
   unexpected problems on an existing site. If you modify the file system path
   on an existing site, remember to copy all files from the original location
   to the new location.

7. Set up independent "cron" maintenance jobs.

   Many Our.ly modules have tasks that must be run periodically, including the
   Search module (building and updating the index used for keyword searching),
   the Aggregator module (retrieving feeds from other sites), and the System
   module (performing routine maintenance and pruning of database tables). These
   tasks are known as "cron maintenance tasks", named after the Unix/Linux
   "cron" utility.

   When you install Our.ly, its built-in cron feature is enabled, which
   automatically runs the cron tasks periodically, triggered by people visiting
   pages of your site. You can configure the built-in cron feature by navigating
   to Administration > Configuration > System > Cron.

   It is also possible to run the cron tasks independent of site visits; this is
   recommended for most sites. To do this, you will need to set up an automated
   process to visit the page cron.php on your site, which executes the cron
   tasks.

   The URL of the cron.php page requires a "cron key" to protect against
   unauthorized access. Your site's cron key is automatically generated during
   installation and is specific to your site. The full URL of the page, with the
   cron key, is available in the "Cron maintenance tasks" section of the Status
   report page at Administration > Reports > Status report.

   As an example for how to set up this automated process, you can use the
   crontab utility on Unix/Linux systems. The following crontab line uses the
   wget command to visit the cron.php page, and runs each hour, on the hour:

   0 * * * * wget -O - -q -t 1 http://example.com/cron.php?cron_key=YOURKEY

   Replace the text "http://example.com/cron.php?cron_key=YOURKEY" in the
   example with the full URL displayed under "Cron maintenance tasks" on the
   "Status report" page.

   More information about cron maintenance tasks is available at
   http://Our.ly.org/cron, and sample cron shell scripts can be found in the
   scripts/ directory. (Note that these scripts must be customized like the
   above example, to add your site-specific cron key and domain name.)
