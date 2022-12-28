#define LDR A0 // Connect LDR to analog pin of Arduino 
#define LED 13

void setup()
{
  pinMode(LDR, INPUT); //setting LDR to input mode 
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int status1 = analogRead(LDR); // using analogread to receive the data sensed by the LDR
  if (status1 <= 100)
  {
    Serial.println("Dark outside"); 
    digitalWrite(LED, HIGH);
    delay(1000);
  }
  else 
  {
    Serial.println("Light outside"); // Light fall on LDR -> Decrease it's resistance  ->  Led to increase in Voltage readings 
    digitalWrite(LED, LOW);
    delay(1000);
  }
}
