#include <Adafruit_CircuitPlayground.h>
#include <Arduino.h>

void setup() {
  // Initialize the Circuit Playground
  CircuitPlayground.begin();
  
  // Play the startup sound
  playStartupSound();
}

void loop() {
  // Do nothing in the loop
}

void playStartupSound() {
  // Play the startup sound file
  CircuitPlayground.playFile("startup.wav");
}
