<?php

// These values are updated during installation.
define('ALLSKY_HOME',    '/home/brian/allsky');
define('ALLSKY_CONFIG',  '/home/brian/allsky/config');
define('ALLSKY_SCRIPTS', '/home/brian/allsky/scripts');
define('ALLSKY_TMP', '/home/brian/allsky/tmp');
define('ALLSKY_IMAGES',  '/home/brian/allsky/images');
define('ALLSKY_MESSAGES',  '/home/brian/allsky/config/messages.txt');
define('ALLSKY_WEBUI',  '/home/brian/allsky/html');
define('ALLSKY_WEBSITE',  '/home/brian/allsky/html/allsky');
define('ALLSKY_WEBSITE_LOCAL_CONFIG_NAME',  'configuration.json');
define('ALLSKY_WEBSITE_REMOTE_CONFIG_NAME',  'remote_configuration.json');
define('ALLSKY_WEBSITE_LOCAL_CONFIG',  '/home/brian/allsky/html/allsky/configuration.json');
define('ALLSKY_WEBSITE_REMOTE_CONFIG',  '/home/brian/allsky/config/remote_configuration.json');
define('ALLSKY_OVERLAY',  '/home/brian/allsky/config/overlay');
define('ALLSKY_MODULES',  '/home/brian/allsky/config/modules');
define('ALLSKY_OWNER', 'brian');
define('ALLSKY_GROUP', 'brian');
define('WEBSERVER_GROUP', 'www-data');
define('ALLSKY_REPO',  '/home/brian/allsky/config_repo');
define('ALLSKY_VERSION',  'v2023.05.01_04');
define('RASPI_CONFIG',   '/home/brian/allsky/config');

// Split the placeholder so it doesn't get replaced.
if (ALLSKY_HOME == "XX_ALLSKY_HOME" . "_XX") {
	// This file hasn't been updated yet after installation.
	// This would only happen if they updated this file and not the whole Allsky release,
	// which is hard since we only come out with releases.
	echo "<div style='font-size: 200%;'>";
	echo "<span style='color: red'>";
	echo "Please run the following from the 'allsky' directory before using the WebUI:";
	echo "</span>";
	echo "<code>   ./install.sh --update</code>";
	echo "</div>";
	exit;
}

?>
