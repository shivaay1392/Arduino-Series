#include<LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);

#define trig 3
#define echo 2

long duration, distance;

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  lcd.begin(16,2);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(10);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  duration = pulseIn(echo, HIGH);
  distance = (0.034/2)*duration;
  Serial.println("Distance = ");
  Serial.print(distance, "cm");
  lcd.setCursor(0,0);
  lcd.print("Distance = ");
  lcd.setCursor(0,1);
  lcd.print(distance);
}
