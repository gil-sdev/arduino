int ledPin5 = 5;
int ledPin7 = 7;

int inPinl = 1;

int valuel = 0;

void setup() {
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(inPinl, INPUT);
}

void Apaga() 
{
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin7, LOW);

}
void loop() 
{
  valuel=digitalRead(inPinl);
 if ( valuel== 1)
 {     
      digitalWrite(ledPin5, HIGH);
      delay(5000);
      Apaga();
 }
 else
 {
  digitalWrite(ledPin7, HIGH);
  delay(5000);
  Apaga();
   }
}
