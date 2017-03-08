<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <?php
      $alt = strip_tags($row);
      $pos = strpos($alt,":");
      $titre = substr($alt,0,$pos-1);
      ?>
      <?php
        $sClass = "type" . substr("00" . strval($id+1), -2);
      ?>
    <li class="<?php print $classes_array[$id]; ?> <?php print $sClass; ?>" title='<?php print $alt; ?>'><?php print $titre; ?></li>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>
