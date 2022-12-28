#define trig 6
#define echo 7

long duration, distance; 

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW); //Clear the trig pin
  delayMicroseconds(10);
  digitalWrite(trig, HIGH); //High trig pin for pulse generation
  delayMicroseconds(10);
  duration = pulseIn(echo, HIGH); //using pulsein function(set echo pin to High) to receive the duration of the signal(back and forth)
  distance=duration*(0.034/2); 
  Serial.println("Distance = ");
  Serial.print(distance, "cm");
}
