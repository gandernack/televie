/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet( 'drupal',
    [
            /* Block Styles */

            // These styles are already available in the "Format" drop-down list, so they are
            // not needed here by default. You may enable them to avoid placing the
            // "Format" drop-down list in the toolbar, maintaining the same features.
            /*
            { name : 'Paragraph'		, element : 'p' },
            { name : 'Heading 1'		, element : 'h1' },
            { name : 'Heading 2'		, element : 'h2' },
            { name : 'Heading 3'		, element : 'h3' },
            { name : 'Heading 4'		, element : 'h4' },
            { name : 'Heading 5'		, element : 'h5' },
            { name : 'Heading 6'		, element : 'h6' },
            { name : 'Preformatted Text', element : 'pre' },
            { name : 'Address'			, element : 'address' },
            */

            { name : 'Titre 1', element : 'h2', attributes: { 'class' : 'titre01' } },
            { name : 'Titre 2 noir', element : 'h2', attributes: { 'class' : 'titre02-noir' } },
            { name : 'Titre 2 rouge', element : 'h2', attributes: { 'class' : 'titre02-rouge' } },
            { name : 'Intro noire', element : 'h3', attributes: { 'class' : 'intro01' } },
            { name : 'Intro rouge', element : 'h3', attributes: { 'class' : 'intro02' } },
            { name : 'Texte gris', element : 'span', attributes: { 'class' : 'txt01' } },
            { name : 'Texte gris gras', element : 'span', attributes: { 'class' : 'txt01b' } },
            { name : 'Texte rouge', element : 'span', attributes: { 'class' : 'txt02' } },
            { name : 'Texte rouge gras', element : 'span', attributes: { 'class' : 'txt02b' } },
            { name : 'Texte bleu', element : 'span', attributes: { 'class' : 'txt03' } },
            { name : 'Texte bleu gras', element : 'span', attributes: { 'class' : 'txt03b' } },
            { name : 'Lien fond rouge', element : 'span', attributes: { 'class' : 'btn01' } },
            { name : 'Lien fond bleu', element : 'span', attributes: { 'class' : 'btn02' } },
            { name : 'Citation', element : 'span', attributes: { 'class' : 'cita01' } },
            { name : 'Box beige clair', element : 'div', attributes: { 'class' : 'box01' } },
            { name : 'Box beige moyen', element : 'div', attributes: { 'class' : 'box02' } },
            { name : 'Box blanc', element : 'div', attributes: { 'class' : 'box03' } },
            { name : 'Box rouge', element : 'div', attributes: { 'class' : 'box04' } },
            { name : 'Box bleu', element : 'div', attributes: { 'class' : 'box05' } },
            { name : 'Liste grande fleche', element : 'span', attributes: { 'class' : 'li01' } }
            
            

    ]);
}