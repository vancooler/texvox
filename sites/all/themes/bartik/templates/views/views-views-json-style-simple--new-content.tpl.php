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


//Change output format 
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

    // Rewrite holidays
    if(isset($node['node']['Holidays']) and !empty($node['node']['Holidays'])){
      $holidays = array();
      $holiday_string = $node['node']['Holidays'];
      $pieces = explode(", ", $holiday_string);
      foreach ($pieces as $skey => $value) {
        if(!empty($value)){
          $holidays[] = $value;
        }
      }
      $rows['nodes'][$key]['node']['Holidays'] = $holidays;
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
              $phone_array[$skey][$pair[0]] = substr(trim($pair[1]), 2);
            }
          }  
        }
      }
      $rows['nodes'][$key]['node']['Phone Numbers'] = $phone_array;
    }

    // Rewrite search base as default 0 if empty
    if(!isset($node['node']['Search Base']) or empty($node['node']['Search Base'])){
      $rows['nodes'][$key]['node']['Search Base'] = '0';
    }

    // Find organization rgbHEX if branch have nothing
    if(!isset($node['node']['rgbHEX'])){
      $org_id = intval($node['node']['Organization']);

      $query="SELECT field_rgbhex_value FROM field_data_field_rgbhex WHERE entity_type ='node' AND bundle='organization' AND entity_id=$org_id LIMIT 1";
      $result=db_query($query);
      foreach ($result as $row) {
        $RGB = $row->field_rgbhex_value;
      }
      if(isset($RGB) and !empty($RGB)){
        $rows['nodes'][$key]['node']['rgbHEX'] = $RGB;      
      }
    }
  }

  ///////////////////////////////////////////
  //                                       //
  // REWRITE some fields in SCREEN         //
  //                                       //
  ///////////////////////////////////////////
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "Screen"){
    // Rewrite subtitles as an array
    if(isset($rows['nodes'][$key]['node']['Subtitle']) and !empty($rows['nodes'][$key]['node']['Subtitle'])){
      $subtitle_array = array();
      $subtitle_string = str_replace('\n', '', $node['node']['Subtitle']);
      $pieces = explode("Language:", $subtitle_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Display Subtitle:", $element);
          if(count($parts) == 2){          
            $subtitle_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
            $subtitle_array[($skey-1)]['Subtitle'] = substr(trim($parts[1]), 2);
          }
        }
      }
      $rows['nodes'][$key]['node']['Subtitle'] = $subtitle_array;
    }

    // Rewrite titles as an array
    if(isset($rows['nodes'][$key]['node']['Title']) and !empty($rows['nodes'][$key]['node']['Title'])){
      $title_array = array();
      $title_string = str_replace('\n', '', $node['node']['Title']);
      $pieces = explode("Language:", $title_string);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Display Title:", $element);
          if(count($parts) == 2){          
            $title_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
            $title_array[($skey-1)]['Title'] = substr(trim($parts[1]), 2);
          }
        }
      }
      $rows['nodes'][$key]['node']['Title'] = $title_array;
    }
    // rewrite the "title" with "Screen Code"
    if(isset($rows['nodes'][$key]['node']['title']) and !empty($rows['nodes'][$key]['node']['title'])){
      
      $rows['nodes'][$key]['node']['Screen Code'] = $rows['nodes'][$key]['node']['title'];
      unset($rows['nodes'][$key]['node']['title']);
    }

  }  

  ///////////////////////////////////////////
  //                                       //
  // REWRITE some fields in SCREEN MENU    //
  //                                       //
  ///////////////////////////////////////////
  if(isset($node['node']) and isset($node['node']['Node Type']) and $node['node']['Node Type'] == "Screen Menu"){
    
    // Rewrite titles as an array
    if(isset($rows['nodes'][$key]['node']['Title']) and !empty($rows['nodes'][$key]['node']['Title'])){
      $title_array = array();
      $title_string = str_replace('\n', '', $node['node']['Title']);
      $pieces = explode("Language:", $title_string);
      dpm("PIECES");
      dpm($pieces);
      foreach ($pieces as $skey => $element) {
        if(!empty($element)){
          $parts = explode("Display Title:", $element);
          dpm("PARTS");
          dpm($parts);
          if(count($parts) == 2){          
            $title_array[($skey-1)]['Language'] = substr(trim($parts[0]), 2);
            $title_array[($skey-1)]['Title'] = substr(trim($parts[1]), 2);
          }
        }
      }
      $rows['nodes'][$key]['node']['Title'] = $title_array;
    }

    // rewrite the "title" with "key"
    if(isset($rows['nodes'][$key]['node']['title']) and !empty($rows['nodes'][$key]['node']['title'])){
      
      $rows['nodes'][$key]['node']['Key'] = $rows['nodes'][$key]['node']['title'];
      unset($rows['nodes'][$key]['node']['title']);
    }
  }  
}
// dpm($rows);
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