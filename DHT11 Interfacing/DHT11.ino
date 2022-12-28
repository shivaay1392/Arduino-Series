#include<dht.h> //Import the dht libary 

//Steps to import:- Tools -> Manage Libraries -> Type DHT11 -> Click Install 

dht DHT; //Create and instance name DHT for class dht

#define dht_pin 12 // connect sensor o/p pin to pin 12 of Arduino

void setup()
{
  Serial.begin(9600);
  pinMode(dht_pin, INPUT); //To take the readings from the sensor 
}

void loop()
{
  float status1 = DHT.read11(dht_pin); //To monitor the readings sensed by the DHT11 sensor 
  Serial.println("Temprature = ");
  Serial.print(DHT.temperature); //To print the monitored readings of temprature 
  Serial.println("Humidity = ");
  Serial.print(DHT.humidity); //To print the monitored readings of Huumidity 

}
