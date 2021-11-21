// LilyGO TTGO T5 V2.3 ESP32 - 2.13 inch E-paper BOX Test
// Size:
//   Width : 122 pixels
//   Height : 250 pixels
// Inspired on : 
//   GxEPD_MinimumExample by Jean-Marc Zingg
//
// 2 procedures run in a loop:
//     1/  drawBitMap();
//         - LilyGO included : BitmapExample1
//         //- LilyGO included : logo
//     2/  drawBoxTest(); 
//         - Fill display with growing & shrinking square boxes
//

#define LILYGO_T5_V213
#include <boards.h>        // from https://github.com/lewisxhe/GxEPD via Arduino -> Sketch -> Include Library -> Add .ZIP Library
#include <GxEPD.h>



// select the display class to use, only one, copy from GxEPD_Example
//#include <GxDEPG0213BN/GxDEPG0213BN.h>
//#include <GxGDEH0213B72/GxGDEH0213B72.h>  // 2.13" b/w  old panel , form GoodDisplay
#include <GxGDEH0213B73/GxGDEH0213B73.h>  // 2.13" b/w  old panel , form GoodDisplay
//#include <GxGDEM0213B74/GxGDEM0213B74.h>  // 2.13" b/w  form GoodDisplay 4-color
//#include <GxGDEW0213M21/GxGDEW0213M21.h>  // 2.13"  b/w Ultra wide temperature , form GoodDisplay
//#include <GxDEPG0213BN/GxDEPG0213BN.h>    // 2.13" b/w  form DKE GROUP



#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

// constructor for AVR Arduino, copy from GxEPD_Example else
GxIO_Class io(SPI,  EPD_CS, EPD_DC,  EPD_RSET);
GxEPD_Class display(io, EPD_RSET, EPD_BUSY);

uint16_t delta = 20;

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void drawBoxTest()
{
    Serial.println("- drawBoxTest");
    display.setRotation(1);

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      //display.update();
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      //display.update();
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      //display.update();
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      //display.update();
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      //display.update();
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      //display.update();
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      //display.update();
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      display.fillRect(40,40, display.width()-80, display.height()-80, GxEPD_BLACK);
      //display.update();
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      display.fillRect(40,40, display.width()-80, display.height()-80, GxEPD_BLACK);
      display.fillRect(45,45, display.width()-90, display.height()-90, GxEPD_WHITE);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      display.fillRect(40,40, display.width()-80, display.height()-80, GxEPD_BLACK);
      display.fillRect(45,45, display.width()-90, display.height()-90, GxEPD_WHITE);
      display.fillRect(50,50, display.width()-100, display.height()-100, GxEPD_BLACK);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      display.fillRect(40,40, display.width()-80, display.height()-80, GxEPD_BLACK);
      display.fillRect(45,45, display.width()-90, display.height()-90, GxEPD_WHITE);
      display.fillRect(50,50, display.width()-100, display.height()-100, GxEPD_BLACK);
      display.fillRect(55,55, display.width()-110, display.height()-110, GxEPD_WHITE);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta*4);
    }

    //--------------------------------------------------------------------------------

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      display.fillRect(40,40, display.width()-80, display.height()-80, GxEPD_BLACK);
      display.fillRect(45,45, display.width()-90, display.height()-90, GxEPD_WHITE);
      display.fillRect(50,50, display.width()-100, display.height()-100, GxEPD_BLACK);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      display.fillRect(40,40, display.width()-80, display.height()-80, GxEPD_BLACK);
      display.fillRect(45,45, display.width()-90, display.height()-90, GxEPD_WHITE);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      display.fillRect(40,40, display.width()-80, display.height()-80, GxEPD_BLACK);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }

    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.fillRect(35,35, display.width()-70, display.height()-70, GxEPD_WHITE);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.fillRect(30,30, display.width()-60, display.height()-60, GxEPD_BLACK);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.fillRect(25,25, display.width()-50, display.height()-50, GxEPD_WHITE);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.fillRect(20,20, display.width()-40, display.height()-40, GxEPD_BLACK);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.fillRect(15,15, display.width()-30, display.height()-30, GxEPD_WHITE);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.fillRect(10,10, display.width()-20, display.height()-20, GxEPD_BLACK);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.fillRect(5, 5, display.width()-10, display.height()-10, GxEPD_WHITE);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
    for (uint16_t r = 0; r < 1; r++) {
      display.fillRect(0, 0, display.width(), display.height(), GxEPD_BLACK);
      display.updateWindow(0,0,display.width(), display.height());
      delay(delta);
    }
}

//-----------------------------------------------------------------------------
void cleanDisplay() {
  for (uint16_t r = 0; r < 4; r++) {
    display.fillScreen(GxEPD_WHITE);
    display.updateWindow(0,0,display.width(), display.height());
    delay(500);
  }
}


//-----------------------------------------------------------------------------
#include GxEPD_BitmapExamples

void drawBitMap() {
  display.setRotation(0);
  cleanDisplay();
  display.drawExampleBitmap(BitmapExample1, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
  display.updateWindow(0,0,display.width(), display.height());
  delay(1000);
  //cleanDisplay();
  //display.drawExampleBitmap(logo, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
  //display.updateWindow(0,0,display.width(), display.height());
  //delay(1000);
}



//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.println("setup");
  SPI.begin(EPD_SCLK, EPD_MISO, EPD_MOSI);

  display.init();
  display.eraseDisplay();

  Serial.print("width: ");
  Serial.println(display.width());
  Serial.print("height: ");
  Serial.println(display.height());
  
}



//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void loop() 
{
      cleanDisplay();
      drawBitMap();
      cleanDisplay();
      drawBoxTest();
}
//-----------------------------------------------------------------------------
