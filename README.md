# ATTiny85_projects
Possible projects to play with ATTiny85 and porgrammer as arduino




Step 1: Making your Arduino board as ISP

We will be using the Arduino Uno as the programmer to upload code from the computer to the ATTiny85.

For that, you will need to :

1. From Tools > Board select "Arduino Uno / Mega"

2. From Tools> Port select the port number where your Arduino appears

3. Open File > Examples > ArduinoISP, and upload that code onto the Uno. The Uno will now function as a programmer and relay all the code coming from the computer to the ATTiny85.


Step 2: Adding your Board config to Arduino IDE

In Arduino 1.6.4, you can install the ATtiny support using the built-in boards manager.

1. Open the preferences dialog in the Arduino software.

2. Find the “Additional Boards Manager URLs” field near the bottom of the dialog.

3. Paste the following URL into the field (use a comma to separate it from any URLs you’ve already added):
   https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json

4. Click the OK button to save your updated preferences.

5. Open the boards manager in the Tools > Board menu.

6. You should see an ATtiny entry in the Tools > Board menu. When you select it, you should see additional Clock    and Processor sub-menus in the Tools menu. These allow you to specify your ATtiny configuration. see Fig:1


Step 3: Programming the ATTiny85

1. Check and give connections as per Fig:2. For pinouts of ATTiny85 see Fig:3

2. Next, we can use the ISP to upload a program to the ATtiny:

	Open the Blink sketch from the examples menu. Change the pin numbers from 13 to 0 (or any pin as per your wish in ATTiny85). Select “ATtiny” from the Tools > Board menu and the particular ATtiny you’re using from the Tools > Processor menu. (In Arduino 1.0.x, these options are combined in just the Tools > Board menu.)
Select the appropriate item from the Tools > Programmer menu (e.g. “Arduino as ISP” if you’re using an Arduino board as the programmer, USBtinyISP for the USBtinyISP, FabISP, or TinyProgrammer, etc).
Upload the sketch.

	You should see “Done uploading.” in the Arduino software and no error messages. If you then connect an LED between pin 0 and ground, you should see it blink on and off. Note that you may need to disconnect the LED before uploading a new program.
	
	
	
	For images refer issues with this project  (present at right hand side top of the page)
