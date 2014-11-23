(function($) {
    Drupal.behaviors.OpenHourglassProgress = {
        attach: function (context, settings) {
            $('.ui-label').each(function(){
                var percentage = parseInt($(this).text());
                var display = percentage;

                if (percentage > 50 && percentage < 100) {
                    $(this).parents('.ui-progress-bar').addClass('warning');
                }
                if (percentage > 100) {
                    $(this).parents('.ui-progress-bar').addClass('error');
                    display = 100;
                }
                $(this).text(percentage + '%');
                $(this).parent().css('width', display + '%');
            });
        }
    };
})(jQuery);

