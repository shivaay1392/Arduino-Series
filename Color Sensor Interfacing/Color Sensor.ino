#define S0 2
#define S1 3 //S0 and S1 are used for frequency sacling 
#define S2 4
#define S3 5 //S2 and S3 are used for differentiating b/w the color frequencies 
#define color_pin 6

int color_freq=0;

void setup()
{
  Serial.begin(9600);
  for (int i=2; i<6; i++)
  {
    pinMode(i, OUTPUT); // setting the S0 to S4 pins as an output 
  }
  pinMode(color_pin, INPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW); //frquency scaling upto 20Hz
}

void loop()
{
  //setting red frequency 
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  color_freq=pulseIn(color_pin, LOW);
  Serial.println("Red = ");
  Serial.print(color_freq);
  delay(1000);
  //same for all the other colors with change in S2 and S3 
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  color_freq=pulseIn(color_pin, LOW);
  Serial.println("Blue = ");
  Serial.print(color_freq);
  delay(1000);
  
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  color_freq=pulseIn(color_pin, LOW);
  Serial.println("Clear = ");
  Serial.print(color_freq);
  delay(1000);
  
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  color_freq=pulseIn(color_pin, LOW);
  Serial.println("Green = ");
  Serial.print(color_freq);
  delay(1000);
}
