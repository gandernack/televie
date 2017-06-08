(function(window)
{
  Televie = {};
  Televie.Evening = {};
})(window);

/*************************************************
 *  Figure Animation
 *
 *  @author Alexandre Masy <a.masy@afelio.be>
 *  @version 1.0
 **************************************************/
(function(window)
{

  /**
   *  Figure
   *
   *  @param {DomElement} view
   **/
  function Figure(view)
  {
    this.view = jQuery(view);

    this.init();
  }

  /**
   *  prototype
   **/
  var p = Figure.prototype;

  /**
   *  Init the figure
   **/
  p.init = function()
  {
    this.var = this.view.find('.var');
    this.top = this.view.find('.top');
    this.bottom = this.view.find('.bottom');
    this.backTop = this.view.find('.top-back');
    this.backBottom = this.view.find('.bottom-back');

    this.value = '';
  }

  /**
   *  Set the value of the figure
   *
   *  @param {Number} value
   **/
  p.setValue = function(value)
  {
    if (this.value == value)
      return;

    this.value = value;

    // change the back value
    this.backTop.find('.var').html(this.value);
    this.backBottom.find('.var').html(this.value);

    TweenMax.to(this.top, 0.8,
    {
      rotationX           : '-180deg',
      transformPerspective: 300,
      ease                : Quart.easeOut,
      onComplete          : function()
      {
          this.top.html(value);
          this.bottom.html(value);

          TweenMax.set(this.top, { rotationX: 0 });
      }.bind(this)
    });

    TweenMax.to(this.backTop, 0.8,
    {
      rotationX           : 0,
      transformPerspective: 300,
      ease                : Quart.easeOut,
      clearProps          : 'all'
    });
  }

  Televie.Evening.Figure = Figure;
})(window);

/*************************************************
 *  Countdown Animation
 *
 *  @author Alexandre Masy <a.masy@afelio.be>
 *  @version 1.0
 **************************************************/
(function(window)
{

  /**
   *  Countdown constructor
   **/
  function Countdown()
  {
    this.options = {};
    this.options.delay = 5000;
    this.options.url = "/sites/all/themes/nrb_televie/countdown.php";

    this.init();
  }

  // Prototype
  var p = Countdown.prototype;

  /**
   *  Initialize
   **/
  p.init = function()
  {
    this.view = jQuery('.compteur__inner');
    this.figures = this.view.find(".figure").map(function(i, e){ return new Televie.Evening.Figure(e); });
    this.nFigures = this.figures.length;

    if (this.view.length > 0)
    {
      this.interval = null;
      this.start();
      this.updateValue();
    }
  }

  /**
   *  Start the timer interval
   **/
  p.start = function()
  {
    this.interval = setInterval(this.updateValue.bind(this), this.options.delay);
  }

  /**
   *  Stop the timer interval
   **/
  p.stop = function()
  {
    clearInterval(this.interval);
    this.interval = null;
  }

  /**
   *  Update the value of the countdown
   **/
  p.updateValue = function()
  {
    jQuery.when(
            retrieveValue.call(this)
          )
          .then(
            function(data)
            {
              this.value = parseFloat(data.replace(',','.'));
              parseValue.call(this, this.value);
            }.bind(this)
          )
    ;
  }

  function parseValue(value)
  {
    // decimal
    var decimal = (value%1).toFixed(2);
    var n = m = decimal.length - 2;
    var v = 0;
    while(n-- > 0)
    {
      i = this.nFigures - n - 1;
      v = decimal[m - n + 1];

      this.figures[i].setValue(v);
    }

    // others
    var numbers = (value|0).toString(10);
    n = numbers.length;
    m = n - 1;
    v = 0;
    while(n-- > 0)
    {
      // maximum 8 figures
      if (n >= 8)
      {
        continue;
      }

      i = this.nFigures - n - 3;
      v = numbers[m - n];

      this.figures[i].setValue(v);
    }
  }

  /**
   *  Retrieve the new data from the server
   *
   *  @return {String}
   **/
  function retrieveValue()
  {
    if (this.xhr) this.xhr.abort();

    this.xhr = jQuery.ajax({
      url: this.options.url,
      crossDomain: true
    })
    .done(function(data)
    {
      this.xhr = null;
      return data;
    }.bind(this))
    ;

    return this.xhr;
  }

  jQuery(window).on('load', function()
  {
    window.Televie.countdown = new Countdown();
  });

})(window);
