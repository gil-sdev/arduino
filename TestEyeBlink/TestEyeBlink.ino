/*
  blink detector
  darcy@inventorArtist.com
  http://inventorartist.com/blink-detector/ 

  uses LED to detect blinking
  just looks for rising edges
  

*/
int outBuzzer = 7;
int bibrador = 5;
int sensorPin  = A0;        // IR Sensor
int ledPin = 13;           // Visualization
int lastLevel = 0;         // Previous IR level
int lastChange = 0;        // Change in IR level
int changeThreshold = 5;  // How hard a rising edge do we need?
int i=0;

//visualization
int duration = 200;        // Length of visualization
float lastStart = 0;       // Last start of visualization
int blink1=0;
int blink2=0;
int blink3=0;
int blink4=0;


void setup() {
  Serial.begin(9600);      // Debug constructor
  pinMode(13, OUTPUT);     // Visualizatio constructor
    pinMode(outBuzzer, OUTPUT);
  pinMode(bibrador, OUTPUT);
}
 
void loop() {
  int sensorValue = analogRead(sensorPin);
  // look for rising edges
  lastChange = sensorValue - lastLevel;
  lastLevel = sensorValue;
  if (lastChange >=changeThreshold) {
    Serial.println(sensorValue);  // Read Data
    digitalWrite(ledPin, HIGH);
    lastStart = millis();
  }
  if (millis() >= lastStart + duration) {
    Serial.println(sensorValue);  // Read Data
     digitalWrite(ledPin, LOW);
     if (blink1==blink2 && blink2==blink3&&blink3==blink4)encenderAlarma();
  } 
  //absolute approach
//  if (sensorValue >=205) {
  //  digitalWrite(13, HIGH);
 // }else{
  //  digitalWrite(13, LOW);
 // }
//delay(100);
}
void encenderAlarma()
{
  Serial.write("Alarma");

  for (i=0;i<7;i++)// senal buzzer
  {
    digitalWrite(bibrador, LOW);
     digitalWrite(outBuzzer,LOW);
    delay(500);
    digitalWrite(bibrador, HIGH);
      digitalWrite(outBuzzer,HIGH);
    delay(1000);
  }
}
  void apagaAlarma()
{
  digitalWrite(outBuzzer, LOW);
  digitalWrite(bibrador, LOW);
}
