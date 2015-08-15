// LED Fire Effect

int RedPin1 = 2;
int RedPin2 = 1;
int RedPin3 = 0;
int Blue = 3;
int Noise = 4;

void setup()
{
pinMode(RedPin1, OUTPUT);
pinMode(RedPin2, OUTPUT);
pinMode(RedPin3, OUTPUT);
pinMode(Blue, OUTPUT);
//pinMode(Noise, INPUT);
}

void loop() {
//int sensor = analogRead(Noise);
//delay(random(100)*Noise);
delay(5000);

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

/*
analogWrite(ledPin1, random(120)+135);
analogWrite(ledPin2, random(120)+135);
analogWrite(ledPin3, random(120)+135);
delay(random(100));
*/
}

