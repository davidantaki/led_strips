#include <Arduino.h>

#include "FastLED.h"

#define NUM_LEDS 625
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS);
  pinMode(LED_BUILTIN, OUTPUT);
  // for(int i = 0; i < NUM_LEDS; i++){
  //   leds[i] = CRGB::Black; FastLED.show();
  //   // leds[i] = CRGB::Black; FastLED.show(); delay(1);
  // }
  for(int i = 0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Orange; FastLED.show();
    // leds[i] = CRGB::Black; FastLED.show(); delay(1);
  }
}
void loop() {



  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(1000);
  // digitalWrite(LED_BUILTIN, LOW);
  // delay(1000);
}