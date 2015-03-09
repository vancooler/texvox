<?php
/**
 * @file views-views-json-style-simple.tpl.php
 * Default template for the Views JSON style plugin using the simple format
 *
 * Variables:
 * - $view: The View object.
 * - $rows: Hierachial array of key=>value pairs to convert to JSON
 * - $options: Array of options for this style
 *
 * @ingroup views_templates
 */

$jsonp_prefix = $options['jsonp_prefix'];


///////////////////////////// - AGW change json output format - ///////////////////////////////////
$rustart = microtime(true);
foreach ($rows['nodes'] as $key => $node) {
  ///////////////////////////////////////////
  //                                       //
  // REWRITE some fields in BRANCH         //
  //                                       //
  ///////////////////////////////////////////
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "Branch"){
    // Rewrite opening hours
    if(isset($node['node']['Opening Hours']) and !empty($node['node']['Opening Hours'])){
      $opening_hours = array();
      $oh_string = $node['node']['Opening Hours'];
      $pieces = explode("; ", $oh_string);
      foreach ($pieces as $skey => $value) {
        if(!empty($value)){
          $pair = explode(": ", $value);
          if(count($pair) == 2){          
            $opening_hours[$pair[0]] = $pair[1];
          }
        }
      }
      $rows['nodes'][$key]['node']['Opening Hours'] = $opening_hours;
    }

    /*
      Rewrite the timeslot
    */
    if(isset($node['node']['Timeslots']) and !empty($node['node']['Timeslots'])){
      $timeslot = array();
      $oh_string = $node['node']['Timeslots'];
      $pieces = explode(", ", $oh_string);
      foreach ($pieces as $skey => $value) {
        $rewrite_value = str_replace('dayOfTheWeek', 'dayOfTheWeek:', $value);
        $rewrite_value = str_replace('startTime', ', startTime:', $rewrite_value);
        $rewrite_value = str_replace('endTime', ', endTime:', $rewrite_value);
        $rewrite_value = str_replace('IVR', ', IVR:', $rewrite_value);

        if(!empty($rewrite_value)){
          $attributes = explode(", ", $rewrite_value);
          foreach ($attributes as $akey => $attribute) {
            $pair = explode("::", $attribute);
            if(count($pair) == 2){          
              $timeslot[$skey][trim($pair[0])] = substr(trim($pair[1]), 2);
            }
            
          }
        }
        // calculate duration
        $start_pieces = explode(':', $timeslot[$skey]['startTime']);
        $start_seconds = intval($start_pieces[0]) * 3600 + intval($start_pieces[1]) * 60;
        $end_pieces = explode(':', $timeslot[$skey]['endTime']);
        $end_seconds = intval($end_pieces[0]) * 3600 + intval($end_pieces[1]) * 60;
        if($start_seconds < $end_seconds){
          $duration = $end_seconds - $start_seconds;
        }
        else{
          $duration = 24 * 3600 + $end_seconds - $start_seconds;
        }
        $timeslot[$skey]['duration'] = $duration;
        unset($timeslot[$skey]['endTime']);
      }
      $rows['nodes'][$key]['node']['Timeslots'] = $timeslot;
    }


    // Rewrite holidays
    if(isset($node['node']['Holiday']) and !empty($node['node']['Holiday'])){
      $holidays = array();
      $oh_string = $node['node']['Holiday'];
      $pieces = explode(", ", $oh_string);
      foreach ($pieces as $skey => $value) {
        $rewrite_value = str_replace('Date', 'Date:', $value);
        $rewrite_value = str_replace('startTime', ', startTime:', $rewrite_value);
        $rewrite_value = str_replace('endTime', ', endTime:', $rewrite_value);
        $rewrite_value = str_replace('IVR', ', IVR:', $rewrite_value);

        if(!empty($rewrite_value)){
          $attributes = explode(", ", $rewrite_value);
          foreach ($attributes as $akey => $attribute) {
            $pair = explode("::", $attribute);
            if(count($pair) == 2){          
              $holidays[$skey][trim($pair[0])] = substr(trim($pair[1]), 2);
            }
            
          }
        }
        // calculate duration
        if(isset($holidays[$skey]['startTime']) and isset($holidays[$skey]['endTime'])){
          $start_pieces = explode(':', $holidays[$skey]['startTime']);
          $start_seconds = intval($start_pieces[0]) * 3600 + intval($start_pieces[1]) * 60;
          $end_pieces = explode(':', $holidays[$skey]['endTime']);
          $end_seconds = intval($end_pieces[0]) * 3600 + intval($end_pieces[1]) * 60;
          if($start_seconds < $end_seconds){
            $duration = $end_seconds - $start_seconds;
          }
          else{
            $duration = 24 * 3600 + $end_seconds - $start_seconds;
          }
          $holidays[$skey]['duration'] = $duration;
          unset($holidays[$skey]['endTime']);
        }
      }
      $rows['nodes'][$key]['node']['Holiday'] = $holidays;
    }

    // Rewrite phone numbers as an array
    if(isset($node['node']['Phone Numbers']) and !empty($node['node']['Phone Numbers'])){

      $phone_array = array();
      $phone_string = str_replace('\n', '', $node['node']['Phone Numbers']);
      // $phone_string = str_replace('\n', '', $phone_string);
      $pieces = explode(",", $phone_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Phone Number ", $element);
          foreach ($parts as $pkey => $value) {
            $pair = explode(':', $value);
            if(count($pair) == 2){          
              $phone_array[$skey][trim($pair[0])] = substr(trim($pair[1]), 2);
            }
          }  
        }
      }
      $rows['nodes'][$key]['node']['Phone Numbers'] = $phone_array;
    }

    // Rewrite search base as integer
    if(isset($node['node']['Search Base']) and !empty($node['node']['Search Base'])){
      $type = $rows['nodes'][$key]['node']['Search Base'];
      switch (substr($type, 0, 2)) {
        case 'Lo':
          $rows['nodes'][$key]['node']['Search Base'] = '0';
          break;
        case 'Ci':
          $rows['nodes'][$key]['node']['Search Base'] = '1';
          break;
        case 'Re':
          $rows['nodes'][$key]['node']['Search Base'] = '2';
          break;
        case 'Co':
          $rows['nodes'][$key]['node']['Search Base'] = '3';
          break;
        default:
          # code...
          break;
      }
    }

    // Find organization rgbHEX if branch have nothing
    if(!isset($node['node']['rgbHEX'])){
      $org_id = intval($node['node']['Organization']);

      $query="SELECT field_rgbhex_rgb FROM field_data_field_rgbhex WHERE entity_type ='node' AND bundle='organization' AND entity_id=$org_id LIMIT 1";
      $result=db_query($query);
      foreach ($result as $row) {
        $RGB = $row->field_rgbhex_rgb;
      }
      if(isset($RGB) and !empty($RGB)){
        $rows['nodes'][$key]['node']['rgbHEX'] = $RGB;      
      }
    }

    // // Add IVRs as an array
    // $branch_id = intval($node['node']['Node ID']);
    // $query="SELECT entity_id FROM field_data_field_branch WHERE entity_type ='node' AND bundle = 'ivr' AND field_branch_target_id = $branch_id ORDER BY entity_id ASC";
    // $result=db_query($query);
    // $branch_ids = array();
    // foreach ($result as $row) {
    //   $branch_ids[] = $row->entity_id;
    // }
    // $rows['nodes'][$key]['node']['IVRs in this branch'] = $branch_ids;
  }

  ///////////////////////////////////////////
  //                                       //
  // REWRITE some fields in SCREEN         //
  //                                       //
  ///////////////////////////////////////////
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "Screen"){
    // Rewrite screen type as integer
    if(isset($node['node']['Screen Type']) and !empty($node['node']['Screen Type'])){
      $type = $rows['nodes'][$key]['node']['Screen Type'];
      switch (substr($type, 0, 1)) {
        case 'D':
          $rows['nodes'][$key]['node']['Screen Type'] = '0';
          break;
        case 'O':
          $rows['nodes'][$key]['node']['Screen Type'] = '1';
          break;
        case 'I':
          $rows['nodes'][$key]['node']['Screen Type'] = '2';
          break;
        default:
          # code...
          break;
      }
    }
    // Rewrite no input action as integer
    if(isset($node['node']['No Input Action']) and !empty($node['node']['No Input Action'])){
      $action = $rows['nodes'][$key]['node']['No Input Action'];
      switch (substr($action, 0, 2)) {
        case 'Go':
          $rows['nodes'][$key]['node']['No Input Action'] = '0';
          break;
        case 'Co':
          $rows['nodes'][$key]['node']['No Input Action'] = '1';
          break;
        case 'En':
          $rows['nodes'][$key]['node']['No Input Action'] = '2';
          break;
        case 'Se':
          $rows['nodes'][$key]['node']['No Input Action'] = '3';
          break;
        default:
          # code...
          break;
      }
    }
    // Rewrite input action as integer
    if(isset($node['node']['Input Action']) and !empty($node['node']['Input Action'])){
      $action = $rows['nodes'][$key]['node']['Input Action'];
      switch (substr($action, 0, 2)) {
        case 'Go':
          $rows['nodes'][$key]['node']['Input Action'] = '0';
          break;
        case 'Co':
          $rows['nodes'][$key]['node']['Input Action'] = '1';
          break;
        case 'En':
          $rows['nodes'][$key]['node']['Input Action'] = '2';
          break;
        case 'Se':
          $rows['nodes'][$key]['node']['Input Action'] = '3';
          break;
        default:
          # code...
          break;
      }
    }
    
    // Add Verify Input as 0 if empty
    if(!isset($rows['nodes'][$key]['node']['Verify Input']) or empty($rows['nodes'][$key]['node']['Verify Input'])){
      $rows['nodes'][$key]['node']['Verify Input'] = '0';
    }

    // Rewrite subtitles as an array
    if(isset($rows['nodes'][$key]['node']['HeaderText']) and !empty($rows['nodes'][$key]['node']['HeaderText'])){
      $subtitle_array = array();
      $subtitle_string = str_replace('\n', '', $node['node']['HeaderText']);
      $pieces = explode("Language:", $subtitle_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Display Subtitle:", $element);
          if(count($parts) == 2){          
            $subtitle_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
            $subtitle_array[($skey-1)]['HeaderText'] = substr(trim($parts[1]), 2);
          }
        }
      }
      $rows['nodes'][$key]['node']['HeaderText'] = $subtitle_array;
    }

    // rewrite Input Text as an array
    if(isset($rows['nodes'][$key]['node']['Input Text']) and !empty($rows['nodes'][$key]['node']['Input Text'])){
      $input_text_array = array();
      $input_text_string = str_replace('\n', '', $node['node']['Input Text']);
      $pieces = explode("Language:", $input_text_string);
      
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Text:", $element);
          if(count($parts) == 2){          
            $input_text_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
            $input_text_array[($skey-1)]['Text'] = substr(trim($parts[1]), 2);
          }
        }
      }
      $rows['nodes'][$key]['node']['Input Text'] = $input_text_array;
    }

    // Rewrite titles as an array
    if(isset($rows['nodes'][$key]['node']['ScreenName']) and !empty($rows['nodes'][$key]['node']['ScreenName'])){
      $title_array = array();
      $title_string = str_replace('\n', '', $node['node']['ScreenName']);
      $pieces = explode("Language:", $title_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Display Title:", $element);
          if(count($parts) == 2){          
            $title_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
            $title_array[($skey-1)]['ScreenName'] = substr(trim($parts[1]), 2);
          }
        }
      }
      $rows['nodes'][$key]['node']['ScreenName'] = $title_array;
    }

    // Rewrite bodyText as an array
    if(isset($rows['nodes'][$key]['node']['BodyText']) and !empty($rows['nodes'][$key]['node']['BodyText'])){
      $body_array = array();
      $body_string = str_replace('\n', '', $node['node']['BodyText']);
      $pieces = explode("Language:", $body_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Body Text:", $element);
          if(count($parts) == 2){          
            $body_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
            $body_array[($skey-1)]['BodyText'] = substr(trim($parts[1]), 2);
          }
        }
      }
      $rows['nodes'][$key]['node']['BodyText'] = $body_array;
    }


    // rewrite the "title" with "Screen Code"
    if(isset($rows['nodes'][$key]['node']['title']) and !empty($rows['nodes'][$key]['node']['title'])){
      
      $rows['nodes'][$key]['node']['Screen Code'] = $rows['nodes'][$key]['node']['title'];
      unset($rows['nodes'][$key]['node']['title']);
    }

    // rewrite "Menus in this screen" as an array
    if(isset($rows['nodes'][$key]['node']['Menus in this screen']) and !empty($rows['nodes'][$key]['node']['Menus in this screen'])){
      $menu_array = array();
      $menu_string = $node['node']['Menus in this screen'];
      $pieces = explode(", ", $menu_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $menu_array[] = $element;
        }
      }
      $rows['nodes'][$key]['node']['Menus in this screen'] = $menu_array;
      
    }

  }  

  ///////////////////////////////////////////
  //                                       //
  // REWRITE some fields in SCREEN MENU    //
  //                                       //
  ///////////////////////////////////////////
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "Screen Menu"){
    // Rewrite action as integer
    if(isset($node['node']['Action']) and !empty($node['node']['Action'])){
      $action = $rows['nodes'][$key]['node']['Action'];
      switch (substr($action, 0, 2)) {
        case 'Go':
          $rows['nodes'][$key]['node']['Action'] = '0';
          break;
        case 'Co':
          $rows['nodes'][$key]['node']['Action'] = '1';
          break;
        case 'En':
          $rows['nodes'][$key]['node']['Action'] = '2';
          break;
        case 'Se':
          $rows['nodes'][$key]['node']['Action'] = '3';
          break;
        case 'Cl':
          $rows['nodes'][$key]['node']['Action'] = '4';
          break;
        default:
          # code...
          break;
      }
    }

    // Rewrite titles as an array
    if(isset($rows['nodes'][$key]['node']['ScreenName']) and !empty($rows['nodes'][$key]['node']['ScreenName'])){
      $title_array = array();
      $title_string = str_replace('\n', '', $node['node']['ScreenName']);
      $pieces = explode("Language:", $title_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Display Title:", $element);
          if(count($parts) == 2){          
            $title_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
            $title_array[($skey-1)]['ScreenName'] = substr(trim($parts[1]), 2);
          }
        }
      }
      $rows['nodes'][$key]['node']['Title'] = $title_array;
      unset($rows['nodes'][$key]['node']['ScreenName']);
    }

    // rewrite the "title" with "key"
    if(isset($rows['nodes'][$key]['node']['title'])){
      unset($rows['nodes'][$key]['node']['title']);
    }
    if(!isset($rows['nodes'][$key]['node']['Key']) or empty($rows['nodes'][$key]['node']['Key'])){      
      $rows['nodes'][$key]['node']['Key'] = '0';
    }
  }  

  ///////////////////////////////////////////
  //                                       //
  // REWRITE some fields in IVR            //
  //                                       //
  ///////////////////////////////////////////
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "IVR"){
    // Rewrite "Screens in this IVR" as an array
    if(isset($rows['nodes'][$key]['node']['Screens in this IVR']) and !empty($rows['nodes'][$key]['node']['Screens in this IVR'])){
      $screen_array = array();
      $screen_string = $node['node']['Screens in this IVR'];
      $pieces = explode(", ", $screen_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $screen_array[] = $element;
        }
      }
      $rows['nodes'][$key]['node']['Screens in this IVR'] = $screen_array;
    } 

    // // Rewrite "Tap to enter" as an array
    // if(isset($rows['nodes'][$key]['node']['Tap to enter']) and !empty($rows['nodes'][$key]['node']['Tap to enter'])){
    //   $body_array = array();
    //   $body_string = str_replace('\n', '', $node['node']['Tap to enter']);
    //   $pieces = explode("Tap to enter Language:", $body_string);
    //   foreach ($pieces as $skey => $element) {
    //     if(!empty($element)){
    //       $parts = explode("Tap to enter in selected language:", $element);
    //       if(count($parts) == 2){          
    //         $body_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
    //         $body_array[($skey-1)]['Tap to enter Text'] = substr(trim($parts[1]), 2);
    //       }
    //     }
    //   }
    //   $rows['nodes'][$key]['node']['Tap to enter'] = $body_array;
    // }
  }  

  ///////////////////////////////////////////
  //                                       //
  // REWRITE some fields in organization   //
  //                                       //
  ///////////////////////////////////////////
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "Organization"){
    // Add "Branches" as an array
    $org_id = intval($node['node']['Node ID']);
    $query="SELECT entity_id FROM field_data_field_organization WHERE entity_type ='node' AND bundle = 'branch' AND field_organization_target_id = $org_id ORDER BY entity_id ASC";
    $result=db_query($query);
    $branch_ids = array();
    foreach ($result as $row) {
      $branch_ids[] = $row->entity_id;
    }
    $rows['nodes'][$key]['node']['Branches in this organization'] = $branch_ids;
  }  
}

