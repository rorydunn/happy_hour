# happy_hour

Project Author: Rory Dunn

Author's Email: rory.f.dunn@gmail.com

## About the Project
This is a drupal 7 project that installs a web application that is intended to store data relating to happy hours.
The Google Places API is used to pull in a list of businesses, then "Specials" can be created which relate to the businesses.

Install using the "Happy Hour App" install profile.  This will install all required contrib, custom, and feature modules to pull in some business using the google places API and create specials related to them.
After installing go here `admin/structure/pull-data` to pull in data using the google places api.  An API key is needed, this AIzaSyCWA7n9HX92FNfKsASfpudGAjHDbzRf2FM can be used.

##To Do
Update specials content type to include more relevant fields like time, dates, etc.
Validate API key before making API call or build out better error reporting if call fails. 
Add extra parameters to api call function so that it is not just looking for restaurants in brooklyn. 
Buid front end, update business page. 
