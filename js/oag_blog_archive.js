/**
 * @file
 * Javascript for View OAG Blog Archive.
 */

 (function ($) {
  Drupal.behaviors.oag_blog_archive = {
    attach: function (context, settings) {

      var config = Drupal.settings.oag_blog;

      // Expand the first element
      $('.view-oag-blog-archive .oag-blog-archive-toggle').first().removeClass('collapsed');
      $('.view-oag-blog-archive .view-grouping-content').first().addClass('in');
      $('.view-oag-blog-archive .view-grouping-header-2 .oag-blog-archive-toggle').first().removeClass('collapsed');
      $('.view-oag-blog-archive .view-grouping-content .view-grouping-content').first().addClass('in');

      // Change screen reader text when collapsed
      // TODO Text is not changed for the first element which is expanded in this file
      $.each(config, function (cssId, date) {
        $('#' + cssId).once().on('click', function(e) {

          e.preventDefault();

          $('form#views-exposed-form-oag-blog-blog-list')
            .find('#edit-created-year').val(date.year)
            .find('#edit-created-month').val(date.month);

          $('form#views-exposed-form-oag-blog-blog-list').find('.form-submit').trigger('click');
        });

        $('#' + cssId).next('.oag-blog-archive-toggle').on('click', function () {
          $(this).children('.sr-only').text(function(i, text){
            return text === "Collapse" ? "Collapsed" : "Collapse";
          });
        });
      });
    }
  };
}(jQuery));
