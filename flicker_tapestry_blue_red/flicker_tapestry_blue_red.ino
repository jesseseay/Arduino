// Blink without Delay

// constants won't change. Used here to set a pin number :

const int ledPin1 =  5;      
const int ledPin2 =  6; 
const int ledPin3 =  7;
const int ledPin4 =  8;


unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
const long interval1 = 2000;           // interval at which to blink (milliseconds)
const long interval2 = 5000;           // interval at which to blink (milliseconds)
const long interval3 = 9000;           // interval at which to blink (milliseconds)
const long interval4 = 15000;           // interval at which to blink (milliseconds)


void setup() {

  pinMode(ledPin1, OUTPUT);     
  pinMode(ledPin2, OUTPUT);    
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

}

void loop()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis <= interval1){
    analogWrite(ledPin1, random(200)+55);
  }

  else if (currentMillis - previousMillis <= interval2){
    analogWrite(ledPin1, random(200)+55);
    analogWrite(ledPin2, random(200)+55);
    delay(random(20));
  }
  else if (currentMillis - previousMillis <= interval3){
    analogWrite(ledPin1, random(200)+55);
    analogWrite(ledPin2, random(200)+55);
    analogWrite(ledPin3, random(200)+55);
    delay(random(20));
  }

  else if(currentMillis - previousMillis <= interval4) {

    digitalWrite (ledPin1, LOW);
    digitalWrite (ledPin2, LOW);
    digitalWrite (ledPin3, LOW);
    digitalWrite(ledPin4,HIGH);


  }
  else if (currentMillis - previousMillis > interval4){
    digitalWrite (ledPin4, LOW);
    previousMillis = currentMillis; 
    delay ((random(1, 10)*1000));

  }
}










