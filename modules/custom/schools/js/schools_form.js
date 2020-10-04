(function($) {
  $(document).ready(function () {
    const $ratings = $('.school-rating__stars').children();
    // console.log($ratings.eq(0));
    let baseUrl = $ratings.eq(0).attr('src');
    baseUrl = baseUrl.slice(0, baseUrl.lastIndexOf('/'));
    const filledUrl = baseUrl + '/star_filled.svg';
    const outlinedUrl = baseUrl + '/star_outlined.svg';
    // console.log(filledUrl, outlinedUrl);
    $ratings.click(function (e) {
      const index = $(this).index();
      $ratings.each(function (i) {
        if (i <= index) {
          $(this).attr('src', filledUrl);
        } else {
          $(this).attr('src', outlinedUrl);
        }
      })
    })
  })
})(jQuery);