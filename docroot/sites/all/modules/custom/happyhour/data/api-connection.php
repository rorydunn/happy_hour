<?php


/**
 * Makes get call to google places API
 * Parameters include, lattitude, longitude, api key
 */
function google_places_get(){

  //Initialize cURL.
  $curl = curl_init();

  //Set the URL that you want to GET by using the CURLOPT_URL option.
  curl_setopt($curl, CURLOPT_URL, 'https://maps.googleapis.com/maps/api/place/nearbysearch/json?location=40.670057,-73.955866&radius=20000&type=restaurant&key=AIzaSyCWA7n9HX92FNfKsASfpudGAjHDbzRf2FM');

  //Set CURLOPT_RETURNTRANSFER so that the content is returned as a variable.
  curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);

  //Execute the request.
  $data = curl_exec($curl);
  $data = drupal_json_decode($data);

  //Close the cURL handle.
  curl_close($curl);

  //Print the data out onto the page.
  return $data;

}
