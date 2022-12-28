#define IR 13
#define LED 12

void setup()
{
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int status1 = digitalRead(IR);
  if (status1 == 1)
  {
    Serial.println("Interrupt");
    digitalWrite(LED, HIGH);
  }
  else 
  {
    Serial.println("No Interrupt");
    digitalWrite(LED, LOW);
  }
}
