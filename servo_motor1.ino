// C++ code
//
#include<Servo.h>
int motPin=12;
int sensorPin=A0;
Servo myServo;
void setup()
{Serial.begin(9600);
 myServo.attach(motPin);
  pinMode(motPin,OUTPUT);
}

void loop()
{
  int sensorValue=analogRead(sensorPin);
  //Serial.println(sensorValue);
  int angle=map(sensorValue,33,6,0,180);
  myServo.write(angle);
  Serial.println(angle);
  delay(100);
 
}