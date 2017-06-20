<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
    <?php
      // on va tester si l'event sélectionné est master ou pas
      $a_master = field_get_items('node',$node,'field_master_event');
      // si il est master, on prendra directement ses informations
      $entity = "node";
      if ($a_master[0]['value'] == "Esclave") {
        // l'event est esclave, on va rechercher le Maître
        $a_groupement = field_get_items('node',$node,'field_groupement');
        $groupement_id = $a_groupement[0]['safe_value'];
        // query de recherche
        $query = new EntityFieldQuery;
        $result = $query
          ->entityCondition('entity_type','node')
          ->entityCondition('bundle','event')
          ->fieldCondition('field_groupement','value',$groupement_id,'=')
          ->fieldCondition('field_master_event','value','Maître','=')
          ->execute();
        if (isset($result['node'])) {
          // on a trouvé le maître
          $fields = array_keys($result['node']);
          // On charge ses données
          $node_master = node_load($fields[0]);
          // On spécifie la source d'affichage de manière dynamique'
          $entity = "node_master";
        }
      }
      //print render($content);
    ?>

    <div class="agenda-detail-wrapper">
      <div id="agenda-detail">
        <div class="banner"></div>
        <div class="wrapper">
          <div class="breadcrump"><a href="/agenda">Retour</a></div>
          <h1> <?php print $node->title; ?> </h1>
          <div class="content">
            <div class="col col-left">
              <div class="desc">
                <?php
                  if($entity == "node") {
                    $render_field = field_view_field('node',$node,'body',array('label'=>'hidden'));
                  } else {
                    $render_field = field_view_field('node',$node_master,'body',array('label'=>'hidden'));
                  }
                  print render($render_field);
                ?>
              </div>
              <div class="resume">
                <?php
                  if($entity == "node") {
                    $render_field = field_view_field('node',$node,'field_participation');
                  } else {
                    $render_field = field_view_field('node',$node_master,'field_participation');
                  }
                  print render($render_field);
                ?>
                <div class="row row2">
                  <h2 class="heading2">Contact</h2>
                  <?php
                    if($entity == "node") {
                      $render_field = field_view_field('node',$node,'field_nom_organisation',array('label'=>'hidden'));
                    } else {
                      $render_field = field_view_field('node',$node_master,'field_nom_organisation',array('label'=>'hidden'));
                    }
                    print render($render_field);
                  ?>
                  <?php
                    if($entity == "node") {
                      $render_field = field_view_field('node',$node,'field_responsable',array('label'=>'hidden'));
                    } else {
                      $render_field = field_view_field('node',$node_master,'field_responsable',array('label'=>'hidden'));
                    }
                    print render($render_field);
                  ?>
                  <?php
                    if($entity == "node") {
                      $render_field = field_view_field('node',$node,'field_email_organisation',array('label'=>'hidden'));
                    } else {
                      $render_field = field_view_field('node',$node_master,'field_email_organisation',array('label'=>'hidden'));
                    }
                    print render($render_field);
                  ?>
                  <?php
                    if($entity == "node") {
                      $render_field = field_view_field('node',$node,'field_telephone_organisation',array('label'=>'hidden'));
                    } else {
                      $render_field = field_view_field('node',$node_master,'field_telephone_organisation',array('label'=>'hidden'));
                    }
                    print render($render_field);
                  ?>
                  <?php
                    if($entity == "node") {
                      $render_field = field_view_field('node',$node,'field_site_internet_organisation',array('label'=>'hidden'));
                    } else {
                      $render_field = field_view_field('node',$node_master,'field_site_internet_organisation',array('label'=>'hidden'));
                    }
                    print render($render_field);
                  ?>
                </div>

              </div>
              <div class="link">
                <?php
                  if($entity == "node") {
                    $render_field = field_view_field('node',$node,'field_site_internet',array('label'=>'hidden'));
                  } else {
                    $render_field = field_view_field('node',$node_master,'field_site_internet',array('label'=>'hidden'));
                  }
                  print render($render_field);
                ?>
                <?php
                  if($entity == "node") {
                    $render_field = field_view_field('node',$node,'field_url_facebook',array('label'=>'hidden'));
                  } else {
                    $render_field = field_view_field('node',$node_master,'field_url_facebook',array('label'=>'hidden'));
                  }
                  print render($render_field);
                ?>
              </div>
            </div>
            <div class="col col-right">
              <div class="pict">
                <?php
                  if($entity == "node") {
                    //$render_field = field_view_field('node',$node,'field_image',array('label'=>'hidden', 'settings' => array('file_view_mode' => 'image_agenda_detail')));
                    $render_field = field_view_field('node',$node,'field_image','image');
                  } else {
                    //$render_field = field_view_field('node',$node_master,'field_image',array('label'=>'hidden', 'settings' => array('file_view_mode' => 'image_agenda_detail')));
                    $render_field = field_view_field('node',$node_master,'field_image',array('label'=>'hidden', 'settings' => array('file_view_mode' => 'image_agenda_detail')));
                  }
                  print render($render_field);
                ?>
              </div>
              <div class="equalheight">
                <?php
                  if($entity == "node") {
                    $render_field = field_view_field('node',$node,'field_dates');
                  } else {
                    $render_field = field_view_field('node',$node_master,'field_dates');
                  }
                  print render($render_field);
                ?>
              </div>
            </div>
          </div>
        </div>



      </div>
    </div>
