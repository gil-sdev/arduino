int ledPin7=2;
int ledPin5=4;
int ledPin13=8;

int inPin1=1;//vcc
 int Valor=0;// valor del pulsador

void setup() 
{
  
 pinMode(ledPin7,OUTPUT); // designa la salida al pin
 pinMode(ledPin5,OUTPUT);

 pinMode(inPin1,INPUT);//DESIGNA ENTRADA DEL VCC
 
}

void Apaga()
{
  digitalWrite(ledPin7,LOW); 
  digitalWrite(ledPin5,LOW);
}

void loop() 
{
Valor=digitalRead(inPin1);
     if (Valor ==HIGH)
     {
       digitalWrite(ledPin7,HIGH); 
       delay(5000);
        Apaga();
     }
     else
     {
          digitalWrite(ledPin5,HIGH); 
          delay(5000);
          Apaga();
     }
  // put your main code here, to run repeatedly:
}