////////////////////////////////////////////////
//
// Put all branches under organization
//
////////////////////////////////////////////////
$all_branches = array();
foreach ($rows['nodes'] as $lkey => $loop_node) {
  if(isset($loop_node['node']) and isset($loop_node['node']['Node Type']) and $loop_node['node']['Node Type'] == "Branch"){
    $all_branches[$lkey] = $loop_node;
  }
}
foreach ($rows['nodes'] as $key => $node) {
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "Organization"){
    if (isset($rows['nodes'][$key]['node']['Branches in this organization'])) {
      $branch_ids = $rows['nodes'][$key]['node']['Branches in this organization'];
      if(count($branch_ids) > 0){
        $rows['nodes'][$key]['node']['Branches'] = array();
        $branches_key = array();
        foreach ($branch_ids as $bkey => $bid) {
          $branch_id = intval($bid);
          foreach ($all_branches as $lkey => $loop_node) {
            $loop_branch_id = intval($loop_node['node']['Node ID']);
            if($loop_branch_id == $branch_id){
              // add branch to this organization
              $rows['nodes'][$key]['node']['Branches'][$bkey] = $loop_node['node'];
              // log that node id
              $branches_key[] = $lkey;
            }
          }
        }
        // remove the branches logged
        foreach ($branches_key as $dkey => $node_key) {
          unset($rows['nodes'][$node_key]);
        }
      }
    }
  }
}
$tmp_rows = array();
$tmp_rows['nodes'] = array();
foreach ($rows['nodes'] as $key => $node) {
  $tmp_rows['nodes'][] = $node;
}
$rows = $tmp_rows;


