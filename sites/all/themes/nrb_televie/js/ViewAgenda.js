/**
 * Author: Pol Dellaiera
 * Email: pol.dellaiera@protonmail.com
 * Date: 2016/05/24
 */

/**
 * This code will scroll to the element having a particular ID
 * upon a button click.
 */

(function ($) {
    Drupal.behaviors.NRBViewAjax = {
        attach: function (context, settings) {
            $("#edit-submit-events").on('click', function () {
                var aTag = $('#agenda-result');
                $('html,body').animate({scrollTop: aTag.offset().top},'slow');
            });
        }
    };
})(jQuery);

