#define PIR_pin 9
#define LED 12

void setup()
{
  pinMode(PIR_pin, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int status1 = digitalRead(PIR_pin); 
  Serial.print("Status = ");
  Serial.print(status1);
  if (status1==0)
  {
    digitalWrite(LED, LOW);
  }
  else 
  {
    digitalWrite(LED, HIGH);
  }
}
