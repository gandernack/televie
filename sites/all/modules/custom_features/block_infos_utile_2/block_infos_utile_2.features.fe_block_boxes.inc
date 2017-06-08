<?php
/**
 * @file
 * block_infos_utile_2.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_infos_utile_2_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Infos utiles - Bloc 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'infos_utiles_02';
  $fe_block_boxes->body = '<div id="slide2">
    <div class="wrapper">
        <div class="content">
            <h2 id="slide2-titre">Le Télévie, à quoi ça sert ?</h2>

            <div class="bullet"><a class="bullet-1" href="#"><span class="visu-wrapper"><span class="visu">&nbsp;</span></span> <span><strong>Sauver</strong></span> <span class="desc">des vies</span> </a>
                <a class="bullet-2" href="#"> <span class="visu-wrapper"><span class="visu">&nbsp;</span></span> <span><strong>Financer</strong></span> <span class="desc">la recherche</span> </a>
                <a class="bullet-3" href="#"> <span class="visu-wrapper"><span class="visu">&nbsp;</span></span> <span><strong>Parler</strong></span> <span class="desc">du cancer</span> </a>
            </div>
        </div>
    </div>

    <div class="overlay overlay-article overlay-article-1">
        <div class="wrapper">
            <div class="overlay-content"><a class="close-overlay" href="#">x</a>

                <h3>Le Télévie sauve des vies</h3>

                <p>Depuis la création du Télévie, des pas de géants ont été accomplis en matière de recherche scientifique.</p>
                <p>Grâce à la technologie de pointe et aux nombreuses découvertes faites par les chercheurs, la mortalité suite à un cancer a considérablement diminuée.</p>
                <p>Il y a trente ans, 80% des enfants atteints d’un cancer mourraient. Aujourd’hui, plus de 90 % des enfants atteints de la «&nbsp;forme commune&nbsp;» de leucémies aigües guérissent !</p>
                <p>Le grand espoir du Télévie, c’est de pouvoir guérir deux fois plus de gens dans dix ans. Cet objectif est réalisable si la recherche continue d’avancer !</p>
            </div>
        </div>
    </div>

    <div class="overlay overlay-article overlay-article-2">
        <div class="wrapper">
            <div class="overlay-content"><a class="close-overlay" href="#">x</a>

                <h3>Le Télévie finance la recherche</h3>

                <p>Depuis 1989, 2.114 projets de recherche et 2.133 scientifiques ont été financés par le Télévie.</p>
                <p>Chaque année, plus de 190 chercheurs Télévie font leur rentrée académique. Ensemble, ils représentent plus de 1500 heures de travail par jour.</p>
                <p>Venant des quatre coins de la Wallonie et de Bruxelles, ces chercheurs ont tous un but commun : faire reculer la maladie.</p>
            </div>
        </div>
    </div>

    <div class="overlay overlay-article overlay-article-3">
        <div class="wrapper">
            <div class="overlay-content"><a class="close-overlay" href="#">x</a>

                <h3>Le Télévie parle du cancer</h3>

                <p>Grâce au Télévie, le cancer n’est plus un tabou mais devient un sujet accessible et ouvert.</p>
                <p>A travers les témoignages de personnes qui ont combattu ou combattent encore la maladie, le Télévie met en avant les différents enjeux du cancer.</p>
                <p>Grâce aux différentes émissions, aux réseaux sociaux et aux médias d’RTL, cette maladie qui nous concerne tous, est abordable et mieux comprise.</p>
                <p>Tout le monde est concerné par le cancer. Tout le monde a donc le droit de savoir.</p>
            </div>
        </div>
    </div>
</div>';

  $export['infos_utiles_02'] = $fe_block_boxes;

  return $export;
}
