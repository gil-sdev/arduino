#include <IRremote.h>

int RECV_PIN=11;
IRrecv irrecv(RECV_PIN);
decode_results results;



void setup() 
{
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  irrecv.enacleIRin();
  }

void loop() 
{
if(irrecv.decode(&results))

{
  Serial.println(results.value,DEC);
  irrecv.resume();
 }

}
