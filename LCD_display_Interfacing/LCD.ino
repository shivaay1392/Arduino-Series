#include <LiquidCrystal.h> //Import the Library LiquidCrystal in order to use the LCD Display

//Steps to Import:-  Tools -> Manage libraries -> Type LiquidCrystal -> Click Install 

LiquidCrystal lcd(8,9,4,5,6,7); //(rs,en,d4 to d7) // Creating an instance name lcd of Class LiquidCrystal

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2); //For setting the no of columns and rows of the LCD Display
}

void loop()
{
  Serial.println("Hello World!");
  lcd.setCursor(0,0); //Setting the position of cursor in LCD //top left 
  lcd.print("Hello World!");
  lcd.setCursor(0,1); //bottom left
  lcd.print("Username");
}
