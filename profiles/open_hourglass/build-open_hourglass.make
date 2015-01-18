; Drush make api version.
api = 2
core = 7.x

; Drupal core
projects[drupal][version] = "7.34"

; Installation profile
projects[open_hourglass][type] = "profile"
projects[open_hourglass][download][type] = git
projects[open_hourglass][download][url] = "https://bitbucket.org/mxsystems/time-tracker.git"