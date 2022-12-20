char val;
void setup() 
{
   Serial.begin(9600); 
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(8, OUTPUT);
   val='12';
}

void loop() 
{
val=Serial.read();
switch(val)
{
  case '0':
    digitalWrite(2,LOW);
    Serial.println("LED 1 -- APAGADO");
  break; 
  case '1':
    digitalWrite(2,HIGH);
    Serial.println("LED 1 -- ENCENDIDO");
  break; 
    case '2':
    digitalWrite(4,LOW);
    Serial.println("LED 2 -- APAGADO");
  break; 
  case '3':
    digitalWrite(4,HIGH);
    Serial.println("LED 2 -- ENCENDIDO");
  break; 
    case '4':
    digitalWrite(6,LOW);
    Serial.println("LED 3 -- APAGADO");
  break; 
  case '5':
    digitalWrite(6,HIGH);
    Serial.println("LED 3 -- ENCENDIDO");
  break; 
    case '6':
    digitalWrite(8,LOW);
    Serial.println("LED 4 -- APAGADO");
  break; 
  case '7':
    digitalWrite(8,HIGH);
    Serial.println("LED 4 -- ENCENDIDO");
  break; 
}
}
