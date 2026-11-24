#include <Adafruit_CircuitPlayground.h>

int prochainPixel = 0;
bool gaucheAvant = false;

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(100);
}

void loop() {
  bool gauche = CircuitPlayground.leftButton();


  if (gauche && !gaucheAvant && prochainPixel < 10) {
    CircuitPlayground.setPixelColor(prochainPixel, CircuitPlayground.colorWheel(prochainPixel * 25));
    prochainPixel++;
  }

  gaucheAvant = gauche;
  delay(20);
}
     

  


