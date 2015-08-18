
const int ledPin1 =  6; /*checked and works*/
const int ledPin2 =  5; /*checked and works*/
const int ledPin3 =  7; /*checked and works*/
const int ledPin4 =  8;
const int all_pins[] = {ledPin1, ledPin2, ledPin3, ledPin4};

const long interval1 = 2000;           // interval at which to blink (milliseconds)
const long interval2 = 5000;           // interval at which to blink (milliseconds)
const long interval3 = 9000;           // interval at which to blink (milliseconds)
const long interval4 = 12000;           // interval at which to blink (milliseconds)


void setup() {

  for  (int pin = 0; pin < 4; pin++) {
    pinMode(all_pins[pin], OUTPUT);
  }


}

void flicker(int pins[]) {
    for  (int pin = 0; pin < sizeof(pins); pin++) {
        analogWrite(pins[pin], random(200) + 55);
        delay(random(20));
    }
}

void loop() {
  
  unsigned long loopEndTime = millis(); // used to calculate how long sequence
                                        // has been running. Always less than
                                        // startTime.
  
  unsigned long startTime = millis();
  if (startTime - loopEndTime <= interval1) {
    // flicker first led
    analogWrite(ledPin1, random(200) + 55);
    delay(random(20));
  }
  else if (startTime - loopEndTime <= interval2) {
    // flicker 2nd led
    analogWrite(ledPin1, random(200) + 55);
    analogWrite(ledPin2, random(200) + 55);
    delay(random(20));
  }
  else if (startTime - loopEndTime <= interval3) {
    // flicker 3rd led
    analogWrite(ledPin1, random(200) + 55);
    analogWrite(ledPin2, random(200) + 55);
    analogWrite(ledPin3, random(200) + 55);
    delay(random(20));
  }

  else if (startTime - loopEndTime <= interval4) {
    // turn on all leds
    for  (int pin = 0; pin < 4; pin++) {
      digitalWrite(all_pins[pin], HIGH);
    }
    delay(5);

    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
      for  (int pin = 0; pin < 4; pin++) {
        analogWrite(all_pins[pin], fadeValue);
      }
      delay (10);

    }
  }

  else if (startTime - loopEndTime > interval4) {
    for  (int pin = 0; pin < 4; pin++) {
      digitalWrite (all_pins[pin], LOW);
    }
    delay ((random(5, 10) * 1000));
    loopEndTime = millis();
  }
}
