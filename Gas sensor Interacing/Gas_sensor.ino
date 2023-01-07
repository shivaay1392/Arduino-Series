#define gas A0
#define LED 12

void setup()
{
  pinMode(gas, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float status1 = analogRead(gas);
  if (status1<=100)
  {
    Serial.println("No smoke");
    digitalWrite(LED, LOW);
  }
  else 
  {
    Serial.println("Smoke");
    digitalWrite(LED, HIGH);
  }
}