////////////////////////////////////////////////
//
// Put all menus under screen
//
////////////////////////////////////////////////
$all_menus = array();
foreach ($rows['nodes'] as $lkey => $loop_node) {
  if(isset($loop_node['node']) and isset($loop_node['node']['Node Type']) and $loop_node['node']['Node Type'] == "Screen Menu"){
    $all_menus[$lkey] = $loop_node;
  }
}
foreach ($rows['nodes'] as $key => $node) {
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "Screen"){
    $menus_here = array();
    $verify_options = array();
    if(isset($rows['nodes'][$key]['node']['Menus in this screen'])){
      $menu_ids = $rows['nodes'][$key]['node']['Menus in this screen'];  
      if(count($menu_ids) > 0){
        $rows['nodes'][$key]['node']['Menus'] = array();
        $menu_key = array();
        foreach ($menu_ids as $bkey => $bid) {
          $menu_id = intval($bid);
          foreach ($all_menus as $lkey => $loop_node) {
            $loop_menu_id = intval($loop_node['node']['Node ID']);
            if($loop_menu_id == $menu_id){
              // add branch to this organization
              $rows['nodes'][$key]['node']['Menus'][$bkey] = $loop_node['node'];
              $menus_here[$bkey] = $loop_node['node'];
              // log that node id
              $menu_key[] = $lkey;
            }
          }
        }
        // remove the branches logged
        foreach ($menu_key as $dkey => $node_key) {
          unset($rows['nodes'][$node_key]);
        }
      } 
    }

    // sort the menus by 'delta'
    $screen_id = intval($rows['nodes'][$key]['node']['Node ID']);
    if(count($menus_here) > 1){
      $result = db_select('field_data_field_menus', 'm')
          ->fields('m', array('field_menus_target_id'))
          ->condition('m.entity_id', $screen_id, '=')
          ->orderBy('m.delta', 'ASC')
          ->execute();
      
      $menu_array = array();
      foreach ($result as $row) {
        $menuID = intval($row->field_menus_target_id);
        foreach ($menus_here as $mkey => $menu) {
          if(intval($menu['Node ID']) == $menuID){
            $menu_array[] = $menu;
          }
        }
      }
      $rows['nodes'][$key]['node']['Menus'] = $menu_array;      
    }
    // Verify options
    $result = db_select('field_data_field_new_verify_options', 'm')
          ->fields('m', array('field_new_verify_options_target_id'))
          ->condition('m.entity_id', $screen_id, '=')
          ->orderBy('m.delta', 'ASC')
          ->execute();
    foreach ($result as $row) {
      $mid = $row->field_new_verify_options_target_id;
      foreach ($all_menus as $lkey => $loop_node) {
        $loop_menu_id = intval($loop_node['node']['Node ID']);
        if($loop_menu_id == $mid){
          // add branch to this organization
          $rows['nodes'][$key]['node']['Verify Options'][] = $loop_node['node'];
        }
      }
    }
  }
}
$tmp_rows = array();
$tmp_rows['nodes'] = array();
foreach ($rows['nodes'] as $key => $node) {
  $tmp_rows['nodes'][] = $node;
}
$rows = $tmp_rows;

