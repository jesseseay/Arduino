
/*
may need to move previous millis=millis to end?
 only put it in the last if case
 or... change>= to <=
 
 */


int Led1 = 2;
int Led2 = 3;
int Led3 = 4;
int Led4 = 5;   
int Led5 = 6;
int Led6 = 7;
int Led7 = 8;
int Led8 = 9;
int Led9 = 10;
int Led10 = 11;
int Led11 = 12;
int Led12 = 13;
int Led13 = 44;
int Led14 = 45;
int Led15 = 46;

int Led16= 47;
int Led17= 48;


unsigned long previousMillis = 0;        // will store last time LED was updated

long wait1 = 100;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:

  pinMode(Led1 , OUTPUT); 
  pinMode(Led2 , OUTPUT); 
  pinMode(Led3 , OUTPUT); 
  pinMode(Led4 , OUTPUT);  
  pinMode(Led5 , OUTPUT); 
  pinMode(Led6 , OUTPUT); 
  pinMode(Led7 , OUTPUT); 
  pinMode(Led8 , OUTPUT);
  pinMode(Led9 , OUTPUT);
  pinMode(Led11 , OUTPUT); 
  pinMode(Led12 , OUTPUT); 
  pinMode(Led13 , OUTPUT); 
  pinMode(Led14 , OUTPUT); 
  pinMode(Led15 , OUTPUT); 

  pinMode(Led16, OUTPUT);
  pinMode(Led17, OUTPUT);
}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to 
  // blink the LED.

  analogWrite(Led16, random(120)+135);
  analogWrite(Led17, random(120)+135);

  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis >= wait1) {
    // save the last time you blinked the LED 
    //   previousMillis = currentMillis;   
    analogWrite(Led1, random(120)+135);

  }


  else if(currentMillis - previousMillis >= wait1 * 2) {
    // save the last time you blinked the LED 
    //    previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);

  }

  else if(currentMillis - previousMillis >=wait1 * 3) {
    // save the last time you blinked the LED 
   // previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
  }

  else if(currentMillis - previousMillis >= wait1*4) {
    // save the last time you blinked the LED 
    //   previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);

  }
  else if(currentMillis - previousMillis >= wait1*5) {
    // save the last time you blinked the LED 
    //  previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*6) {
    // save the last time you blinked the LED 
    //   previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*7) {
    // save the last time you blinked the LED 
    // previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*8) {
    // save the last time you blinked the LED 
    //   previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);

  }
  else if(currentMillis - previousMillis >= wait1*9) {
    // save the last time you blinked the LED 
    //   previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);
    analogWrite(Led9, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*10) {
    // save the last time you blinked the LED 
    //previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);
    analogWrite(Led9, random(120)+135);
    analogWrite(Led10, random(120)+135);
    analogWrite(Led11, random(120)+135);
    analogWrite(Led12, random(120)+135);
    analogWrite(Led13, random(120)+135);
    analogWrite(Led14, random(120)+135);
    analogWrite(Led15, random(120)+135);
  }

  else if(currentMillis - previousMillis >= wait1*10) {
    // save the last time you blinked the LED 
    // previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);
    analogWrite(Led9, random(120)+135);
    analogWrite(Led10, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*11) {
    // save the last time you blinked the LED 
    //  previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);
    analogWrite(Led9, random(120)+135);
    analogWrite(Led10, random(120)+135);
    analogWrite(Led11, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*12) {
    // save the last time you blinked the LED 
    //previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);
    analogWrite(Led9, random(120)+135);
    analogWrite(Led10, random(120)+135);
    analogWrite(Led11, random(120)+135);
    analogWrite(Led12, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*13) {
    // save the last time you blinked the LED 
    //  previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);
    analogWrite(Led9, random(120)+135);
    analogWrite(Led10, random(120)+135);
    analogWrite(Led11, random(120)+135);
    analogWrite(Led12, random(120)+135);
    analogWrite(Led13, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*14) {
    // save the last time you blinked the LED 
    //previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);
    analogWrite(Led9, random(120)+135);
    analogWrite(Led10, random(120)+135);
    analogWrite(Led11, random(120)+135);
    analogWrite(Led12, random(120)+135);
    analogWrite(Led13, random(120)+135);
    analogWrite(Led14, random(120)+135);
  }
  else if(currentMillis - previousMillis >= wait1*15) {
    // save the last time you blinked the LED 
  //  previousMillis = currentMillis;   

    analogWrite(Led1, random(120)+135);
    analogWrite(Led2, random(120)+135);
    analogWrite(Led3, random(120)+135);
    analogWrite(Led4, random(120)+135);
    analogWrite(Led5, random(120)+135);
    analogWrite(Led6, random(120)+135);
    analogWrite(Led7, random(120)+135);
    analogWrite(Led8, random(120)+135);
    analogWrite(Led9, random(120)+135);
    analogWrite(Led10, random(120)+135);
    analogWrite(Led11, random(120)+135);
    analogWrite(Led12, random(120)+135);
    analogWrite(Led13, random(120)+135);
    analogWrite(Led14, random(120)+135);
    analogWrite(Led15, random(120)+135);
  }
 else previousMillis = currentMillis;   
}


