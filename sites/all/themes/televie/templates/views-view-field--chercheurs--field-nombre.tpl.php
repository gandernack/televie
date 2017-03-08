<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php 
//dsm($row);

$rowIndex = strval($view->row_index);
print "<span title='" . $row->_field_data['nid']['entity']->title . "\r\n" . $row->field_field_nombre[0]['raw']['value'] .  " chercheurs'>";
for ($i = 1; $i <= $row->field_field_nombre[0]['raw']['value']; $i++) {
  //print $view;
  //$sTitle = $row->_field_data['nid']['entity']->title;
  //print pathauto_cleanstring($sTitle);
  $sIndex = substr("00" . $rowIndex,-2);
  $sClass = "chercheurs" . $sIndex;
  print "<img src='" . drupal_get_path('theme',$GLOBALS['theme']) . "/images/man" . $sIndex . ".png' class='" . $sClass . "' />";
}
print "</span>";

?>