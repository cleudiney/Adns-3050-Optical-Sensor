#include "ADNS3050.h"
#include <SPI.h>


void setup(){
  startup();

}

void loop() {
getXY();//Get X and Y accerlation
delay(100);
}