////////////////////////////////////////////////
//
// Put all screens under IVR
//
////////////////////////////////////////////////
$all_screens = array();
foreach ($rows['nodes'] as $lkey => $loop_node) {
  if(isset($loop_node['node']) and isset($loop_node['node']['Node Type']) and $loop_node['node']['Node Type'] == "Screen"){
    $all_screens[$lkey] = $loop_node;
  }
}
foreach ($rows['nodes'] as $key => $node) {
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "IVR"){
    if(isset($rows['nodes'][$key]['node']['Screens in this IVR'])){
      $screen_id = $rows['nodes'][$key]['node']['Screens in this IVR'];
      if(count($screen_id) > 0){
        $rows['nodes'][$key]['node']['Screens'] = array();
        $screen_key = array();
        foreach ($screen_id as $bkey => $bid) {
          $screen_id = intval($bid);
          foreach ($all_screens as $lkey => $loop_node) {
            $loop_screen_id = intval($loop_node['node']['Node ID']);
            if($loop_screen_id == $screen_id){
              // add branch to this organization
              $rows['nodes'][$key]['node']['Screens'][$bkey] = $loop_node['node'];
              // log that node id
              $screen_key[] = $lkey;
            }
          }
        }
        // remove the branches logged
        foreach ($screen_key as $dkey => $node_key) {
          unset($rows['nodes'][$node_key]);
        }
      }
    }
  }
}
$tmp_rows = array();
$tmp_rows['nodes'] = array();
foreach ($rows['nodes'] as $key => $node) {
  $tmp_rows['nodes'][] = $node;
}
$rows = $tmp_rows;



