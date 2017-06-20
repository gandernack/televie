/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {

    CKEDITOR.stylesSet.add( 'my_styles', [
			{ name : 'Titre 2 - Noir',        element : 'h2',   attributes : { 'class' : 'titre02-noir' } },
			{ name : 'Titre 2 - Rouge',       element : 'h2',   attributes : { 'class' : 'titre02-rouge' } },
			{ name : 'Titre 3 - Noir',        element : 'h2',   attributes : { 'class' : 'titre03-noir' } },
			{ name : 'Titre 3 - Rouge',       element : 'h2',   attributes : { 'class' : 'titre03-rouge' } },
			{ name : 'Chapeau - Noir',        element : 'p',    attributes : { 'class' : 'intro01-noir' } },
			{ name : 'Chapeau - Rouge',       element : 'p',    attributes : { 'class' : 'intro01-rouge' } },

      { name : 'Texte gris'	, element : 'span', attributes : { 'class' : 'txt01' } },
      { name : 'Texte gris gras'	, element : 'span', attributes : { 'class' : 'txt01b' } },
      { name : 'Texte rouge'	, element : 'span', attributes : { 'class' : 'txt02' } },
      { name : 'Texte rouge gras'	, element : 'span', attributes : { 'class' : 'txt02b' } },
      { name : 'Texte bleu'	, element : 'span', attributes : { 'class' : 'txt03' } },
      { name : 'Texte bleu gras'	, element : 'span', attributes : { 'class' : 'txt03b' } },
      { name : 'Lien fond rouge'         , element : 'span', attributes : { 'class' : 'btn01' } },
      { name : 'Lien fond bleu'         , element : 'span', attributes : { 'class' : 'btn02' } },
      { name : 'Citation'         , element : 'span', attributes : { 'class' : 'cita01' } },
      { name : 'Box beige clair'         , element : 'span', attributes : { 'class' : 'box01' } },
      { name : 'Box beige moyen'         , element : 'span', attributes : { 'class' : 'box02' } },
      { name : 'Box blanc'         , element : 'span', attributes : { 'class' : 'box03' } },
      { name : 'Box rouge'         , element : 'span', attributes : { 'class' : 'box04' } },
      { name : 'Box bleu'         , element : 'span', attributes : { 'class' : 'box05' } },
      { name : 'Liste grande fleche'         , element : 'span', attributes : { 'class' : 'li01' } }

]);

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

             { name : 'Titre 1'		, element : 'h2', attributes : { 'class' : 'titre01' } },
            { name : 'Intro'		, element : 'h3', attributes : { 'class' : 'intro01' } },
            { name : 'Texte gris'	, element : 'span', attributes : { 'class' : 'txt01' } },
            { name : 'Texte gris gras'	, element : 'span', attributes : { 'class' : 'txt01b' } },
            { name : 'Texte rouge'	, element : 'span', attributes : { 'class' : 'txt02' } },
            { name : 'Texte rouge gras'	, element : 'span', attributes : { 'class' : 'txt02b' } },
            { name : 'Texte bleu'	, element : 'span', attributes : { 'class' : 'txt03' } },
            { name : 'Texte bleu gras'	, element : 'span', attributes : { 'class' : 'txt03b' } },
            { name : 'Lien fond rouge'         , element : 'span', attributes : { 'class' : 'btn01' } },
            { name : 'Lien fond bleu'         , element : 'span', attributes : { 'class' : 'btn02' } },
            { name : 'Citation'         , element : 'span', attributes : { 'class' : 'cita01' } },
            { name : 'Box beige clair'         , element : 'span', attributes : { 'class' : 'box01' } },
            { name : 'Box beige moyen'         , element : 'span', attributes : { 'class' : 'box02' } },
            { name : 'Box blanc'         , element : 'span', attributes : { 'class' : 'box03' } },
            { name : 'Box rouge'         , element : 'span', attributes : { 'class' : 'box04' } },
            { name : 'Box bleu'         , element : 'span', attributes : { 'class' : 'box05' } },
            { name : 'Liste grande fleche'         , element : 'span', attributes : { 'class' : 'li01' } },

            /* Inline Styles */

            // These are core styles available as toolbar buttons. You may opt enabling
            // some of them in the "Styles" drop-down list, removing them from the toolbar.
            /*
            { name : 'Strong'			, element : 'strong', overrides : 'b' },
            { name : 'Emphasis'			, element : 'em'	, overrides : 'i' },
            { name : 'Underline'		, element : 'u' },
            { name : 'Strikethrough'	, element : 'strike' },
            { name : 'Subscript'		, element : 'sub' },
            { name : 'Superscript'		, element : 'sup' },
            */

            { name : 'Marker: Yellow'	, element : 'span', styles : { 'background-color' : 'Yellow' } },
            { name : 'Marker: Green'	, element : 'span', styles : { 'background-color' : 'Lime' } },

            { name : 'Big'				, element : 'big' },
            { name : 'Small'			, element : 'small' },
            { name : 'Typewriter'		, element : 'tt' },

            { name : 'Computer Code'	, element : 'code' },
            { name : 'Keyboard Phrase'	, element : 'kbd' },
            { name : 'Sample Text'		, element : 'samp' },
            { name : 'Variable'			, element : 'var' },

            { name : 'Deleted Text'		, element : 'del' },
            { name : 'Inserted Text'	, element : 'ins' },

            { name : 'Cited Work'		, element : 'cite' },
            { name : 'Inline Quotation'	, element : 'q' },

            { name : 'Language: RTL'	, element : 'span', attributes : { 'dir' : 'rtl' } },
            { name : 'Language: LTR'	, element : 'span', attributes : { 'dir' : 'ltr' } },

            /* Object Styles */

            {
                    name : 'Image on Left',
                    element : 'img',
                    attributes :
                    {
                            'style' : 'padding: 5px; margin-right: 5px',
                            'border' : '2',
                            'align' : 'left'
                    }
            },

            {
                    name : 'Image on Right',
                    element : 'img',
                    attributes :
                    {
                            'style' : 'padding: 5px; margin-left: 5px',
                            'border' : '2',
                            'align' : 'right'
                    }
            }
    ]);
}
