<?php
  echo random_float( 1000, 9999999);


function random_float ($min,$max) {
   return ($min+lcg_value()*(abs($max-$min)));
}
?>
