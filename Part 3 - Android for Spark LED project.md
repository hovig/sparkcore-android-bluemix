Part 3 - Android for Spark LED project:

Import Android app into your IDE (Eclipse or Studio) and change add the credentials from your Bluemix app.
-	Basically, click on MOBILE OPTIONS and copy/paste them in sparkled.properties and update the following:
		applicationID=<INSERT_APPLICATION_ID_HERE>
		applicationSecret=<INSERT_APPLICATION_SECRET_HERE>
		applicationRoute=<INSERT_APPLICATION_ROUTE_HERE>

-	Also, in the MainActivity.java: in PostClientControlLed method you need to update your device name/id and 
    access token (from the settings webpage of https://build.spark.io/build)

For testing purposes, when you run the app, you will some information displayed that are coming from Bluemix Push 
service. The tags might not be available because you have not set or send any tags yet.
Press buttons and check the app with Spark Core. You should receive notifications on top of your phone screen.

-	You will need IBM's libraries (ibmbluemix.jar, ibmpush.jar) for Bluemix and Push, which in this case all are 
    included in the libs folder inside the package. There are additional libraries from Bluemix in case there will 
	features expansion in your app.

-	Right click on your package after you import it into your IDE and go to Properties and click on 
    Android -> Add the following libraries:
	1) appcompat_v7 usually found at YOUR_IDE_PACKAGE_PATH\sdk\extras\android\support\v7\appcompat\libs
	2) google-play-services usually found at:
       YOUR_IDE_PACKAGE_PATH\sdk\extras\google\google_play_services\libproject\google-play-services_lib\libs
	