// LED Fire Effect

int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int ledPin4 = 5;
int Noise = 6;

void setup()
{
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
//pinMode(Noise, INPUT);
}

void loop() {
//int sensor = analogRead(Noise);
//delay(random(100)*Noise);

/*
digitalWrite(RedPin1, HIGH);
delay(2000);
digitalWrite(RedPin2, HIGH);
delay(1000);
digitalWrite(RedPin3, HIGH);
delay(1000);

digitalWrite(Blue, HIGH);
digitalWrite(RedPin1, LOW);
digitalWrite(RedPin2, LOW);
digitalWrite(RedPin3, LOW);
delay(2000);
digitalWrite(Blue, LOW);
*/

analogWrite(ledPin1, random(120)+135);
analogWrite(ledPin2, random(120)+135);
analogWrite(ledPin3, random(120)+135);
delay(5);

}

