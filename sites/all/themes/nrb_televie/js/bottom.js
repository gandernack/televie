/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

(function($) {
$(document).ready(function () {

/* gestion de la ligne du temps */

    var size_li = $(".ligne-temps > div").size();
    var x = 5;
    $('.ligne-temps > div:gt('+x+')').hide();
    $('#lt-more').click(function () {
        x= (x+5 <= size_li) ? x+5 : size_li;
        $('.ligne-temps > div:lt('+x+')').show();
         //$('#showLess').show();
        if(x === size_li){
            $('#lt-more').hide();
        }
    });

  });

})(jQuery);