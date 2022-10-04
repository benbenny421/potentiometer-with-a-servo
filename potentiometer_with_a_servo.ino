#include <Servo.h>

int potpin = A3;
int potval = 0;

int servoval = 0;

Servo servo;


void setup()
{
  pinMode(potpin, INPUT);
  servo.attach(13);
  Serial.begin(9600);
}

// Main program
void loop()
{
/*  potval = analogRead(potpin);
  Serial.println(potval);
  servoval = potval;
servo.write(servoval);
*/
    servoval = analogRead(potpin);            
  servoval = map(servoval, 0, 1023, 0, 180); 
  servo.write(servoval); 
  delay(15);  
}
