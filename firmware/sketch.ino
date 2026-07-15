#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);


const int WaterLevel = A0;
const int buzzer = 12;
const int red = 6;
const int green = 5;
const int blue = 3;
const int max_Thr=800;
const int min_Thr=300;

void setup() {

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Water Monitor");
  delay(2000);
  lcd.clear();
  //Defining pinMode
  pinMode(buzzer , OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(blue , OUTPUT);
  //Initialising Serial Monitor at 9600 baudrate
  Serial.begin(9600);
  
  Serial.println("Serial Monitor Begins....");
  Serial.println("GhOsT RoCks");
  Serial.println("Enter water level (0-1023):");

  
  

}

void loop() {

  int level = 0;
  level = analogRead(WaterLevel);
  Serial.println(level);
  delay(200);
  lcd.setCursor(0, 0);
  lcd.print("Level: ");
  lcd.print(level);

  lcd.setCursor(0, 1);

  if (level < min_Thr){
    
    lcd.print("LOW  ");
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(buzzer, LOW);

  }
  else if (level < max_Thr){

    lcd.print("MEDIUM  ");
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(buzzer, LOW);

  }
 else {

    lcd.print("FULL  ");
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(buzzer, HIGH);   

 }
  delay(100);


}