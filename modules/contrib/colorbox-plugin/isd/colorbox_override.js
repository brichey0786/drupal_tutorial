/**
 * @file
 * Colorbox module style js.
 */

(function ($) {
 Drupal.behaviors.initColorboxDefaultStyle = {
  attach: function (context, settings) {
    $(context).bind('cbox_complete', function () {
      // Only run if there is a title.
      // console.log($('#colorbox')[0]);

      // let userDefinedBtn = $('.colorbox-submit-btn');
      // if(userDefinedBtn) {
      //   console.log('Found Button');
      //   let newBtn = $("<button>")
      // }

      // 
      if ($('#cboxTitle:empty', context).length == false) {
        $('#cboxLoadedContent img', context).bind('mouseover', function () {
          $('#cboxTitle', context).slideDown();
        });
        $('#cboxOverlay', context).bind('mouseover', function () {
          $('#cboxTitle', context).slideUp();
        });
      }
      else {
        $('#cboxTitle', context).hide();
      }
    });
  }
};

})(jQuery);
