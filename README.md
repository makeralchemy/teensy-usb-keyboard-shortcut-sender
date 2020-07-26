# teensy-usb-keyboard-shortcut-sender
teensy-usb-keyboard-shortcut-sender is a Teensy-based program and hardware for sending commonly used phrases to a computer.

*Note:* This README is under construction.

## How it works
The Teensy acts as a HID to the computer. The Teensy is constantly checking to see if one of the buttons have been pressed.
When a button has been pressed, the Teensy sends a pre-selected phrase to the computer. 

## Getting started
1. Get your computer (Windows, Mac, Linux) setup with the required software (see "Installing the software below"). 
2. Wire up the Teensy (photos in the wiring-diagrams folder show how - the wiring is very simple).
I recommend testing everything on a breadboard before doing any soldering and installing it in a case, so you can be sure everything is working properly.
3. Edit the "leftButtonString", "middleButtonString", and "rightButtonString" character strings in the "Teensy_Button_Test_w_Bounce.ino" program to the phrases you want 
associated with each of the buttons.
4. Load the "Teensy_Button_Test_w_Bounce.ino" program into the Arduino IDE. 
Plug the Teensy into the computer's USB port and wait for the computer to recognize it. 
Set the Port in the Arduino and Wait for the computer to recognize it. Then flash it to the Teensy. 
Instructions on how to do this step by step in the Getting Started pages on [Teensy site](https://www.pjrc.com/teensy/first_use.html)
Open the Serial Monitor and make sure when you press the buttons you see the text associated with the buttons properly displayed.
5. Repeat steps 3 and 4 with the "Teensy_USB_Button_Shortcut_Test.ino" program. 
Follow the instructions in the "Installing the Software" section to setup the Teensy as a Keyboard device.
6. Open a program like notepad and put the cursor on the top line of the open document.
7. Press the buttons and verify that the phrases associated with the buttons show up in the document.
8. If everything works as expected you can now insert those phrases into any program where the cursor is current places just like if you were typing it in manually. 
Don't forget to put a "\n" at the end of your phrases if you want a "Enter" or a "Return" pressed after the text is inserted. 

## Parts required

* [Teensy 2.0](https://www.pjrc.com/store/teensy.html)
* Three SPST momentary pushbutton switches
* 24 AWG solid core wire
* USB Mini cable *Note:* Teensy 2.0 does not use a micro USB connector
* Breadboard for prototyping
* Case for the final assembly (I used a small wood box from a local crafts store; the wood boxes can also be found on eBay)

## Assembly instructions

As shown in the "Teensy-USB-keyboard-breadboard.jpg" photo in the "wiring-diagrams" folder:
* One pin on each switch is connected to the Teensy (left switch to B0, middle switch to B1, right switch to B2)
* Each of the other pins on the switch are connected to the Teensy ground (GND) pin. 
Power for the Teensy is provided by the USB cable.

## Installing the software

Instructions for installing Teensyduino (software add-on for the Arduino software/IDE) are [here](https://www.pjrc.com/teensy/td_download.html)

Instructions for the settings for using the Teensy as a USB keyboard are [here](https://www.pjrc.com/teensy/td_keyboard.html)

Information on the Bounce library for Teensy are [here](https://www.pjrc.com/teensy/td_libs_Bounce.html)

# License

This project is licensed under the MIT license.
