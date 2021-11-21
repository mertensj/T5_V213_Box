# T5_V213_Box
LilyGO TTGO T5 V2.3 ESP32 - 2.13 inch E-paper BOX Test

 Display Size:
 - Width : 122 pixels
 - Height : 250 pixels

Inspired on: 
- GxEPD_MinimumExample by Jean-Marc Zingg

2 procedures run in a loop:
- drawBitMap()<br>
         - LilyGO included BitmapExample1
- drawBoxTest()<br>
         - Fill display with growing & shrinking square boxes


### Arduino Setup:
- Install the correct serial port driver CP210X Driver
  https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
- Add espressif URL in Arduino IDE , Preferences -> Additional Board Manager URL:<br>
  https://dl.espressif.com/dl/package_esp32_index.json <br>
- Arduino IDE -> Tools -> Boards -> Board Manager:<br>
  search for esp32 Espressif Systems<br>
  -> Install
- Select the correct board<br>
  Arduino IDE -> Tools -> Boards -> ESP32 Boards -> ESP32 Dev Module
- Select Port , eg:
  Tools -> Port -> COM3
  
### LIBs:
- GitHub https://github.com/lewisxhe/GxEPD -> download ZIP -> GxEPD-master.ZIP
  Arduino IDE -> Sketch -> Include Library -> Add .ZIP Library<br>
  Do _NOT_ install GxEPD via Arduino Library Manager !!
- Adafruit GFX Library : install via Arduino Library Manager<br>
  https://github.com/adafruit/Adafruit-GFX-Library
- GitHub https://github.com/bxparks/AceButton -> download ZIP<br>
  Arduino IDE -> Sketch -> Include Library -> Add .ZIP Library<br>
  #include <AceButton.h>

### Shopping list:
Part|Price|Qtd.|Url
---|---|---|---
LilyGO TTGO T5 V2.3 ESP32 |€ 17.5|1|https://www.tinytronics.nl/shop/nl/development-boards/microcontroller-boards/met-wi-fi/lilygo-ttgo-t5-v2.3-esp32-met-2.13-inch-e-paper-e-ink