////////////////////////////////////////////////
//
// Rebuild the sturcture
//
////////////////////////////////////////////////
$all_org = array();
$all_ivr = array();
foreach ($rows['nodes'] as $lkey => $loop_node) {
  if(isset($loop_node['node']) and isset($loop_node['node']['Node Type']) and $loop_node['node']['Node Type'] == "Organization"){
    $all_org[] = $loop_node['node'];
  }
  else if (isset($loop_node['node']) and isset($loop_node['node']['Node Type']) and $loop_node['node']['Node Type'] == "IVR"){
    $all_ivr [] = $loop_node['node'];
  }
}
$hash = array();
$hash['Organizations'] = $all_org;
$hash['IVRs'] = $all_ivr;
$rows = $hash;


////////////////////////////////////////////////
//
// remove useless info
//
////////////////////////////////////////////////
foreach ($rows['Organizations'] as $okey => $org) {
  unset($rows['Organizations'][$okey]['Node Type']);
  unset($rows['Organizations'][$okey]['Branches in this organization']);
  if(isset($org['Branches'])){
    foreach ($org['Branches'] as $bkey => $branch) {
      unset($rows['Organizations'][$okey]['Branches'][$bkey]['Node Type']);
      unset($rows['Organizations'][$okey]['Branches'][$bkey]['Organization']);
    }
  }
}
foreach ($rows['IVRs'] as $ikey => $ivr) {
  unset($rows['IVRs'][$ikey]['Node Type']);
  if(isset($rows['IVRs'][$ikey]['Screens in this IVR'])){
    unset($rows['IVRs'][$ikey]['Screens in this IVR']); 
  }
  if(isset($ivr['Screens'])){
    foreach ($ivr['Screens'] as $skey => $screen) {
      unset($rows['IVRs'][$ikey]['Screens'][$skey]['Node Type']);
      unset($rows['IVRs'][$ikey]['Screens'][$skey]['Menus in this screen']);
      if(isset($screen['Menus'])){
        foreach ($screen['Menus'] as $mkey => $menu) {
          unset($rows['IVRs'][$ikey]['Screens'][$skey]['Menus'][$mkey]['Node Type']);
        }
      }
      if(isset($screen['Verify Options'])){
        foreach ($screen['Verify Options'] as $mkey => $menu) {
          unset($rows['IVRs'][$ikey]['Screens'][$skey]['Verify Options'][$mkey]['Node Type']);
        }
      }
    }
  }
}


