(function($) {
  Drupal.behaviors.ourly_timer = {
    attach: function (context, settings) {
      $("#timer_button").click(function(){
        switch($(this).html().toLowerCase())
        {
          case "start":
            $("#quick_timer").timer({
              action:'start'
            });
            $(this).html("Pause");
            $(this).removeClass("btn-primary");
            $(this).addClass("btn-danger");
            break;
          case "resume":
            //you can specify action via string
            $("#quick_timer").timer('resume');
            $(this).html("Pause")
            $(this).removeClass("btn-primary");
            $(this).addClass("btn-danger");
            break;
          case "pause":
            // Record elapsed time in seconds to the hidden input
            var time_elapsed = $('#quick_timer').data('seconds');
            $('#timer_hidden').val(time_elapsed);
            //you can specify action via object
            $("#quick_timer").timer('pause');
            $(this).html("Resume")
            $(this).removeClass("btn-danger");
            $(this).addClass("btn-primary");
            break;
        }
      });
      // Building some basic javascript validation.
      $('#timer_submit').click(function(e) {
          if ($('#timer_hidden').val() == 0) {
            $.msgGrowl ({
              type: 'error',
              title: 'Timer error',
              text: 'Please start/pause the timer before you submit the time entry'
            });
            e.preventDefault();
          }
        if ($('#timer_hidden').val() > 86400) {
          $.msgGrowl ({
            type: 'error',
            title: 'Timer error',
            text: 'Each time entry submission must be less than 24 hours'
          });
        }
        if ($('#timer_category').val() == '') {
          $.msgGrowl ({
            type: 'error',
            title: 'Timer error',
            text: 'Category is required'
          });
          e.preventDefault();
        }
      });
    }
  };
})(jQuery);