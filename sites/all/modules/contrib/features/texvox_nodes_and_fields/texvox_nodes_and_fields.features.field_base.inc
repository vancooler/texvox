<?php
/**
 * @file
 * texvox_nodes_and_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function texvox_nodes_and_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_action'
  $field_bases['field_action'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_action',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Goto Screen',
        1 => 'Connect Call',
        2 => 'End Call',
        3 => 'Set Language and Goto Screen',
        4 => 'Clear Input Field',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_action_delay_screen_code'
  $field_bases['field_action_delay_screen_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_action_delay_screen_code',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen' => 'screen',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_action_delay_time'
  $field_bases['field_action_delay_time'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_action_delay_time',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_body_text'
  $field_bases['field_body_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_body_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_bodytext_in_multi_language'
  $field_bases['field_bodytext_in_multi_language'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bodytext_in_multi_language',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_branch_type'
  $field_bases['field_branch_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_branch_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Store' => 'Store',
        'Branch' => 'Branch',
        'Service' => 'Service',
        'Department' => 'Department',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_dayoftheweek'
  $field_bases['field_dayoftheweek'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dayoftheweek',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Sunday',
        1 => 'Monday',
        2 => 'Tuesday',
        3 => 'Wednesday',
        4 => 'Thursday',
        5 => 'Friday',
        6 => 'Saturday',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_default_ivr'
  $field_bases['field_default_ivr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_default_ivr',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'ivr' => 'ivr',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_default_language_for_ivr'
  $field_bases['field_default_language_for_ivr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_default_language_for_ivr',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'languagefield',
    'settings' => array(
      'enabled' => 1,
      'excluded_languages' => array(),
      'format' => array(
        'iso' => 'iso',
        'name' => 'name',
        'name_native' => 0,
      ),
      'groups' => 'Popular Languages | en, de, es, fr, it, ja, ko, pa, pt, hi, ru, zh-hans
All Languages | aa,ab,ae,af,ak,am,ar,as,ast,av,ay,az,ba,be,bg,bh,bi,bm,bn,bo,br,bs,ca,ce,ch,co,cr,cs,cu,cv,cy,da,de,dv,dz,ee,el,en,en-gb,eo,es,et,eu,fa,ff,fi,fil,fj,fo,fr,fy,ga,gd,gl,gn,gsw-berne,gu,gv,ha,he,hi,ho,hr,ht,hu,hy,hz,ia,id,ie,ig,ik,is,it,iu,ja,jv,ka,kg,ki,kj,kk,kl,km,kn,ko,kr,ks,ku,kv,kw,ky,la,lb,lg,ln,lo,lt,lv,mg,mh,mi,mk,ml,mn,mo,mr,ms,mt,my,na,nb,nd,ne,ng,nl,nn,nr,nv,ny,oc,om,or,os,pa,pi,pl,ps,pt,pt-br,pt-pt,qu,rm,rn,ro,ru,rw,sa,sc,sco,sd,se,sg,sh,si,sk,sl,sm,sn,so,sq,sr,ss,st,su,sv,sw,ta,te,tg,th,ti,tk,tl,tn,to,tr,ts,tt,tw,ty,ug,uk,ur,uz,ve,vi,wo,xh,xx-lolspeak,yi,yo,za,zh-hans,zh-hant,zu',
      'languages' => array(),
    ),
    'translatable' => 0,
    'type' => 'language_field',
  );

  // Exported field_base: 'field_default_screen'
  $field_bases['field_default_screen'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_default_screen',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen' => 'screen',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_description'
  $field_bases['field_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_description',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_display_delay'
  $field_bases['field_display_delay'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_delay',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_display_image'
  $field_bases['field_display_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_display_subtitle'
  $field_bases['field_display_subtitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_subtitle',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_display_title'
  $field_bases['field_display_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_title',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_end_key'
  $field_bases['field_end_key'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_end_key',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_endtime'
  $field_bases['field_endtime'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_endtime',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '00:00',
        30 => '00:30',
        100 => '01:00',
        130 => '01:30',
        200 => '02:00',
        230 => '02:30',
        300 => '03:00',
        330 => '03:30',
        400 => '04:00',
        430 => '04:30',
        500 => '05:00',
        530 => '05:30',
        600 => '06:00',
        630 => '06:30',
        700 => '07:00',
        730 => '07:30',
        800 => '08:00',
        830 => '08:30',
        900 => '09:00',
        930 => '09:30',
        1000 => '10:00',
        1030 => '10:30',
        1100 => '11:00',
        1130 => '11:30',
        1200 => '12:00',
        1230 => '12:30',
        1300 => '13:00',
        1330 => '13:30',
        1400 => '14:00',
        1430 => '14:30',
        1500 => '15:00',
        1530 => '15:30',
        1600 => '16:00',
        1630 => '16:30',
        1700 => '17:00',
        1730 => '17:30',
        1800 => '18:00',
        1830 => '18:30',
        1900 => '19:00',
        1930 => '19:30',
        2000 => '20:00',
        2030 => '20:30',
        2100 => '21:00',
        2130 => '21:30',
        2200 => '22:00',
        2230 => '22:30',
        2300 => '23:00',
        2330 => '23:30',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_go_to_screen'
  $field_bases['field_go_to_screen'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_go_to_screen',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen' => 'screen',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_holiday'
  $field_bases['field_holiday'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_holiday',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_input_action'
  $field_bases['field_input_action'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_input_action',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Goto Screen',
        1 => 'Connect Call',
        2 => 'End Call',
        3 => 'Set Language and Goto Screen',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_input_count'
  $field_bases['field_input_count'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_input_count',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_input_goto_screen'
  $field_bases['field_input_goto_screen'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_input_goto_screen',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen' => 'screen',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_input_language'
  $field_bases['field_input_language'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_input_language',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'languagefield',
    'settings' => array(
      'enabled' => 1,
      'excluded_languages' => array(),
      'format' => array(
        'iso' => 'iso',
        'name' => 'name',
        'name_native' => 0,
      ),
      'groups' => 'Popular Languages | en, de, es, fr, it, ja, ko, pa, pt, hi, ru, zh-hans
All Languages | aa,ab,ae,af,ak,am,ar,as,ast,av,ay,az,ba,be,bg,bh,bi,bm,bn,bo,br,bs,ca,ce,ch,co,cr,cs,cu,cv,cy,da,de,dv,dz,ee,el,en,en-gb,eo,es,et,eu,fa,ff,fi,fil,fj,fo,fr,fy,ga,gd,gl,gn,gsw-berne,gu,gv,ha,he,hi,ho,hr,ht,hu,hy,hz,ia,id,ie,ig,ik,is,it,iu,ja,jv,ka,kg,ki,kj,kk,kl,km,kn,ko,kr,ks,ku,kv,kw,ky,la,lb,lg,ln,lo,lt,lv,mg,mh,mi,mk,ml,mn,mo,mr,ms,mt,my,na,nb,nd,ne,ng,nl,nn,nr,nv,ny,oc,om,or,os,pa,pi,pl,ps,pt,pt-br,pt-pt,qu,rm,rn,ro,ru,rw,sa,sc,sco,sd,se,sg,sh,si,sk,sl,sm,sn,so,sq,sr,ss,st,su,sv,sw,ta,te,tg,th,ti,tk,tl,tn,to,tr,ts,tt,tw,ty,ug,uk,ur,uz,ve,vi,wo,xh,xx-lolspeak,yi,yo,za,zh-hans,zh-hant,zu',
      'languages' => array(),
    ),
    'translatable' => 0,
    'type' => 'language_field',
  );

  // Exported field_base: 'field_input_text'
  $field_bases['field_input_text'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_input_text',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_ivr'
  $field_bases['field_ivr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ivr',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'ivr' => 'ivr',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_ivr_screen'
  $field_bases['field_ivr_screen'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ivr_screen',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen' => 'screen',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_language'
  $field_bases['field_language'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_language',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'languagefield',
    'settings' => array(
      'enabled' => 1,
      'entity_translation_sync' => FALSE,
      'excluded_languages' => array(),
      'format' => array(
        'iso' => 'iso',
        'name' => 'name',
        'name_native' => 0,
      ),
      'groups' => 'Popular Languages | en, de, es, fr, it, ja, ko, pa, pt, hi, ru, zh-hans, ar
All Languages | aa,ab,ae,af,ak,am,ar,as,ast,av,ay,az,ba,be,bg,bh,bi,bm,bn,bo,br,bs,ca,ce,ch,co,cr,cs,cu,cv,cy,da,de,dv,dz,ee,el,en,en-gb,eo,es,et,eu,fa,ff,fi,fil,fj,fo,fr,fy,ga,gd,gl,gn,gsw-berne,gu,gv,ha,he,hi,ho,hr,ht,hu,hy,hz,ia,id,ie,ig,ik,is,it,iu,ja,jv,ka,kg,ki,kj,kk,kl,km,kn,ko,kr,ks,ku,kv,kw,ky,la,lb,lg,ln,lo,lt,lv,mg,mh,mi,mk,ml,mn,mo,mr,ms,mt,my,na,nb,nd,ne,ng,nl,nn,nr,nv,ny,oc,om,or,os,pa,pi,pl,ps,pt,pt-br,pt-pt,qu,rm,rn,ro,ru,rw,sa,sc,sco,sd,se,sg,sh,si,sk,sl,sm,sn,so,sq,sr,ss,st,su,sv,sw,ta,te,tg,th,ti,tk,tl,tn,to,tr,ts,tt,tw,ty,ug,uk,ur,uz,ve,vi,wo,xh,xx-lolspeak,yi,yo,za,zh-hans,zh-hant,zu',
      'languages' => array(),
    ),
    'translatable' => 0,
    'type' => 'language_field',
  );

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'foreign keys' => array(),
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 0,
            'city' => 0,
            'coords' => 0,
            'country' => 0,
            'country_name' => 0,
            'locpick' => 0,
            'map_link' => 0,
            'name' => 0,
            'postal_code' => 0,
            'province' => 0,
            'province_name' => 0,
            'street' => 0,
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 6,
            ),
            'city' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 8,
            ),
            'country' => array(
              'collect' => 1,
              'default' => 'ca',
              'weight' => 14,
            ),
            'locpick' => array(
              'collect' => 0,
              'weight' => 20,
            ),
            'name' => array(
              'collect' => 0,
              'default' => '',
              'weight' => 2,
            ),
            'postal_code' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 12,
            ),
            'province' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 10,
              'widget' => 'select',
            ),
            'street' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 4,
            ),
          ),
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'location',
  );

  // Exported field_base: 'field_logo'
  $field_bases['field_logo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_menu_key_new'
  $field_bases['field_menu_key_new'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_menu_key_new',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_menus'
  $field_bases['field_menus'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_menus',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen_menu' => 'screen_menu',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_mute_microphone'
  $field_bases['field_mute_microphone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mute_microphone',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Off',
        1 => 'On',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_new_date'
  $field_bases['field_new_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_new_date',
    'foreign keys' => array(),
    'indexes' => array(
      'timestamp' => array(
        0 => 'timestamp',
      ),
    ),
    'locked' => 0,
    'module' => 'partial_date',
    'settings' => array(
      'estimates' => array(
        'day' => array(
          '0|12' => 'The start of the month',
          '10|20' => 'The middle of the month',
          '18|31' => 'The end of the month',
        ),
        'hour' => array(
          '0|1' => 'Midnight',
          '6|12' => 'Morning',
          '6|18' => 'Day time',
          '12|13' => 'Noon',
          '12|18' => 'Afternoon',
          '18|6' => 'Night',
          '18|22' => 'Evening',
        ),
        'minute' => array(),
        'month' => array(
          '2|4' => 'Spring',
          '5|7' => 'Summer',
          '8|10' => 'Autumn',
          '11|1' => 'Winter',
        ),
        'second' => array(),
        'year' => array(
          '-60000|1600' => 'Pre-colonial',
          '1500|1599' => '16th century',
          '1600|1699' => '17th century',
          '1700|1799' => '18th century',
          '1800|1899' => '19th century',
          '1900|1999' => '20th century',
          '2000|2099' => '21st century',
        ),
      ),
      'minimum_components' => array(
        'from_estimates_day' => 0,
        'from_estimates_hour' => 0,
        'from_estimates_minute' => 0,
        'from_estimates_month' => 0,
        'from_estimates_second' => 0,
        'from_estimates_year' => 0,
        'from_granularity_day' => 1,
        'from_granularity_hour' => 0,
        'from_granularity_minute' => 0,
        'from_granularity_month' => 1,
        'from_granularity_second' => 0,
        'from_granularity_timezone' => 0,
        'from_granularity_year' => 0,
        'txt_long' => 0,
        'txt_short' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'partial_date',
  );

  // Exported field_base: 'field_new_verify_options'
  $field_bases['field_new_verify_options'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_new_verify_options',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen_menu' => 'screen_menu',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_no_input_action'
  $field_bases['field_no_input_action'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_input_action',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Goto Screen',
        1 => 'Connect Call',
        2 => 'End Call',
        3 => 'Set Language and Goto Screen',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_no_input_delay'
  $field_bases['field_no_input_delay'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_input_delay',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_no_input_goto_screen'
  $field_bases['field_no_input_goto_screen'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_input_goto_screen',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen' => 'screen',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_no_input_language'
  $field_bases['field_no_input_language'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_input_language',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'languagefield',
    'settings' => array(
      'enabled' => 1,
      'excluded_languages' => array(),
      'format' => array(
        'iso' => 'iso',
        'name' => 'name',
        'name_native' => 0,
      ),
      'groups' => 'Popular Languages | en, de, es, fr, it, ja, ko, pa, pt, hi, ru, zh-hans
All Languages | aa,ab,ae,af,ak,am,ar,as,ast,av,ay,az,ba,be,bg,bh,bi,bm,bn,bo,br,bs,ca,ce,ch,co,cr,cs,cu,cv,cy,da,de,dv,dz,ee,el,en,en-gb,eo,es,et,eu,fa,ff,fi,fil,fj,fo,fr,fy,ga,gd,gl,gn,gsw-berne,gu,gv,ha,he,hi,ho,hr,ht,hu,hy,hz,ia,id,ie,ig,ik,is,it,iu,ja,jv,ka,kg,ki,kj,kk,kl,km,kn,ko,kr,ks,ku,kv,kw,ky,la,lb,lg,ln,lo,lt,lv,mg,mh,mi,mk,ml,mn,mo,mr,ms,mt,my,na,nb,nd,ne,ng,nl,nn,nr,nv,ny,oc,om,or,os,pa,pi,pl,ps,pt,pt-br,pt-pt,qu,rm,rn,ro,ru,rw,sa,sc,sco,sd,se,sg,sh,si,sk,sl,sm,sn,so,sq,sr,ss,st,su,sv,sw,ta,te,tg,th,ti,tk,tl,tn,to,tr,ts,tt,tw,ty,ug,uk,ur,uz,ve,vi,wo,xh,xx-lolspeak,yi,yo,za,zh-hans,zh-hant,zu',
      'languages' => array(),
    ),
    'translatable' => 0,
    'type' => 'language_field',
  );

  // Exported field_base: 'field_number'
  $field_bases['field_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_number',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_only_for_organization'
  $field_bases['field_only_for_organization'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_only_for_organization',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'organization' => 'organization',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_organization'
  $field_bases['field_organization'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'DESC',
          'property' => 'created',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'organization' => 'organization',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_organization_type'
  $field_bases['field_organization_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Department Store' => 'Department Stores',
        'Education Institution' => 'Education Institutions',
        'Entertainment' => 'Entertainment',
        'Financial Institution' => 'Financial Institutions',
        'Government' => 'Government Services',
        'Hardware Stores' => 'Hardware Stores',
        'Health Services' => 'Health Services',
        'Media' => 'Media',
        'On-Line Services' => 'On-Line Services',
        'Telecom' => 'Phone, TV, Internet',
        'Restaurants' => 'Restaurants',
        'Retail Store' => 'Retail Stores',
        'Sports' => 'Sports',
        'Supermarkets' => 'Supermarkets',
        'Transportation' => 'Transportation',
        'Utilities' => 'Utilities',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_original_screen_id'
  $field_bases['field_original_screen_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_original_screen_id',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_phone_number_type'
  $field_bases['field_phone_number_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phone_number_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Display only',
        1 => 'TexVox call',
        2 => 'Phone call',
        3 => 'TexVox call & phone call',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_phone_numbers'
  $field_bases['field_phone_numbers'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phone_numbers',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_prelude_screen_code'
  $field_bases['field_prelude_screen_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prelude_screen_code',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'screen' => 'screen',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_rgbhex'
  $field_bases['field_rgbhex'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rgbhex',
    'foreign keys' => array(),
    'indexes' => array(
      'rgb' => array(
        0 => 'rgb',
      ),
    ),
    'locked' => 0,
    'module' => 'colorfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'colorfield',
  );

  // Exported field_base: 'field_screen_type'
  $field_bases['field_screen_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_screen_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Display screen: should have Screen name, header text and image url. The rest of the keys will be ignored.',
        1 => 'Option screen: will show only menu options',
        2 => 'Input screen: will show text field input and menu options',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_search_base'
  $field_bases['field_search_base'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_search_base',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Location base',
        1 => 'City base',
        2 => 'Region base',
        3 => 'Country base',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_set_language'
  $field_bases['field_set_language'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_set_language',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'languagefield',
    'settings' => array(
      'enabled' => 1,
      'excluded_languages' => array(),
      'format' => array(
        'iso' => 'iso',
        'name' => 'name',
        'name_native' => 0,
      ),
      'groups' => 'Popular Languages | en, de, es, fr, it, ja, ko, pa, pt, hi, ru, zh-hans
All Languages | aa,ab,ae,af,ak,am,ar,as,ast,av,ay,az,ba,be,bg,bh,bi,bm,bn,bo,br,bs,ca,ce,ch,co,cr,cs,cu,cv,cy,da,de,dv,dz,ee,el,en,en-gb,eo,es,et,eu,fa,ff,fi,fil,fj,fo,fr,fy,ga,gd,gl,gn,gsw-berne,gu,gv,ha,he,hi,ho,hr,ht,hu,hy,hz,ia,id,ie,ig,ik,is,it,iu,ja,jv,ka,kg,ki,kj,kk,kl,km,kn,ko,kr,ks,ku,kv,kw,ky,la,lb,lg,ln,lo,lt,lv,mg,mh,mi,mk,ml,mn,mo,mr,ms,mt,my,na,nb,nd,ne,ng,nl,nn,nr,nv,ny,oc,om,or,os,pa,pi,pl,ps,pt,pt-br,pt-pt,qu,rm,rn,ro,ru,rw,sa,sc,sco,sd,se,sg,sh,si,sk,sl,sm,sn,so,sq,sr,ss,st,su,sv,sw,ta,te,tg,th,ti,tk,tl,tn,to,tr,ts,tt,tw,ty,ug,uk,ur,uz,ve,vi,wo,xh,xx-lolspeak,yi,yo,za,zh-hans,zh-hant,zu',
      'languages' => array(),
    ),
    'translatable' => 0,
    'type' => 'language_field',
  );

  // Exported field_base: 'field_starttime'
  $field_bases['field_starttime'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_starttime',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '00:00',
        30 => '00:30',
        100 => '01:00',
        130 => '01:30',
        200 => '02:00',
        230 => '02:30',
        300 => '03:00',
        330 => '03:30',
        400 => '04:00',
        430 => '04:30',
        500 => '05:00',
        530 => '05:30',
        600 => '06:00',
        630 => '06:30',
        700 => '07:00',
        730 => '07:30',
        800 => '08:00',
        830 => '08:30',
        900 => '09:00',
        930 => '09:30',
        1000 => '10:00',
        1030 => '10:30',
        1100 => '11:00',
        1130 => '11:30',
        1200 => '12:00',
        1230 => '12:30',
        1300 => '13:00',
        1330 => '13:30',
        1400 => '14:00',
        1430 => '14:30',
        1500 => '15:00',
        1530 => '15:30',
        1600 => '16:00',
        1630 => '16:30',
        1700 => '17:00',
        1730 => '17:30',
        1800 => '18:00',
        1830 => '18:30',
        1900 => '19:00',
        1930 => '19:30',
        2000 => '20:00',
        2030 => '20:30',
        2100 => '21:00',
        2130 => '21:30',
        2200 => '22:00',
        2230 => '22:30',
        2300 => '23:00',
        2330 => '23:30',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_subtitle_in_multi_language'
  $field_bases['field_subtitle_in_multi_language'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subtitle_in_multi_language',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_text'
  $field_bases['field_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_timeslots'
  $field_bases['field_timeslots'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_timeslots',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_timezone_custom'
  $field_bases['field_timezone_custom'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_timezone_custom',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'UTC+00:00 Africa/Abidjan' => 'UTC+00:00 Africa/Abidjan',
        'UTC+00:00 Africa/Accra' => 'UTC+00:00 Africa/Accra',
        'UTC+00:00 Africa/Bamako' => 'UTC+00:00 Africa/Bamako',
        'UTC+00:00 Africa/Banjul' => 'UTC+00:00 Africa/Banjul',
        'UTC+00:00 Africa/Bissau' => 'UTC+00:00 Africa/Bissau',
        'UTC+00:00 Africa/Casablanca' => 'UTC+00:00 Africa/Casablanca',
        'UTC+00:00 Africa/Conakry' => 'UTC+00:00 Africa/Conakry',
        'UTC+00:00 Africa/Dakar' => 'UTC+00:00 Africa/Dakar',
        'UTC+00:00 Africa/El_Aaiun' => 'UTC+00:00 Africa/El_Aaiun',
        'UTC+00:00 Africa/Freetown' => 'UTC+00:00 Africa/Freetown',
        'UTC+00:00 Africa/Lome' => 'UTC+00:00 Africa/Lome',
        'UTC+00:00 Africa/Monrovia' => 'UTC+00:00 Africa/Monrovia',
        'UTC+00:00 Africa/Nouakchott' => 'UTC+00:00 Africa/Nouakchott',
        'UTC+00:00 Africa/Ouagadougou' => 'UTC+00:00 Africa/Ouagadougou',
        'UTC+00:00 Africa/Sao_Tome' => 'UTC+00:00 Africa/Sao_Tome',
        'UTC+00:00 America/Danmarkshavn' => 'UTC+00:00 America/Danmarkshavn',
        'UTC+00:00 Atlantic/Canary' => 'UTC+00:00 Atlantic/Canary',
        'UTC+00:00 Atlantic/Faroe' => 'UTC+00:00 Atlantic/Faroe',
        'UTC+00:00 Atlantic/Madeira' => 'UTC+00:00 Atlantic/Madeira',
        'UTC+00:00 Atlantic/Reykjavik' => 'UTC+00:00 Atlantic/Reykjavik',
        'UTC+00:00 Atlantic/St_Helena' => 'UTC+00:00 Atlantic/St_Helena',
        'UTC+00:00 Europe/Dublin' => 'UTC+00:00 Europe/Dublin',
        'UTC+00:00 Europe/Guernsey' => 'UTC+00:00 Europe/Guernsey',
        'UTC+00:00 Europe/Isle_of_Man' => 'UTC+00:00 Europe/Isle_of_Man',
        'UTC+00:00 Europe/Jersey' => 'UTC+00:00 Europe/Jersey',
        'UTC+00:00 Europe/Lisbon' => 'UTC+00:00 Europe/Lisbon',
        'UTC+00:00 Europe/London' => 'UTC+00:00 Europe/London',
        'UTC+00:00 UTC' => 'UTC+00:00 UTC',
        'UTC+01:00 Africa/Algiers' => 'UTC+01:00 Africa/Algiers',
        'UTC+01:00 Africa/Bangui' => 'UTC+01:00 Africa/Bangui',
        'UTC+01:00 Africa/Brazzaville' => 'UTC+01:00 Africa/Brazzaville',
        'UTC+01:00 Africa/Ceuta' => 'UTC+01:00 Africa/Ceuta',
        'UTC+01:00 Africa/Douala' => 'UTC+01:00 Africa/Douala',
        'UTC+01:00 Africa/Kinshasa' => 'UTC+01:00 Africa/Kinshasa',
        'UTC+01:00 Africa/Lagos' => 'UTC+01:00 Africa/Lagos',
        'UTC+01:00 Africa/Libreville' => 'UTC+01:00 Africa/Libreville',
        'UTC+01:00 Africa/Luanda' => 'UTC+01:00 Africa/Luanda',
        'UTC+01:00 Africa/Malabo' => 'UTC+01:00 Africa/Malabo',
        'UTC+01:00 Africa/Ndjamena' => 'UTC+01:00 Africa/Ndjamena',
        'UTC+01:00 Africa/Niamey' => 'UTC+01:00 Africa/Niamey',
        'UTC+01:00 Africa/Porto-Novo' => 'UTC+01:00 Africa/Porto-Novo',
        'UTC+01:00 Africa/Tunis' => 'UTC+01:00 Africa/Tunis',
        'UTC+01:00 Arctic/Longyearbyen' => 'UTC+01:00 Arctic/Longyearbyen',
        'UTC+01:00 Europe/Amsterdam' => 'UTC+01:00 Europe/Amsterdam',
        'UTC+01:00 Europe/Andorra' => 'UTC+01:00 Europe/Andorra',
        'UTC+01:00 Europe/Belgrade' => 'UTC+01:00 Europe/Belgrade',
        'UTC+01:00 Europe/Berlin' => 'UTC+01:00 Europe/Berlin',
        'UTC+01:00 Europe/Bratislava' => 'UTC+01:00 Europe/Bratislava',
        'UTC+01:00 Europe/Brussels' => 'UTC+01:00 Europe/Brussels',
        'UTC+01:00 Europe/Budapest' => 'UTC+01:00 Europe/Budapest',
        'UTC+01:00 Europe/Busingen' => 'UTC+01:00 Europe/Busingen',
        'UTC+01:00 Europe/Copenhagen' => 'UTC+01:00 Europe/Copenhagen',
        'UTC+01:00 Europe/Gibraltar' => 'UTC+01:00 Europe/Gibraltar',
        'UTC+01:00 Europe/Ljubljana' => 'UTC+01:00 Europe/Ljubljana',
        'UTC+01:00 Europe/Luxembourg' => 'UTC+01:00 Europe/Luxembourg',
        'UTC+01:00 Europe/Madrid' => 'UTC+01:00 Europe/Madrid',
        'UTC+01:00 Europe/Malta' => 'UTC+01:00 Europe/Malta',
        'UTC+01:00 Europe/Monaco' => 'UTC+01:00 Europe/Monaco',
        'UTC+01:00 Europe/Oslo' => 'UTC+01:00 Europe/Oslo',
        'UTC+01:00 Europe/Paris' => 'UTC+01:00 Europe/Paris',
        'UTC+01:00 Europe/Podgorica' => 'UTC+01:00 Europe/Podgorica',
        'UTC+01:00 Europe/Prague' => 'UTC+01:00 Europe/Prague',
        'UTC+01:00 Europe/Rome' => 'UTC+01:00 Europe/Rome',
        'UTC+01:00 Europe/San_Marino' => 'UTC+01:00 Europe/San_Marino',
        'UTC+01:00 Europe/Sarajevo' => 'UTC+01:00 Europe/Sarajevo',
        'UTC+01:00 Europe/Skopje' => 'UTC+01:00 Europe/Skopje',
        'UTC+01:00 Europe/Stockholm' => 'UTC+01:00 Europe/Stockholm',
        'UTC+01:00 Europe/Tirane' => 'UTC+01:00 Europe/Tirane',
        'UTC+01:00 Europe/Vaduz' => 'UTC+01:00 Europe/Vaduz',
        'UTC+01:00 Europe/Vatican' => 'UTC+01:00 Europe/Vatican',
        'UTC+01:00 Europe/Vienna' => 'UTC+01:00 Europe/Vienna',
        'UTC+01:00 Europe/Warsaw' => 'UTC+01:00 Europe/Warsaw',
        'UTC+01:00 Europe/Zagreb' => 'UTC+01:00 Europe/Zagreb',
        'UTC+01:00 Europe/Zurich' => 'UTC+01:00 Europe/Zurich',
        'UTC+02:00 Africa/Blantyre' => 'UTC+02:00 Africa/Blantyre',
        'UTC+02:00 Africa/Bujumbura' => 'UTC+02:00 Africa/Bujumbura',
        'UTC+02:00 Africa/Cairo' => 'UTC+02:00 Africa/Cairo',
        'UTC+02:00 Africa/Gaborone' => 'UTC+02:00 Africa/Gaborone',
        'UTC+02:00 Africa/Harare' => 'UTC+02:00 Africa/Harare',
        'UTC+02:00 Africa/Johannesburg' => 'UTC+02:00 Africa/Johannesburg',
        'UTC+02:00 Africa/Kigali' => 'UTC+02:00 Africa/Kigali',
        'UTC+02:00 Africa/Lubumbashi' => 'UTC+02:00 Africa/Lubumbashi',
        'UTC+02:00 Africa/Lusaka' => 'UTC+02:00 Africa/Lusaka',
        'UTC+02:00 Africa/Maputo' => 'UTC+02:00 Africa/Maputo',
        'UTC+02:00 Africa/Maseru' => 'UTC+02:00 Africa/Maseru',
        'UTC+02:00 Africa/Mbabane' => 'UTC+02:00 Africa/Mbabane',
        'UTC+02:00 Africa/Tripoli' => 'UTC+02:00 Africa/Tripoli',
        'UTC+02:00 Africa/Windhoek' => 'UTC+02:00 Africa/Windhoek',
        'UTC+02:00 Asia/Beirut' => 'UTC+02:00 Asia/Beirut',
        'UTC+02:00 Asia/Damascus' => 'UTC+02:00 Asia/Damascus',
        'UTC+02:00 Asia/Gaza' => 'UTC+02:00 Asia/Gaza',
        'UTC+02:00 Asia/Hebron' => 'UTC+02:00 Asia/Hebron',
        'UTC+02:00 Asia/Jerusalem' => 'UTC+02:00 Asia/Jerusalem',
        'UTC+02:00 Asia/Nicosia' => 'UTC+02:00 Asia/Nicosia',
        'UTC+02:00 Europe/Athens' => 'UTC+02:00 Europe/Athens',
        'UTC+02:00 Europe/Bucharest' => 'UTC+02:00 Europe/Bucharest',
        'UTC+02:00 Europe/Chisinau' => 'UTC+02:00 Europe/Chisinau',
        'UTC+02:00 Europe/Helsinki' => 'UTC+02:00 Europe/Helsinki',
        'UTC+02:00 Europe/Istanbul' => 'UTC+02:00 Europe/Istanbul',
        'UTC+02:00 Europe/Kiev' => 'UTC+02:00 Europe/Kiev',
        'UTC+02:00 Europe/Mariehamn' => 'UTC+02:00 Europe/Mariehamn',
        'UTC+02:00 Europe/Riga' => 'UTC+02:00 Europe/Riga',
        'UTC+02:00 Europe/Simferopol' => 'UTC+02:00 Europe/Simferopol',
        'UTC+02:00 Europe/Sofia' => 'UTC+02:00 Europe/Sofia',
        'UTC+02:00 Europe/Tallinn' => 'UTC+02:00 Europe/Tallinn',
        'UTC+02:00 Europe/Uzhgorod' => 'UTC+02:00 Europe/Uzhgorod',
        'UTC+02:00 Europe/Vilnius' => 'UTC+02:00 Europe/Vilnius',
        'UTC+02:00 Europe/Zaporozhye' => 'UTC+02:00 Europe/Zaporozhye',
        'UTC+03:00 Africa/Addis_Ababa' => 'UTC+03:00 Africa/Addis_Ababa',
        'UTC+03:00 Africa/Asmara' => 'UTC+03:00 Africa/Asmara',
        'UTC+03:00 Africa/Dar_es_Salaam' => 'UTC+03:00 Africa/Dar_es_Salaam',
        'UTC+03:00 Africa/Djibouti' => 'UTC+03:00 Africa/Djibouti',
        'UTC+03:00 Africa/Juba' => 'UTC+03:00 Africa/Juba',
        'UTC+03:00 Africa/Kampala' => 'UTC+03:00 Africa/Kampala',
        'UTC+03:00 Africa/Khartoum' => 'UTC+03:00 Africa/Khartoum',
        'UTC+03:00 Africa/Mogadishu' => 'UTC+03:00 Africa/Mogadishu',
        'UTC+03:00 Africa/Nairobi' => 'UTC+03:00 Africa/Nairobi',
        'UTC+03:00 Antarctica/Syowa' => 'UTC+03:00 Antarctica/Syowa',
        'UTC+03:00 Asia/Aden' => 'UTC+03:00 Asia/Aden',
        'UTC+03:00 Asia/Amman' => 'UTC+03:00 Asia/Amman',
        'UTC+03:00 Asia/Baghdad' => 'UTC+03:00 Asia/Baghdad',
        'UTC+03:00 Asia/Bahrain' => 'UTC+03:00 Asia/Bahrain',
        'UTC+03:00 Asia/Kuwait' => 'UTC+03:00 Asia/Kuwait',
        'UTC+03:00 Asia/Qatar' => 'UTC+03:00 Asia/Qatar',
        'UTC+03:00 Asia/Riyadh' => 'UTC+03:00 Asia/Riyadh',
        'UTC+03:00 Europe/Kaliningrad' => 'UTC+03:00 Europe/Kaliningrad',
        'UTC+03:00 Europe/Minsk' => 'UTC+03:00 Europe/Minsk',
        'UTC+03:00 Indian/Antananarivo' => 'UTC+03:00 Indian/Antananarivo',
        'UTC+03:00 Indian/Comoro' => 'UTC+03:00 Indian/Comoro',
        'UTC+03:00 Indian/Mayotte' => 'UTC+03:00 Indian/Mayotte',
        'UTC+03:30 Asia/Tehran' => 'UTC+03:30 Asia/Tehran',
        'UTC+04:00 Asia/Baku' => 'UTC+04:00 Asia/Baku',
        'UTC+04:00 Asia/Dubai' => 'UTC+04:00 Asia/Dubai',
        'UTC+04:00 Asia/Muscat' => 'UTC+04:00 Asia/Muscat',
        'UTC+04:00 Asia/Tbilisi' => 'UTC+04:00 Asia/Tbilisi',
        'UTC+04:00 Asia/Yerevan' => 'UTC+04:00 Asia/Yerevan',
        'UTC+04:00 Europe/Moscow' => 'UTC+04:00 Europe/Moscow',
        'UTC+04:00 Europe/Samara' => 'UTC+04:00 Europe/Samara',
        'UTC+04:00 Europe/Volgograd' => 'UTC+04:00 Europe/Volgograd',
        'UTC+04:00 Indian/Mahe' => 'UTC+04:00 Indian/Mahe',
        'UTC+04:00 Indian/Mauritius' => 'UTC+04:00 Indian/Mauritius',
        'UTC+04:00 Indian/Reunion' => 'UTC+04:00 Indian/Reunion',
        'UTC+04:30 Asia/Kabul' => 'UTC+04:30 Asia/Kabul',
        'UTC+05:00 Antarctica/Mawson' => 'UTC+05:00 Antarctica/Mawson',
        'UTC+05:00 Asia/Aqtau' => 'UTC+05:00 Asia/Aqtau',
        'UTC+05:00 Asia/Aqtobe' => 'UTC+05:00 Asia/Aqtobe',
        'UTC+05:00 Asia/Ashgabat' => 'UTC+05:00 Asia/Ashgabat',
        'UTC+05:00 Asia/Dushanbe' => 'UTC+05:00 Asia/Dushanbe',
        'UTC+05:00 Asia/Karachi' => 'UTC+05:00 Asia/Karachi',
        'UTC+05:00 Asia/Oral' => 'UTC+05:00 Asia/Oral',
        'UTC+05:00 Asia/Samarkand' => 'UTC+05:00 Asia/Samarkand',
        'UTC+05:00 Asia/Tashkent' => 'UTC+05:00 Asia/Tashkent',
        'UTC+05:00 Indian/Kerguelen' => 'UTC+05:00 Indian/Kerguelen',
        'UTC+05:00 Indian/Maldives' => 'UTC+05:00 Indian/Maldives',
        'UTC+05:30 Asia/Colombo' => 'UTC+05:30 Asia/Colombo',
        'UTC+05:30 Asia/Kolkata' => 'UTC+05:30 Asia/Kolkata',
        'UTC+05:45 Asia/Kathmandu' => 'UTC+05:45 Asia/Kathmandu',
        'UTC+06:00 Antarctica/Vostok' => 'UTC+06:00 Antarctica/Vostok',
        'UTC+06:00 Asia/Almaty' => 'UTC+06:00 Asia/Almaty',
        'UTC+06:00 Asia/Bishkek' => 'UTC+06:00 Asia/Bishkek',
        'UTC+06:00 Asia/Dhaka' => 'UTC+06:00 Asia/Dhaka',
        'UTC+06:00 Asia/Qyzylorda' => 'UTC+06:00 Asia/Qyzylorda',
        'UTC+06:00 Asia/Thimphu' => 'UTC+06:00 Asia/Thimphu',
        'UTC+06:00 Asia/Yekaterinburg' => 'UTC+06:00 Asia/Yekaterinburg',
        'UTC+06:00 Indian/Chagos' => 'UTC+06:00 Indian/Chagos',
        'UTC+06:30 Asia/Rangoon' => 'UTC+06:30 Asia/Rangoon',
        'UTC+06:30 Indian/Cocos' => 'UTC+06:30 Indian/Cocos',
        'UTC+07:00 Antarctica/Davis' => 'UTC+07:00 Antarctica/Davis',
        'UTC+07:00 Asia/Bangkok' => 'UTC+07:00 Asia/Bangkok',
        'UTC+07:00 Asia/Ho_Chi_Minh' => 'UTC+07:00 Asia/Ho_Chi_Minh',
        'UTC+07:00 Asia/Hovd' => 'UTC+07:00 Asia/Hovd',
        'UTC+07:00 Asia/Jakarta' => 'UTC+07:00 Asia/Jakarta',
        'UTC+07:00 Asia/Novokuznetsk' => 'UTC+07:00 Asia/Novokuznetsk',
        'UTC+07:00 Asia/Novosibirsk' => 'UTC+07:00 Asia/Novosibirsk',
        'UTC+07:00 Asia/Omsk' => 'UTC+07:00 Asia/Omsk',
        'UTC+07:00 Asia/Phnom_Penh' => 'UTC+07:00 Asia/Phnom_Penh',
        'UTC+07:00 Asia/Pontianak' => 'UTC+07:00 Asia/Pontianak',
        'UTC+07:00 Asia/Vientiane' => 'UTC+07:00 Asia/Vientiane',
        'UTC+07:00 Indian/Christmas' => 'UTC+07:00 Indian/Christmas',
        'UTC+08:00 Antarctica/Casey' => 'UTC+08:00 Antarctica/Casey',
        'UTC+08:00 Asia/Brunei' => 'UTC+08:00 Asia/Brunei',
        'UTC+08:00 Asia/Choibalsan' => 'UTC+08:00 Asia/Choibalsan',
        'UTC+08:00 Asia/Chongqing' => 'UTC+08:00 Asia/Chongqing',
        'UTC+08:00 Asia/Harbin' => 'UTC+08:00 Asia/Harbin',
        'UTC+08:00 Asia/Hong_Kong' => 'UTC+08:00 Asia/Hong_Kong',
        'UTC+08:00 Asia/Kashgar' => 'UTC+08:00 Asia/Kashgar',
        'UTC+08:00 Asia/Krasnoyarsk' => 'UTC+08:00 Asia/Krasnoyarsk',
        'UTC+08:00 Asia/Kuala_Lumpur' => 'UTC+08:00 Asia/Kuala_Lumpur',
        'UTC+08:00 Asia/Kuching' => 'UTC+08:00 Asia/Kuching',
        'UTC+08:00 Asia/Macau' => 'UTC+08:00 Asia/Macau',
        'UTC+08:00 Asia/Makassar' => 'UTC+08:00 Asia/Makassar',
        'UTC+08:00 Asia/Manila' => 'UTC+08:00 Asia/Manila',
        'UTC+08:00 Asia/Shanghai' => 'UTC+08:00 Asia/Shanghai',
        'UTC+08:00 Asia/Singapore' => 'UTC+08:00 Asia/Singapore',
        'UTC+08:00 Asia/Taipei' => 'UTC+08:00 Asia/Taipei',
        'UTC+08:00 Asia/Ulaanbaatar' => 'UTC+08:00 Asia/Ulaanbaatar',
        'UTC+08:00 Asia/Urumqi' => 'UTC+08:00 Asia/Urumqi',
        'UTC+08:00 Australia/Perth' => 'UTC+08:00 Australia/Perth',
        'UTC+08:45 Australia/Eucla' => 'UTC+08:45 Australia/Eucla',
        'UTC+09:00 Asia/Dili' => 'UTC+09:00 Asia/Dili',
        'UTC+09:00 Asia/Irkutsk' => 'UTC+09:00 Asia/Irkutsk',
        'UTC+09:00 Asia/Jayapura' => 'UTC+09:00 Asia/Jayapura',
        'UTC+09:00 Asia/Pyongyang' => 'UTC+09:00 Asia/Pyongyang',
        'UTC+09:00 Asia/Seoul' => 'UTC+09:00 Asia/Seoul',
        'UTC+09:00 Asia/Tokyo' => 'UTC+09:00 Asia/Tokyo',
        'UTC+09:00 Pacific/Palau' => 'UTC+09:00 Pacific/Palau',
        'UTC+09:30 Australia/Darwin' => 'UTC+09:30 Australia/Darwin',
        'UTC+10:00 Antarctica/DumontDUrville' => 'UTC+10:00 Antarctica/DumontDUrville',
        'UTC+10:00 Asia/Khandyga' => 'UTC+10:00 Asia/Khandyga',
        'UTC+10:00 Asia/Yakutsk' => 'UTC+10:00 Asia/Yakutsk',
        'UTC+10:00 Australia/Brisbane' => 'UTC+10:00 Australia/Brisbane',
        'UTC+10:00 Australia/Lindeman' => 'UTC+10:00 Australia/Lindeman',
        'UTC+10:00 Pacific/Chuuk' => 'UTC+10:00 Pacific/Chuuk',
        'UTC+10:00 Pacific/Guam' => 'UTC+10:00 Pacific/Guam',
        'UTC+10:00 Pacific/Port_Moresby' => 'UTC+10:00 Pacific/Port_Moresby',
        'UTC+10:00 Pacific/Saipan' => 'UTC+10:00 Pacific/Saipan',
        'UTC+10:30 Australia/Adelaide' => 'UTC+10:30 Australia/Adelaide',
        'UTC+10:30 Australia/Broken_Hill' => 'UTC+10:30 Australia/Broken_Hill',
        'UTC+11:00 Antarctica/Macquarie' => 'UTC+11:00 Antarctica/Macquarie',
        'UTC+11:00 Asia/Sakhalin' => 'UTC+11:00 Asia/Sakhalin',
        'UTC+11:00 Asia/Ust-Nera' => 'UTC+11:00 Asia/Ust-Nera',
        'UTC+11:00 Asia/Vladivostok' => 'UTC+11:00 Asia/Vladivostok',
        'UTC+11:00 Australia/Currie' => 'UTC+11:00 Australia/Currie',
        'UTC+11:00 Australia/Hobart' => 'UTC+11:00 Australia/Hobart',
        'UTC+11:00 Australia/Lord_Howe' => 'UTC+11:00 Australia/Lord_Howe',
        'UTC+11:00 Australia/Melbourne' => 'UTC+11:00 Australia/Melbourne',
        'UTC+11:00 Australia/Sydney' => 'UTC+11:00 Australia/Sydney',
        'UTC+11:00 Pacific/Efate' => 'UTC+11:00 Pacific/Efate',
        'UTC+11:00 Pacific/Guadalcanal' => 'UTC+11:00 Pacific/Guadalcanal',
        'UTC+11:00 Pacific/Kosrae' => 'UTC+11:00 Pacific/Kosrae',
        'UTC+11:00 Pacific/Noumea' => 'UTC+11:00 Pacific/Noumea',
        'UTC+11:00 Pacific/Pohnpei' => 'UTC+11:00 Pacific/Pohnpei',
        'UTC+11:30 Pacific/Norfolk' => 'UTC+11:30 Pacific/Norfolk',
        'UTC+12:00 Asia/Anadyr' => 'UTC+12:00 Asia/Anadyr',
        'UTC+12:00 Asia/Kamchatka' => 'UTC+12:00 Asia/Kamchatka',
        'UTC+12:00 Asia/Magadan' => 'UTC+12:00 Asia/Magadan',
        'UTC+12:00 Pacific/Funafuti' => 'UTC+12:00 Pacific/Funafuti',
        'UTC+12:00 Pacific/Kwajalein' => 'UTC+12:00 Pacific/Kwajalein',
        'UTC+12:00 Pacific/Majuro' => 'UTC+12:00 Pacific/Majuro',
        'UTC+12:00 Pacific/Nauru' => 'UTC+12:00 Pacific/Nauru',
        'UTC+12:00 Pacific/Tarawa' => 'UTC+12:00 Pacific/Tarawa',
        'UTC+12:00 Pacific/Wake' => 'UTC+12:00 Pacific/Wake',
        'UTC+12:00 Pacific/Wallis' => 'UTC+12:00 Pacific/Wallis',
        'UTC+13:00 Antarctica/McMurdo' => 'UTC+13:00 Antarctica/McMurdo',
        'UTC+13:00 Pacific/Auckland' => 'UTC+13:00 Pacific/Auckland',
        'UTC+13:00 Pacific/Enderbury' => 'UTC+13:00 Pacific/Enderbury',
        'UTC+13:00 Pacific/Fakaofo' => 'UTC+13:00 Pacific/Fakaofo',
        'UTC+13:00 Pacific/Fiji' => 'UTC+13:00 Pacific/Fiji',
        'UTC+13:00 Pacific/Tongatapu' => 'UTC+13:00 Pacific/Tongatapu',
        'UTC+13:45 Pacific/Chatham' => 'UTC+13:45 Pacific/Chatham',
        'UTC+14:00 Pacific/Apia' => 'UTC+14:00 Pacific/Apia',
        'UTC+14:00 Pacific/Kiritimati' => 'UTC+14:00 Pacific/Kiritimati',
        'UTC-01:00 America/Scoresbysund' => 'UTC-01:00 America/Scoresbysund',
        'UTC-01:00 Atlantic/Azores' => 'UTC-01:00 Atlantic/Azores',
        'UTC-01:00 Atlantic/Cape_Verde' => 'UTC-01:00 Atlantic/Cape_Verde',
        'UTC-02:00 America/Montevideo' => 'UTC-02:00 America/Montevideo',
        'UTC-02:00 America/Noronha' => 'UTC-02:00 America/Noronha',
        'UTC-02:00 America/Sao_Paulo' => 'UTC-02:00 America/Sao_Paulo',
        'UTC-02:00 Atlantic/South_Georgia' => 'UTC-02:00 Atlantic/South_Georgia',
        'UTC-03:00 America/Araguaina' => 'UTC-03:00 America/Araguaina',
        'UTC-03:00 America/Argentina/Buenos_Aires' => 'UTC-03:00 America/Argentina/Buenos_Aires',
        'UTC-03:00 America/Argentina/Catamarca' => 'UTC-03:00 America/Argentina/Catamarca',
        'UTC-03:00 America/Argentina/Cordoba' => 'UTC-03:00 America/Argentina/Cordoba',
        'UTC-03:00 America/Argentina/Jujuy' => 'UTC-03:00 America/Argentina/Jujuy',
        'UTC-03:00 America/Argentina/La_Rioja' => 'UTC-03:00 America/Argentina/La_Rioja',
        'UTC-03:00 America/Argentina/Mendoza' => 'UTC-03:00 America/Argentina/Mendoza',
        'UTC-03:00 America/Argentina/Rio_Gallegos' => 'UTC-03:00 America/Argentina/Rio_Gallegos',
        'UTC-03:00 America/Argentina/Salta' => 'UTC-03:00 America/Argentina/Salta',
        'UTC-03:00 America/Argentina/San_Juan' => 'UTC-03:00 America/Argentina/San_Juan',
        'UTC-03:00 America/Argentina/San_Luis' => 'UTC-03:00 America/Argentina/San_Luis',
        'UTC-03:00 America/Argentina/Tucuman' => 'UTC-03:00 America/Argentina/Tucuman',
        'UTC-03:00 America/Argentina/Ushuaia' => 'UTC-03:00 America/Argentina/Ushuaia',
        'UTC-03:00 America/Asuncion' => 'UTC-03:00 America/Asuncion',
        'UTC-03:00 America/Bahia' => 'UTC-03:00 America/Bahia',
        'UTC-03:00 America/Belem' => 'UTC-03:00 America/Belem',
        'UTC-03:00 America/Campo_Grande' => 'UTC-03:00 America/Campo_Grande',
        'UTC-03:00 America/Cayenne' => 'UTC-03:00 America/Cayenne',
        'UTC-03:00 America/Cuiaba' => 'UTC-03:00 America/Cuiaba',
        'UTC-03:00 America/Fortaleza' => 'UTC-03:00 America/Fortaleza',
        'UTC-03:00 America/Godthab' => 'UTC-03:00 America/Godthab',
        'UTC-03:00 America/Maceio' => 'UTC-03:00 America/Maceio',
        'UTC-03:00 America/Miquelon' => 'UTC-03:00 America/Miquelon',
        'UTC-03:00 America/Paramaribo' => 'UTC-03:00 America/Paramaribo',
        'UTC-03:00 America/Recife' => 'UTC-03:00 America/Recife',
        'UTC-03:00 America/Santarem' => 'UTC-03:00 America/Santarem',
        'UTC-03:00 America/Santiago' => 'UTC-03:00 America/Santiago',
        'UTC-03:00 Antarctica/Palmer' => 'UTC-03:00 Antarctica/Palmer',
        'UTC-03:00 Antarctica/Rothera' => 'UTC-03:00 Antarctica/Rothera',
        'UTC-03:00 Atlantic/Stanley' => 'UTC-03:00 Atlantic/Stanley',
        'UTC-03:30 America/St_Johns' => 'UTC-03:30 America/St_Johns',
        'UTC-04:00 America/Anguilla' => 'UTC-04:00 America/Anguilla',
        'UTC-04:00 America/Antigua' => 'UTC-04:00 America/Antigua',
        'UTC-04:00 America/Aruba' => 'UTC-04:00 America/Aruba',
        'UTC-04:00 America/Barbados' => 'UTC-04:00 America/Barbados',
        'UTC-04:00 America/Blanc-Sablon' => 'UTC-04:00 America/Blanc-Sablon',
        'UTC-04:00 America/Boa_Vista' => 'UTC-04:00 America/Boa_Vista',
        'UTC-04:00 America/Curacao' => 'UTC-04:00 America/Curacao',
        'UTC-04:00 America/Dominica' => 'UTC-04:00 America/Dominica',
        'UTC-04:00 America/Glace_Bay' => 'UTC-04:00 America/Glace_Bay',
        'UTC-04:00 America/Goose_Bay' => 'UTC-04:00 America/Goose_Bay',
        'UTC-04:00 America/Grenada' => 'UTC-04:00 America/Grenada',
        'UTC-04:00 America/Guadeloupe' => 'UTC-04:00 America/Guadeloupe',
        'UTC-04:00 America/Guyana' => 'UTC-04:00 America/Guyana',
        'UTC-04:00 America/Halifax' => 'UTC-04:00 America/Halifax',
        'UTC-04:00 America/Kralendijk' => 'UTC-04:00 America/Kralendijk',
        'UTC-04:00 America/La_Paz' => 'UTC-04:00 America/La_Paz',
        'UTC-04:00 America/Lower_Princes' => 'UTC-04:00 America/Lower_Princes',
        'UTC-04:00 America/Manaus' => 'UTC-04:00 America/Manaus',
        'UTC-04:00 America/Marigot' => 'UTC-04:00 America/Marigot',
        'UTC-04:00 America/Martinique' => 'UTC-04:00 America/Martinique',
        'UTC-04:00 America/Moncton' => 'UTC-04:00 America/Moncton',
        'UTC-04:00 America/Montserrat' => 'UTC-04:00 America/Montserrat',
        'UTC-04:00 America/Port_of_Spain' => 'UTC-04:00 America/Port_of_Spain',
        'UTC-04:00 America/Porto_Velho' => 'UTC-04:00 America/Porto_Velho',
        'UTC-04:00 America/Puerto_Rico' => 'UTC-04:00 America/Puerto_Rico',
        'UTC-04:00 America/Santo_Domingo' => 'UTC-04:00 America/Santo_Domingo',
        'UTC-04:00 America/St_Barthelemy' => 'UTC-04:00 America/St_Barthelemy',
        'UTC-04:00 America/St_Kitts' => 'UTC-04:00 America/St_Kitts',
        'UTC-04:00 America/St_Lucia' => 'UTC-04:00 America/St_Lucia',
        'UTC-04:00 America/St_Thomas' => 'UTC-04:00 America/St_Thomas',
        'UTC-04:00 America/St_Vincent' => 'UTC-04:00 America/St_Vincent',
        'UTC-04:00 America/Thule' => 'UTC-04:00 America/Thule',
        'UTC-04:00 America/Tortola' => 'UTC-04:00 America/Tortola',
        'UTC-04:00 Atlantic/Bermuda' => 'UTC-04:00 Atlantic/Bermuda',
        'UTC-04:30 America/Caracas' => 'UTC-04:30 America/Caracas',
        'UTC-05:00 America/Atikokan' => 'UTC-05:00 America/Atikokan',
        'UTC-05:00 America/Bogota' => 'UTC-05:00 America/Bogota',
        'UTC-05:00 America/Cayman' => 'UTC-05:00 America/Cayman',
        'UTC-05:00 America/Detroit' => 'UTC-05:00 America/Detroit',
        'UTC-05:00 America/Eirunepe' => 'UTC-05:00 America/Eirunepe',
        'UTC-05:00 America/Grand_Turk' => 'UTC-05:00 America/Grand_Turk',
        'UTC-05:00 America/Guayaquil' => 'UTC-05:00 America/Guayaquil',
        'UTC-05:00 America/Havana' => 'UTC-05:00 America/Havana',
        'UTC-05:00 America/Indiana/Indianapolis' => 'UTC-05:00 America/Indiana/Indianapolis',
        'UTC-05:00 America/Indiana/Marengo' => 'UTC-05:00 America/Indiana/Marengo',
        'UTC-05:00 America/Indiana/Petersburg' => 'UTC-05:00 America/Indiana/Petersburg',
        'UTC-05:00 America/Indiana/Vevay' => 'UTC-05:00 America/Indiana/Vevay',
        'UTC-05:00 America/Indiana/Vincennes' => 'UTC-05:00 America/Indiana/Vincennes',
        'UTC-05:00 America/Indiana/Winamac' => 'UTC-05:00 America/Indiana/Winamac',
        'UTC-05:00 America/Iqaluit' => 'UTC-05:00 America/Iqaluit',
        'UTC-05:00 America/Jamaica' => 'UTC-05:00 America/Jamaica',
        'UTC-05:00 America/Kentucky/Louisville' => 'UTC-05:00 America/Kentucky/Louisville',
        'UTC-05:00 America/Kentucky/Monticello' => 'UTC-05:00 America/Kentucky/Monticello',
        'UTC-05:00 America/Lima' => 'UTC-05:00 America/Lima',
        'UTC-05:00 America/Nassau' => 'UTC-05:00 America/Nassau',
        'UTC-05:00 America/New_York' => 'UTC-05:00 America/New_York',
        'UTC-05:00 America/Nipigon' => 'UTC-05:00 America/Nipigon',
        'UTC-05:00 America/Panama' => 'UTC-05:00 America/Panama',
        'UTC-05:00 America/Pangnirtung' => 'UTC-05:00 America/Pangnirtung',
        'UTC-05:00 America/Port-au-Prince' => 'UTC-05:00 America/Port-au-Prince',
        'UTC-05:00 America/Rio_Branco' => 'UTC-05:00 America/Rio_Branco',
        'UTC-05:00 America/Thunder_Bay' => 'UTC-05:00 America/Thunder_Bay',
        'UTC-05:00 America/Toronto' => 'UTC-05:00 America/Toronto',
        'UTC-05:00 Pacific/Easter' => 'UTC-05:00 Pacific/Easter',
        'UTC-06:00 America/Bahia_Banderas' => 'UTC-06:00 America/Bahia_Banderas',
        'UTC-06:00 America/Belize' => 'UTC-06:00 America/Belize',
        'UTC-06:00 America/Cancun' => 'UTC-06:00 America/Cancun',
        'UTC-06:00 America/Chicago' => 'UTC-06:00 America/Chicago',
        'UTC-06:00 America/Costa_Rica' => 'UTC-06:00 America/Costa_Rica',
        'UTC-06:00 America/El_Salvador' => 'UTC-06:00 America/El_Salvador',
        'UTC-06:00 America/Guatemala' => 'UTC-06:00 America/Guatemala',
        'UTC-06:00 America/Indiana/Knox' => 'UTC-06:00 America/Indiana/Knox',
        'UTC-06:00 America/Indiana/Tell_City' => 'UTC-06:00 America/Indiana/Tell_City',
        'UTC-06:00 America/Managua' => 'UTC-06:00 America/Managua',
        'UTC-06:00 America/Matamoros' => 'UTC-06:00 America/Matamoros',
        'UTC-06:00 America/Menominee' => 'UTC-06:00 America/Menominee',
        'UTC-06:00 America/Merida' => 'UTC-06:00 America/Merida',
        'UTC-06:00 America/Mexico_City' => 'UTC-06:00 America/Mexico_City',
        'UTC-06:00 America/Monterrey' => 'UTC-06:00 America/Monterrey',
        'UTC-06:00 America/North_Dakota/Beulah' => 'UTC-06:00 America/North_Dakota/Beulah',
        'UTC-06:00 America/North_Dakota/Center' => 'UTC-06:00 America/North_Dakota/Center',
        'UTC-06:00 America/North_Dakota/New_Salem' => 'UTC-06:00 America/North_Dakota/New_Salem',
        'UTC-06:00 America/Rainy_River' => 'UTC-06:00 America/Rainy_River',
        'UTC-06:00 America/Rankin_Inlet' => 'UTC-06:00 America/Rankin_Inlet',
        'UTC-06:00 America/Regina' => 'UTC-06:00 America/Regina',
        'UTC-06:00 America/Resolute' => 'UTC-06:00 America/Resolute',
        'UTC-06:00 America/Swift_Current' => 'UTC-06:00 America/Swift_Current',
        'UTC-06:00 America/Tegucigalpa' => 'UTC-06:00 America/Tegucigalpa',
        'UTC-06:00 America/Winnipeg' => 'UTC-06:00 America/Winnipeg',
        'UTC-06:00 Pacific/Galapagos' => 'UTC-06:00 Pacific/Galapagos',
        'UTC-07:00 America/Boise' => 'UTC-07:00 America/Boise',
        'UTC-07:00 America/Cambridge_Bay' => 'UTC-07:00 America/Cambridge_Bay',
        'UTC-07:00 America/Chihuahua' => 'UTC-07:00 America/Chihuahua',
        'UTC-07:00 America/Creston' => 'UTC-07:00 America/Creston',
        'UTC-07:00 America/Dawson_Creek' => 'UTC-07:00 America/Dawson_Creek',
        'UTC-07:00 America/Denver' => 'UTC-07:00 America/Denver',
        'UTC-07:00 America/Edmonton' => 'UTC-07:00 America/Edmonton',
        'UTC-07:00 America/Hermosillo' => 'UTC-07:00 America/Hermosillo',
        'UTC-07:00 America/Inuvik' => 'UTC-07:00 America/Inuvik',
        'UTC-07:00 America/Mazatlan' => 'UTC-07:00 America/Mazatlan',
        'UTC-07:00 America/Ojinaga' => 'UTC-07:00 America/Ojinaga',
        'UTC-07:00 America/Phoenix' => 'UTC-07:00 America/Phoenix',
        'UTC-07:00 America/Yellowknife' => 'UTC-07:00 America/Yellowknife',
        'UTC-08:00 America/Dawson' => 'UTC-08:00 America/Dawson',
        'UTC-08:00 America/Los_Angeles' => 'UTC-08:00 America/Los_Angeles',
        'UTC-08:00 America/Metlakatla' => 'UTC-08:00 America/Metlakatla',
        'UTC-08:00 America/Santa_Isabel' => 'UTC-08:00 America/Santa_Isabel',
        'UTC-08:00 America/Tijuana' => 'UTC-08:00 America/Tijuana',
        'UTC-08:00 America/Vancouver' => 'UTC-08:00 America/Vancouver',
        'UTC-08:00 America/Whitehorse' => 'UTC-08:00 America/Whitehorse',
        'UTC-08:00 Pacific/Pitcairn' => 'UTC-08:00 Pacific/Pitcairn',
        'UTC-09:00 America/Anchorage' => 'UTC-09:00 America/Anchorage',
        'UTC-09:00 America/Juneau' => 'UTC-09:00 America/Juneau',
        'UTC-09:00 America/Nome' => 'UTC-09:00 America/Nome',
        'UTC-09:00 America/Sitka' => 'UTC-09:00 America/Sitka',
        'UTC-09:00 America/Yakutat' => 'UTC-09:00 America/Yakutat',
        'UTC-09:00 Pacific/Gambier' => 'UTC-09:00 Pacific/Gambier',
        'UTC-09:30 Pacific/Marquesas' => 'UTC-09:30 Pacific/Marquesas',
        'UTC-10:00 America/Adak' => 'UTC-10:00 America/Adak',
        'UTC-10:00 Pacific/Honolulu' => 'UTC-10:00 Pacific/Honolulu',
        'UTC-10:00 Pacific/Johnston' => 'UTC-10:00 Pacific/Johnston',
        'UTC-10:00 Pacific/Rarotonga' => 'UTC-10:00 Pacific/Rarotonga',
        'UTC-10:00 Pacific/Tahiti' => 'UTC-10:00 Pacific/Tahiti',
        'UTC-11:00 Pacific/Midway' => 'UTC-11:00 Pacific/Midway',
        'UTC-11:00 Pacific/Niue' => 'UTC-11:00 Pacific/Niue',
        'UTC-11:00 Pacific/Pago_Pago' => 'UTC-11:00 Pacific/Pago_Pago',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_title_in_multi_languages'
  $field_bases['field_title_in_multi_languages'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title_in_multi_languages',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_used_for_branches'
  $field_bases['field_used_for_branches'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_used_for_branches',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'branch' => 'branch',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_variants'
  $field_bases['field_variants'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_variants',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'DESC',
          'property' => 'created',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'screen' => 'screen',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_verify_input'
  $field_bases['field_verify_input'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_verify_input',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'title_field'
  $field_bases['title_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'title_field',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  return $field_bases;
}
