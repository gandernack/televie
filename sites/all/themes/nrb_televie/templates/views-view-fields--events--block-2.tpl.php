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
<?php
//if (strip_tags($fields['path']->content) == "/marche-de-noel-de-morlanwelz-0") {
  //file_put_contents("gan2.txt", print_r($row, true));
  //print_r($fields['field_image']);
//}
?>
<a href="<?php print strip_tags($fields['path']->content); ?>">
  <span class="ecran-noir"></span>
  <span class="visu" style="background-image:url('<?php print $fields['field_image']->content; ?>')">
    <?php
      //if ($zebra == 'odd') {
        //print theme('image_style', array( 'path' =>  $row->field_field_image[0]['raw']['uri'], 'style_name' => 'agenda_masonery_-_2'));
      //} else {
      //}

    ?>
  </span>
  <span class="desc-total">
    <span class="desc-fleche"><span class="desc-fleche-1">></span><span class="desc-cadre">&nbsp;</span></span>
    <span class="desc">
      <span class="title"><?php print $fields['title']->content; ?></span>
      <span class="date"><?php print $fields['field_date']->content; ?></span>
      <span class="lieu"><?php print $fields['field_localite']->content; ?></span>
    </span>
  </span>
</a>
