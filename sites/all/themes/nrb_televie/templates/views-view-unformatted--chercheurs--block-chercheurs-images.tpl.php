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
    $pos = strpos($row,"-");
    $nombre = intval(substr($row,1,$pos-1));
    $titre = substr($row,$pos+1);
    if ($nombre > 1) {
      $alt = $titre . " : " . $nombre . " chercheurs";
    } else {
      $alt = $titre . " : " . $nombre . " chercheur";
    }
    //print "<span class='groupe-icones-chercheur' title='".$alt."'>";
    print "<span class='groupe-icones-chercheur'>";
    for ($i = 1; $i <= intval($row); $i++) { ?>
      <?php 
      $sClass = "type" . substr("00" . strval($id+1), -2); 
      $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL));
      ?>
      <img class="<?php print $sClass; ?>" src="<?php print $theme_path; ?>/img/content/chercheurs.png" alt=""</img>
    <?php 
    } 
    print "</span>";
    ?>
<?php endforeach; ?>
