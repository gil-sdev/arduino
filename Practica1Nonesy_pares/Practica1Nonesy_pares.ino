int ledPin1=1;
int ledPin3=3;
int ledPin5=5;
int ledPin7=7;


void setup() 
{
 pinMode(ledPin1,OUTPUT); // designa la salida al pin
 pinMode(ledPin3,OUTPUT);
 pinMode(ledPin5,OUTPUT);
 pinMode(ledPin7,OUTPUT);

}
void Apaga()
{
  digitalWrite(ledPin1,LOW); // desactiva el led
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin7,LOW);
}

void loop() 
{
  digitalWrite(ledPin1,HIGH);//activa el led
  digitalWrite(ledPin5,HIGH);
  delay(1000); //espera de 1s
  Apaga();
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin7,HIGH);
  delay(1000);
  Apaga();
  
  // put your main code here, to run repeatedly:

}
