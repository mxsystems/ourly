(function($) {
  Drupal.behaviors.ourly_bulk = {
    attach: function (context, settings) {
      $('form .btn-primary').not(':last').hide();
      $('form').each(function() {
        $(this).validate({
          onsubmit:false
        });
      });
      $('form:last').submit(function(event) {
         // scan through all the forms to see if criteria has been met in order to trigger validation.
        $('form').each(function() {
          // Removal button exist, add validation. (because we have more than 1 row of entry)
          // Triggers the submission of that form in order to trigger the validation.
          var form_id = $(this).attr('id');
          if ($(this).find('.btn-danger').length) {
            if ($('#'+form_id).valid() == false) {
              event.preventDefault();
            }
          } else {
            // Single row, let's check if input values are filled out
            if ($(this).find('input.bulk_entry_time_spent').val()
              || $(this).find('select.bulk_entry_category').val()) {
             if ($('#'+form_id).valid() == false) {
               event.preventDefault();
             }
            }
          }
        })
      });
    }
  };
})(jQuery);