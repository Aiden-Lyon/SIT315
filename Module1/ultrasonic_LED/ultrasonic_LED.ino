#include <HCSR04.h>
#define LED 12

HCSR04 hc(9,10); //init (trig pin, echo pin)
float dist;

void setup() {
Serial.begin(9600);
pinMode(LED, OUTPUT); 
}

void loop() {
  dist = hc.dist();
  Serial.println(dist);

  if (dist <= 20)
  {
    digitalWrite(LED, HIGH);
    Serial.println("Too close!"); 
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  
  delay(100);
}
