# CapacitivePaperButtonPanel

This repo is a good demo of turning an arduino Uno into a capacitive touch button controller.  The buttons can control the Arduino itself (turn an LED on/ off) and also control a linux server over ethernet if desired (turn teh warez on/ off).  

The cool thing?  Well the buttons are paper! And they're labeled in pencil with hand writing!  There's a conductive copper tape thing under the paper writing that can sense your fingertip as it gets near.  

In all seriousness, the cool things I'm going to have my touch panel do are perform programming tasks such as run my unit tests, and open 'kinds of files' such as my main test files, my main library file, etc.  

## Construction

Use a wood panel.  Use some copper tape to make square pads and put them down in a grid (these are the buttons).  

To connect the pads to an Arduino by soldering wire leads to the pads.  
You might be able to 'hide' the wire lead if you make the pads tall and touch up where you soldered it on... perhaps include a frame or cover towards the tops of the buttons.  

Then place squares of paper over the tinfoil.  Lable the buttons as needed.  Oh, and follow a capacitive touch sensor tutorial for wiring instructions.  


## Installation

Download this repo with git.  

```
$ git clone https://github.com/TheNotary/capacitive_paper_button_panel
```

Connect your Arduino Uno and flash it using platformio:

    $ platformio run

## Parts

* [TODO:  Add Parts](http://127.0.0.1)

## Wiring

TODO: Drop a link to a picture of your wiring here or something.  Maybe fritzing.  

## Device Operation

TODO: Explain how to use the device here



## Primary References

* https://learn.adafruit.com/plush-game-controller/the-code
* (maybe not consulted) https://www.pjrc.com/teensy/td_libs_CapacitiveSensor.html


## Contributing

1. Fork it ( https://github.com/[my-github-username]/capacitive_paper_button_panel/fork )
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Add some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create a new Pull Request

