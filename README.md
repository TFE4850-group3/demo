# Blinking demo

Made this project to explore the AVR-toolchain.

## Dependencies

### OS X

Install [CrossPack](https://www.obdev.at/products/crosspack/index.html).

### Debian / Ubuntu

*(untested)*

Run `sudo apt-get install gcc-avr binutils-avr gdb-avr avr-libc avrdude`.

## Setup

* Clone this repo `git clone git@github.com:TFE4850-group3/demo.git`.
* The code is in the firmware folder `cd demo/firmware`.
* If all dependencies are installed, `make` should work, and if the AVR Dragon and the microcontroller is wired up and connected via USB, `make flash` should work.
* If `make flash` doesn't work, you might need to add `default_programmer = dragon_jtag;` to you `~/.avrduderc`-file.

All code is in `main.c` for now.
To try something else, edit it in your favorite text editor.

### Xcode

It should be possible to use Xcode on OS X.
I haven't tested this, but I assume `File > Open` and open the `.xcodeproject` thingy.
