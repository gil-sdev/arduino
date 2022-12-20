int ledPin1 = 1;
int ledPin3 = 3;
int ledPin5 = 5;
int ledPin7 = 7;

int inPin1 = 9;
int value1=0;

void setup() 
{
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin5,OUTPUT);
  pinMode(ledPin7,OUTPUT);
  
    pinMode(inPin1,INPUT);
}

void Apaga()
{
 digitalWrite(ledPin1,LOW);
 digitalWrite(ledPin3,LOW);
 digitalWrite(ledPin5,LOW);
 digitalWrite(ledPin7,LOW);
}


void loop() 
{
 value1=digitalRead(inPin1);
 
 if (value1==1)
 {
 digitalWrite(ledPin1,HIGH);
 digitalWrite(ledPin3,HIGH);
 delay(1000);
 Apaga();
 }
 else
 {
    digitalWrite(ledPin5,HIGH);
 digitalWrite(ledPin7,HIGH);
  delay(1000);
 Apaga();
 }
}
