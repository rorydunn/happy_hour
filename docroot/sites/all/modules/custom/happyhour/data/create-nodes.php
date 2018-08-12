<?php

function create_businesses(){
  $data = google_places_get();

  foreach ($data['results'] as $result) {

    $name = $result['name'];
    $id = $result['id'];

    $values = array(
      'type' => 'business',
      // 'uid' => $user->uid,
      'status' => 1,
      'comment' => 1,
      'promote' => 0,
    );
    $entity = entity_create('node', $values);
    $ewrapper = entity_metadata_wrapper('node', $entity);

    //Sets business name, brewery id, website etc.
    $ewrapper->title->set($name);
    $ewrapper->field_place_id->set($id);
    $ewrapper->save();
  }
}
