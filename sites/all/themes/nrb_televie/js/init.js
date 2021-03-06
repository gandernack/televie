﻿(function ($) {
    $(document).ready(function () {

        $("#page-factual #section-fac-7 .bullet a").click(function () {
            return false;
        });
        $("#page-emotional #section-emo-1 .bullet a").click(function () {
            return false;
        });

        $("#page-emotional #section-emo-3 .bullet a.bullet-1").click(function () {
            return false;
        });

        $("#page-emotional #section-emo-3 .bullet a.bullet-3").click(function () {
            return false;
        });

        /*************************************************************
         *
         *  page soirée
         *
         *************************************************************/

        // video display
        jQuery('.block-video a').on('click', function(event)
        {
          event.preventDefault();

          jQuery('.block-video .video__normal').hide();
          jQuery('.block-video .video__active').show();

          return false;
        });

        // SMS
        jQuery('.second__item.item:nth-child(3n)').on('click', function(event)
        {
          event.preventDefault();

          var t = jQuery(event.currentTarget);
          t.toggleClass('-active');

          if (t.hasClass('-active'))
            jQuery(".second__information").html('x');
          else
            jQuery(".second__information").html('i');

          return false;
        });


        /*************************************************************
         *
         *  page contact / faq
         *
         *************************************************************/


        $(".bloc-faq").wrapInner("<div class='bloc-faq-wrapper'></div>");
        $(".bloc-faq .bloc-faq-wrapper").before($(".contact-block-1 .contact-banner"));
        $(".bloc-faq h2").addClass("titre01");

        $(".bloc-faq .bloc-faq-wrapper .item-list ul").accordion({
            heightStyle: "content"
        });

        /*************************************************************
         *
         *  pour ajouter des class chrome, ie, firefox... dans le body
         *
         *************************************************************/
        var currentBrowser = $.browserDetection(true);

        /*************************************************************
         *
         *  pour détecter le scoll dans une page
         *
         *************************************************************/

        $.localScroll();

        /*************************************************************
         *
         *  homepage
         *
         *************************************************************/

        var funnel = null;

        function openFunnel(funnel)
        {
          if (funnel)
          {
            jQuery(".main #page-emotional").removeClass("active");
            jQuery(".main #page-factual").removeClass("active");
          }
          funnel = funnel;
          var funnel = jQuery(funnel);

          jQuery("#block-views-a-la-une-block-1, #block-views-articles-block-1, #block-views-events-block-3").addClass("inactive");
          funnel.addClass("active");
          jQuery(".main .block-close").slideDown(500);

          jQuery("html, body").stop().animate({scrollTop: funnel.offset().top - 100}, 600);
        }

        function closeFunnel()
        {
          funnel = null;
          jQuery("#block-views-a-la-une-block-1, #block-views-articles-block-1, #block-views-events-block-3").removeClass("inactive");

          jQuery(".main .block-close").slideUp(500);

          jQuery("html, body").stop().animate({scrollTop: 0}, 600, function()
          {
            jQuery(".main #page-emotional").removeClass("active");
            jQuery(".main #page-factual").removeClass("active");
          });
        }

        // Emotional::Open
        jQuery('.videoitem').eq(0).click(function ()
        {
          openFunnel("#page-emotional");
        });

        // Factual::Open
        jQuery('.videoitem').eq(1).click(function ()
        {
          openFunnel("#page-factual");
        });

        // Funnel::Close
        jQuery(".main .close").click(function ()
        {
          closeFunnel();
        });

        /*************************************************************
         *
         *  mettre la flèche sur le bouton sur la page contact
         *
         *************************************************************/

        $(".contact-total .form-actions").wrap("<div class='form-actions-total'></div>");


        /*************************************************************
         *
         *  page infos utiles : modifie la hauteur globale en fonction de la ligne du temps
         *
         *************************************************************/



        $(".infos-total #infos-utiles .view-ligne-du-temps #slide4 .view-footer #lt-more").click(function () {
            $(".infos-total").css("height", "5967px");
            $(".infos-total #infos-utiles .view-ligne-du-temps #slide4 .view-footer #lt-more").click(function () {
                $(".infos-total").css("height", "7102px");
                $(".infos-total #infos-utiles .view-ligne-du-temps #slide4 .view-footer #lt-more").click(function () {
                    $(".infos-total").css("height", "8302px");
                    $(".infos-total #infos-utiles .view-ligne-du-temps #slide4 .view-footer #lt-more").click(function () {
                        $(".infos-total").css("height", "8580px");
                    });
                });
            });
        });


        /*************************************************************
         *
         *  header sticky
         *
         *************************************************************/


        $("#header").sticky({topSpacing: 0});


        /*************************************************************
         *
         *  menu mobile
         *
         *************************************************************/

        $("#block-menu-menu-mobile-navigation .content").prepend("<a href='#' class='menu-barre'>&nbsp;</a><a href='#' class='menu-close'>&nbsp;</a>");


        $(".menu-barre").click(function () {
            $(".menu-barre").addClass("inactive");
            $(".menu-close").addClass("active");
            $("#block-menu-menu-mobile-navigation .menu").animate({
                    right: '0px'
                }, 500, "easeInOutQuart"
            );
        });


        $(".menu-close").click(function () {
            $(".menu-barre").removeClass("inactive");
            $(".menu-close").removeClass("active");
            $("#block-menu-menu-mobile-navigation .menu").animate({
                    right: '-1500px'
                }, 500, "easeInOutQuart"
            );
        });


        /*************************************************************
         *
         *  met le block addthis à la bonne place dans la page
         *
         *************************************************************/


        $(".node-type-article #block-system-main .field-name-body").after($(".node-type-article #block-addthis-addthis-block"));


        /*************************************************************
         *
         *  event sur la home
         *
         *************************************************************/

        $("#block-views-a-la-une-block-link-open .content .view-header").click(function () {
            $("#block-views-a-la-une-block-a-la-une").toggle("slide", {direction: 'right'}, 500);
            $("#block-views-a-la-une-block-link-open").toggle("slide", {direction: 'right'}, 500);
            Drupal.viewsSlideshow.action({ "action": 'play', "slideshowID": "a_la_une-block_a_la_une", "force": true });

        });

        $("#block-views-a-la-une-block-a-la-une .event-home-x").click(function () {
            $("#block-views-a-la-une-block-a-la-une").toggle("slide", {direction: 'right'}, 500);
            $("#block-views-a-la-une-block-link-open").toggle("slide", {direction: 'right'}, 500);
            Drupal.viewsSlideshow.action({ "action": 'pause', "slideshowID": "a_la_une-block_a_la_une", "force": true });
        });


        $("#footer .region-footer-first .blockfooterfirst-part1 .don-an li.no a").click(function () {
            $("#footer .region-footer-first .blockfooterfirst-part2").slideDown();
            $("#footer .region-footer-first .blockfooterfirst-part1").slideUp();
            return false;
        });


        /*************************************************************
         *
         *  tous les parallax
         *
         *************************************************************/


        $('#total #slide2').parallax("50%", 0.1);
        $('#total #slide3').parallax("50%", 0.1);


        $('#total #slide7').parallax("50%", 0.1);
        $('#total #slide8').parallax("50%", 0.1);

        $('.infos-total #block-block-4').parallax("10%", 0.1);
        $('#aujourlejour .aujourlejour-header').parallax("0%", 0.1);
        $('.agenda-wrapper #agenda .agenda-header').parallax("0%", 0.1);
        $('.page-soutenir-le-televie #block-system-main .view-facons-d-aider .view-header').parallax("0%", 0.1);

        /*************************************************************
         *
         *    ajoute div mobile qd plus petit que 1024px
         *    adaptation version mobile du bouton en savoir plus
         *
         *************************************************************/

        enquire.register("screen and (max-width:885px)", {
            match: function () {
                $("body").addClass("mobile");
            },
            unmatch: function () {
                $("body").removeClass("mobile");
            },
        });


        /*************************************************************
         *
         *  tous les overlays
         *
         *************************************************************/


        $(".infos-total #infos-utiles .slide3 a").click(function () {
            $(".overlay.overlay-video").fadeIn("slow", function () {
            });
            return false;
        });


        $(".infos-total #infos-utiles #slide2 a.bullet-1").click(function () {
            $(".overlay.overlay-article-1").fadeIn("slow", function () {
            });
            return false;
        });


        $(".infos-total #infos-utiles #slide2 a.bullet-2").click(function () {
            $(".overlay.overlay-article-2").fadeIn("slow", function () {
            });
            return false;
        });


        $(".infos-total #infos-utiles #slide2 a.bullet-3").click(function () {
            $(".overlay.overlay-article-3").fadeIn("slow", function () {
            });
            return false;
        });


        $(".infos-total #infos-utiles #slide2 a.bullet-4").click(function () {
            $(".overlay.overlay-article-4").fadeIn("slow", function () {
            });
            return false;
        });

        // Load the Youtube API
        /*
         * @author       Rob W (http://stackoverflow.com/a/7513356/938089
         * @description  Executes function on a framed YouTube video (see previous link)
         *               For a full list of possible functions, see:
         *               http://code.google.com/apis/youtube/js_api_reference.html
         * @param String frame_id The id of (the div containing) the frame
         * @param String func     Desired function to call, eg. "playVideo"
         * @param Array  args     (optional) List of arguments to pass to function func*/
        function callPlayer(frame_id, func, args) {
            if (window.jQuery && frame_id instanceof jQuery) frame_id = frame_id.get(0).id;
            var iframe = document.getElementById(frame_id);
            if (iframe && iframe.tagName.toUpperCase() != 'IFRAME') {
                iframe = iframe.getElementsByTagName('iframe')[0];
            }
            if (iframe) {
                // Frame exists,
                iframe.contentWindow.postMessage(JSON.stringify({
                    "event": "command",
                    "func": func,
                    "args": args || [],
                    "id": frame_id
                }), "*");
            }
        }


        $(".overlay .close-overlay").click(function () {
            $(".overlay").fadeOut("slow", function () {
                // Animation complete

                // @TODO: Disable the video on overlay close
                callPlayer('videoPlayer','stopVideo');
            });
            return false;
        });


        /*************************************************************
         *
         *  tous les equalheight
         *
         *************************************************************/

        // #soutenir-block-1
        $('.page-soutenir-le-televie #soutenir-block-1 .views-row .title').equalHeights();
        $('.page-soutenir-le-televie #soutenir-block-1 .views-row .desc').equalHeights();
        $('.page-soutenir-le-televie #soutenir-block-1 .views-row .link').equalHeights();

        $('.page-soutenir-le-televie .view-display-id-block_2 .views-row .title').equalHeights();
        $('.page-soutenir-le-televie .view-display-id-block_2 .views-row .desc').equalHeights();
        $('.page-soutenir-le-televie .view-display-id-block_2 .views-row .link').equalHeights();

        $('.page-soutenir-le-televie .view-display-id-block_3 .views-row .title').equalHeights();
        $('.page-soutenir-le-televie .view-display-id-block_3 .views-row .desc').equalHeights();
        $('.page-soutenir-le-televie .view-display-id-block_3 .views-row .link').equalHeights();

        $('.node-type-article ul#node-navigation li a .cadre').equalHeights();

        $('.block-inline').equalHeights();

        $('.node-type-event .equalheight .view-events .equalheight-row').equalHeights();


        $('.aujourlejour-result').isotope({
            // options
            itemSelector: '.masonry-item',
            masonry: {
                columnWidth: 10
            }
        });

        $(window).scroll(function () {

            /* Check the location of each desired element */
            $('.fadein').each(function (i) {

                var bottom_of_object = $(this).offset().top + $(this).outerHeight();
                var bottom_of_window = $(window).scrollTop() + $(window).height();

                /* If the object is completely visible in the window, fade it it */
                if (bottom_of_window > bottom_of_object) {

                    $(this).animate({'opacity': '1'}, 500);

                }

            });

        });


    });


})(jQuery);
