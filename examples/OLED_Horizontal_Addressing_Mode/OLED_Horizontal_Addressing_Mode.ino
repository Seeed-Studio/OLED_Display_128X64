#include <Wire.h>
#include <SeeedOLED.h>


void setup() {
    Wire.begin();
    SeeedOled.init();  //initialze SEEED OLED display

    SeeedOled.clearDisplay();           //clear the screen and set start position to top left corner
    SeeedOled.setNormalDisplay();       //Set display to Normal mode
    SeeedOled.setHorizontalMode();      //Set addressing mode to Horizontal Mode
    SeeedOled.putString("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");  //Print String (ASCII 32 - 126 )

}

void loop() {

}


