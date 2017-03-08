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
  $event_date = DateTime::createFromFormat("Y-m-d H:i:s",$row->field_field_date[0]['raw']['value']);
  $actual_date = new DateTime();
  if ($event_date < $actual_date) {
    print '<div class="equalheight-row-content">';
    print '<span>';
    print t("Trop tard");
    print "</span>";
    print "</div>";
  } elseif ($row->field_field_complet[0]['raw']['value'] == '1') {
    print '<div class="equalheight-row-content">';
    print '<span>';
    print t("Complet");
    print "</span>";
    print "</div>";
  } else {
    print $output;
  }
?>

