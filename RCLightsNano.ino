/*
RC Lights v1
Arduino Nano
9. sept 2020
www.hoftun.net
*/

int headlights = 2; // this vill need a PWM output to shange between low/high beam
int indicatorLeft = 3;
int indicatorRight = 4;
int rearLights = 5;
int brakeLights = 6; //PWM output. low as rearlights, high when braking
int reverseLights = 7;
int floodLights = 8;

// setting up for blinking
unsigned long previousMillis = 0;

void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  // put your main code here, to run repeatedly:
}
