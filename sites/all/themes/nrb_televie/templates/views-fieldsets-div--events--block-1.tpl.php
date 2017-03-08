
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="row-height-content">
    <div class="row-height-content-2">
      <?php foreach ($fieldset_fields as $name => $field): ?>
        <?php print @$field->separator . $field->wrapper_prefix . $field->label_html . $field->content . $field->wrapper_suffix; ?>
      <?php endforeach; ?>
    </div>
  </div>
</div>
