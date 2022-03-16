int led[5] = {3, 5, 6, 9, 10};      // the PWM pins the LED are attached to
int x[6] = {19,22,4,7,8,11};
int brightness = 0;    // how bright the LED is
int fadeAmount = 3;    // how many points to fade the LED by
int currentLED = 0;

void setup() {
  for (int owo = 0; owo < 5; owo++)
    pinMode(led[owo], OUTPUT);
}

void loop() {
  analogWrite(led[currentLED], brightness);

  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
    if (brightness <= 0) {
      analogWrite(led[currentLED], 0);
      currentLED = currentLED + 1;
      if (currentLED > 4) currentLED = 0;
    }
  }
  delay(9);
}
