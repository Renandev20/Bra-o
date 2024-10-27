// C++ code
//
#include <Servo.h>

int POTENCIOMETRO0 = 0;

int ANGULO0 = 0;

int POTENCIOMETRO1 = 0;

int POTENCIOMETRO2 = 0;

int ANGULO1 = 0;

int ANGULO2 = 0;

Servo servo_2;

Servo servo_3;

Servo servo_4;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  servo_2.attach(2, 500, 2500);
  servo_3.attach(3, 500, 2500);
  servo_4.attach(4, 500, 2500);
}

void loop()
{
  POTENCIOMETRO0 = analogRead(A0);
  POTENCIOMETRO1 = analogRead(A1);
  POTENCIOMETRO2 = analogRead(A2);
  ANGULO0 = (POTENCIOMETRO0 * 0.1759);
  ANGULO1 = (POTENCIOMETRO1 * 0.1759);
  ANGULO2 = (POTENCIOMETRO2 * 0.1759);
  servo_2.write(ANGULO0);
  servo_3.write(ANGULO1);
  servo_4.write(ANGULO2);
  delay(200); // Wait for 200 millisecond(s)
}