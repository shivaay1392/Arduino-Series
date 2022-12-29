#define Soil_pin A0
#define LED 12

void setup()
{
  Serial.begin(9600);
  pinMode(Soil_pin, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  float s1 = analogRead(Soil_pin);
  Serial.println("Readings = ");
  Serial.println(s1);
  if (s1<=100)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
