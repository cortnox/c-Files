# c-Files
Programs written in C
Mon
This .zip document contains the original files for getting started with the bare minimum requirements needed essentially for programming the Arduino Micro-Controller programmatically using the C programming Language (no Arduino IDE!) and the avr-gcc libraries/packages provided from this link https://www.obdev.at/products/crosspack/download.html - these are the equivalent necessities needed for avr-gcc programming on a Mac Book as there is no known library in the given package manager available for installing the required AVR-GCC and AVRLIBC libraries...

After the installing latest package (Mac of course) - CrossPack-AVR-20131216.dmg (41730 KB)
the Source of the above package also 
provided valuable insight into introductory programming with AVR here: https://www.pololu.com/docs/0J51 and here https://www.pololu.com/docs/0J36/5.c for own perusal.

AVR-DUDE Documentation can be found here to which may also be helpful and of useful guidance:
http://www.nongnu.org/avrdude/user-manual/avrdude.html

These files were written / generated / compiled on a MacOS system They are simply files auto-generated from the cross pack development kit
To generate a file 
type in the below command into the console.

avr-project -DemoAVRProjectNameHere-
//this might work if you have avr-gcc and avrlibc packages already.. try it out...

This will generate a folder with the name:-DemoAVRProjectNameHere-
where -DemoAVRProjectNameHere- is Project name that is specified.

Once the folder is generated this can be further navigated into and
one will see an <DemoAVRProjectNameHere>.XcodeProject (don’t worry about that its only for opening it with the Xcode IDE) file as well as a firmware folder and in navigating into that firmware folder they should see a Makefile file as-well as a main.c file

This repo contains the file contents with the Makefile configured to set the Arduino Board as a viable PROGRAMMER DEVICE instead of the USBBASP PROGRAMMER DEVICE (which I have 0 experience working with) which is often seen as something/a device that is needed in order to load/onboard executable .hex files onto  the atmega32p chip - which is true - and 100% rightfully so. 
Because an Arduino contains iscp pins and an atmega32p chip… it is easy/ should be easy to presume/assume that an Arduino is pragmatically a PROGRAMMER within in itself, given the clues… it is very much like /similar to the USBBasp  board…

The provided Makefile is configured for the Arduino Microcontroller and 
there is also a simple program written in C that will blink an LED connected to the conventional pin13 - pin.-

The Arduino must be connected and its port name can be identified with the Arduino IDE when looking at the connect devices port in the IDE menu.

On a linux / Unix based system - the port name can be further confirmed in the /dev folder.
