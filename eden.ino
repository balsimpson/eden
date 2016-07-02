// declare variables
// adafruit
// blynk
// thinger.io

// millis
unsigned long previousMillis = 0;
// 5 minutes
const long interval = 300000;

void setup() {
  unsigned long currentMillis = millis();
}

void draw() {
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
