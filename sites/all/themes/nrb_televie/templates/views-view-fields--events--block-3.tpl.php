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

<a href="<?php print strip_tags($fields['path']->content); ?>" class="prochactivites__item">
  <div class="prochactivites__normal">
    <div class="prochactivites__first" style="background-image:url('<?php print strip_tags($fields['field_image']->content); ?>')">
      <time class="prochactivites__time"><?php print $fields['field_date_1']->content; ?></time>
    </div>

    <div class="prochactivites__second">
      <div class="prochactivites__title"><?php print $fields['title']->content; ?></div>
      <div class="prochactivites__desc"><?php print $fields['body']->content; ?></div>
    </div>

  </div>
  <div class="prochactivites__hover">
    <span class="prochactivites__cta">Ca <strong>m'intéresse</strong></span>
  </div>
</a>

