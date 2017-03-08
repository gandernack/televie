<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php
    $dynamic_class = "row-reserved";
    $event_date = DateTime::createFromFormat("Y-m-d H:i:s",$view->result[$id]->field_field_date[0]['raw']['value']);
    $actual_date = new DateTime();
    if ($event_date < $actual_date) {
      $dynamic_class = "row-past";      
    } elseif ($view->result[$id]->field_field_complet[0]['raw']['value'] == '1') {
      $dynamic_class = "row-full";
    } 
  ?>

  <div <?php if ($classes_array[$id]) { print ' class=" ' . $dynamic_class . ' ' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
