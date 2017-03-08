<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php //dsm($row); ?>
<?php //dpm($row); ?>
<?php
//$row->field_field_image['0']['rendered']['#image_style'] = "agenda_masonery_-_2";
//print "<img src=" . image_style_url("agenda_masonery_-_2",$row->field_field_image['0']['raw']['uri']) . ">";
?>
<?php //dsm($row); ?>
<?php 

?>
<a href="<?php print strip_tags($fields['path']->content); ?>">
  <span class="ecran-noir">&nbsp;</span>
  <span class="visu"><?php print $fields['field_image']->content; ?></span>
  <span class="part1">
    <span class="content">
      <span class="title"><?php print $fields['title']->content; ?></span>
      <span class="detail"><?php print $fields['field_date']->content; ?> <?php print $fields['field_heure_debut']->content; ?> : <?php print $fields['field_localite']->content; ?></span>
    </span>
  </span>
  <span class="part2">
    <span class="content">
      <span class="title"><?php print $fields['title']->content; ?></span>
      <span class="detail"><?php print $fields['field_date']->content; ?> <?php print $fields['field_heure_debut']->content; ?> : <?php print $fields['field_localite']->content; ?></span>
    </span>
    <span class="fleche">></span>
    <span class="carre">&nbsp;</span>
  </span>
</a>

