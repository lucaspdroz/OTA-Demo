#include "OTA.h"

void setup() {
  Serial.begin(115200);
  Serial.println("Booting");

  ArduinoOTA.setHostname("POA_LAB");
  setupOTA("POA_LAB", mySSID, myPASSWORD);
  // YOUR CODE GOES HERE

}

void loop() {
  ArduinoOTA.handle();
  //YOUR CODE GOES HERE
}