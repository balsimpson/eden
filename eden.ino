// libraries
#define _DEBUG_
#include <ESP8266WiFi.h>
#include <ThingerWifi.h>
// adafruit
// blynk

// thinger.io
#define USERNAME "balsimpson"
#define DEVICE_ID "DEVICE_ID"
#define DEVICE_CREDENTIAL "DEVICE_CREDENTIAL"

#define SSID "SSID"
#define SSID_PASSWORD "SSID_PASSWORD"

// millis
unsigned long previousMillis = 0;
// 5 minutes
const long interval = 300000;

// initialize thinger.io
ThingerWifi thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  Serial.begin(115200);
  unsigned long currentMillis = millis();
  // thinger.io
  thing.add_wifi(SSID, SSID_PASSWORD);
}

void loop() {
  // thinger.io
  thing.handle();
  // check & log sensor data
  sensorCheck();
  if moisture < optimum
  edenTweet();
}

void sensorCheck() {
  if (currentMillis - previousMillis >= interval) {
    // check soil moisture level
    // check light level
    sensorLog();
    previousMillis = currentMillis;
  }
}

void sensorLog() {
  log moisture level
  log light level
}

void edenTweet() {
  // tweet
  // - if thirsting
  // - when watered
}
