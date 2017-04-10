# Web MIDI Dash Button
## Status of the repo
almost time to release

## What is the "Web MIDI Dash" Button?
This product supports developers who implement web application with [Web MIDI API](https://www.w3.org/TR/webmidi/).  
<img src="https://raw.githubusercontent.com/ryoyakawai/webmididash/master/images/00.jpg" width="300px">


## What does the "Web MIDI Dash" Button do for developers?
The "Web MIDI Dash" button behave as HID, such as Keyboard. And when fire the button on the "Web MIDI Dash" Button, the "Web MIDI Dash" Button input the word bellow for you that is the statement of starting using Web MIDI API.
````
Navigator.requestMIDIAccess({sysex:true}).then( onMIDISuccess, onMIDIFailure );
````

## How to use the "Web MIDI Dash" Button?
Connect the button with USB(USB type C ready!). 
That is it!! Super easy isn't it.
Please note that the "Web MIDI Dash" Button behaves as "Standard 101-key or 102-key".

# How to Create the "Web MIDI Dash" Button?
## Requirements
- 3D Printer
- Filament for 3D printing  (Color: Black and Yellow is the best, but not these color is not required.)
- [Arduino Micro Pro (5V 16MHz)](https://goo.gl/apHR3n) x1
- USB Cable
- [Tact Switch(6x6x4.3, Momentary)](https://goo.gl/vy2fJm) x1
- [Swith](https://goo.gl/qqAdUp) x1

## Print enclosure
Download 3 STL files([Chassis](https://github.com/ryoyakawai/webmididash/blob/master/enclosure_stl/chassis_webmididash.stl), [Lower Enclosure](https://github.com/ryoyakawai/webmididash/blob/master/enclosure_stl/enclosure_lower_webmididash.stl), [Upper Enclosure](https://github.com/ryoyakawai/webmididash/blob/master/enclosure_stl/enclosure_upper_webmididash.stl)) in the [__enclosure_stl__](https://github.com/ryoyakawai/webmididash/tree/master/enclosure_stl) directory of this repo, and follow the instructions of your targetting 3D printer to print enclosure.

## Solder electric circuit
Solder as the figure bellow.  
[<img src="https://raw.githubusercontent.com/ryoyakawai/webmididash/master/circuit/webmididash.png" width="250px">](https://github.com/ryoyakawai/webmididash/blob/master/circuit/webmididash.png)  
__Note:__ figure in above is using Arduino Micro, but use __Arduino Pro Micro(5V)__.  

The circuit is looks like image bellow when soldering is completed.  
<img src="https://raw.githubusercontent.com/ryoyakawai/webmididash/master/images/04.jpg" width="300px">

## Cover by enclosure
Enclose chassis by other 2 pieces. >>>  
<img src="https://raw.githubusercontent.com/ryoyakawai/webmididash/master/images/03.jpg" width="250px"> <img src="https://raw.githubusercontent.com/ryoyakawai/webmididash/master/images/02.jpg" width="250px"> <img src="https://raw.githubusercontent.com/ryoyakawai/webmididash/master/images/01.jpg" width="250px">  

## Send Sketch to Arduino Micro Pro
Launch Arduino IDE. And open _Tools_>_Processor_ and select __ATmega32U4(5V, 16MHz)__. This is _extremely_ important and must be set before start sending sketch otherwise the Arduino Micro Pro will be blick. 
After set the _Tools_ menu properly, send [this Sketch](https://github.com/ryoyakawai/webmididash/blob/master/webmididash_sketch/webmididash_sketch.ino) by clicking __Uplodad button__ on Arduino IDE.

# Now you are the awesome web developer with Web MIDI API.
__Note:__ The "Web MIDI Dash" Button is providing 2 modes. One is "Web MIDI API" mode and the other is "ESC Button" mode. This is changed by dip switch on right side of the "Web MIDI Dash" Button. If your solder is as same as the section of __"Solder electric circuit"__,  "Web MIDI API" mode is the switch status in image bellow. If the switch status is changed in opposet, "ESC Button" mode will be activated.

<img src="https://raw.githubusercontent.com/ryoyakawai/webmididash/master/images/05.jpg" width="300px">
"Web MIDI API" mode is activated
