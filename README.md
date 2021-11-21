# T5_V213_Box
LilyGO TTGO T5 V2.3 ESP32 - 2.13 inch E-paper BOX Test

 Size:
 - Width : 122 pixels
 - Height : 250 pixels

Inspired on : 
- GxEPD_MinimumExample by Jean-Marc Zingg

2 procedures run in a loop:
- drawBitMap()<br>
         - LilyGO included : BitmapExample1
- drawBoxTest()<br>
         - Fill display with growing & shrinking square boxes


### Arduino Setup:
- add Arduino -> Preferences -> Additional Board Manager URL:<br>
  https://dl.espressif.com/dl/package_esp32_index.json <br>
- Board Manager:<br>
  search for esp32 Espressif Systems<br>
  -> Install
- Select the correct board<br>
  -> Tools -> Boards -> ESP32 Boards -> ESP32 Dev Module
   
### LIBs:
- https://github.com/lewisxhe/GxEPD via Arduino -> Sketch -> Include Library -> Add .ZIP Library<br>
  Do _NOT_ install GxEPD via Arduino Library Manager !!
- Adafruit GFX Library : install via Arduino Library Manager
  https://github.com/adafruit/Adafruit-GFX-Library
  

### Shopping list:
Part|Price|Qtd.|Url
---|---|---|---
LilyGO TTGO T5 V2.3 ESP32 |€ 17.5|1|https://www.tinytronics.nl/shop/nl/development-boards/microcontroller-boards/met-wi-fi/lilygo-ttgo-t5-v2.3-esp32-met-2.13-inch-e-paper-e-ink