////////////////////////////////////////////////
//
// Show deleted nodes id since the timestamp
//
////////////////////////////////////////////////
$deleted_node_ids = array();
$url = request_uri();
$temp = explode('/', $url);
$timestamp = intval($temp[(count($temp)-1)]);
if($timestamp > 0){
  $query="SELECT entity_id FROM entity_delete_log WHERE entity_type ='node' AND entity_bundle IN ('organization', 'ivr', 'screen', 'branch', 'screen_menu') AND deleted >= $timestamp ORDER BY entity_id ASC";
  $result=db_query($query);
  foreach ($result as $row) {
    $deleted_node_ids[] = $row->entity_id;
  }
  $query="SELECT nid FROM node WHERE status != 1 AND type IN ('organization', 'ivr', 'screen', 'branch', 'screen_menu') AND changed >= $timestamp ORDER BY nid ASC";
  $result=db_query($query);
  foreach ($result as $row) {
    $deleted_node_ids[] = $row->entity_id;
  }
  sort($deleted_node_ids);
  $rows['Deleted Nodes'] = $deleted_node_ids;
  $ruend = microtime(true);
  watchdog('Node list time', '<pre>'. print_r(($ruend-$rustart), TRUE) .'</pre>');
}
// dpm($rows);

////////////////////////////////////////////////
//
// Show tap to enter text
//
////////////////////////////////////////////////
$tap_to_enter = array();
  $query = db_select('field_data_field_language', 'l');
  $query->join('taxonomy_term_data', 't', 'l.entity_id = t.tid');
  $result = $query->fields('t', array('name'))
      ->fields('l', array('field_language_value'))
      ->condition('l.entity_type', 'taxonomy_term', '=')
      ->condition('l.bundle', 'tap_to_enter_text', '=')
      ->execute();

  foreach ($result as $row) {
    $language = $row->field_language_value;
    $text = $row->name;

    $tap_to_enter['Language'] = $language;
    $tap_to_enter['Text'] = $text;
  }

  if(!empty($tap_to_enter)){
    $rows['Tap to enter texts'][] = $tap_to_enter;
  }


//////////////////////////////////// - Drupal theme default - ////////////////////////////////////
if ($view->override_path) {
  // We're inside a live preview where the JSON is pretty-printed.
  $json = _views_json_encode_formatted($rows, $options);
  if ($jsonp_prefix) $json = "$jsonp_prefix($json)";
  print "<code>$json</code>";
}
else {
  $json = _views_json_json_encode($rows, $bitmask);
  if ($options['remove_newlines']) {
     $json = preg_replace(array('/\\\\n/'), '', $json);
  }

  if (isset($_GET[$jsonp_prefix]) && $jsonp_prefix) {
    $json = $_GET[$jsonp_prefix] . '(' . $json . ')';
  }

  if ($options['using_views_api_mode']) {
    // We're in Views API mode.
    print $json;
  }
  else {
    // We want to send the JSON as a server response so switch the content
    // type and stop further processing of the page.
    $content_type = ($options['content_type'] == 'default') ? 'application/json' : $options['content_type'];
    drupal_add_http_header("Content-Type", "$content_type; charset=utf-8");
    print $json;
    drupal_page_footer();
    exit;
  }
}
