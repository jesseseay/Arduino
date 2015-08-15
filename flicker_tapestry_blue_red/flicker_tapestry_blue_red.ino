
//pin assigns are messed up. re do chip socket and only use pwm pins.


const int ledPin1 =  5;
const int ledPin2 =  5;
const int ledPin3 =  3;
const int ledPin4 =  2;


unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
const long interval1 = 2000;           // interval at which to blink (milliseconds)
const long interval2 = 5000;           // interval at which to blink (milliseconds)
const long interval3 = 9000;           // interval at which to blink (milliseconds)
const long interval4 = 12000;           // interval at which to blink (milliseconds)


void setup() {

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

}

void loop()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis <= interval1) {
    analogWrite(ledPin1, random(200) + 55);
  }

  else if (currentMillis - previousMillis <= interval2) {
    analogWrite(ledPin1, random(200) + 55);
    analogWrite(ledPin2, random(200) + 55);
    delay(random(20));
  }
  else if (currentMillis - previousMillis <= interval3) {
    analogWrite(ledPin1, random(200) + 55);
    analogWrite(ledPin2, random(200) + 55);
    analogWrite(ledPin3, random(200) + 55);
    delay(random(20));
  }

  else if (currentMillis - previousMillis <= interval4) {

    digitalWrite (ledPin1, HIGH);
    digitalWrite (ledPin2, HIGH);
    digitalWrite (ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(10);


    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
      // sets the value (range from 0 to 255):
      analogWrite(ledPin1, fadeValue);
      analogWrite(ledPin2, fadeValue);
      analogWrite(ledPin3, fadeValue);
      analogWrite(ledPin4, fadeValue+50);
      delay (20);
      // wait for 30 milliseconds to see the dimming effect
    }

  }


  else if (currentMillis - previousMillis > interval4) {
    digitalWrite (ledPin1, LOW);
    digitalWrite (ledPin2, LOW);
    digitalWrite (ledPin3, LOW);
    digitalWrite (ledPin4, LOW);
    previousMillis = currentMillis;
    delay ((random(1, 2) * 1000));

  }
}










