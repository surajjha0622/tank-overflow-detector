const int WaterLevel = A0;
const int buzzer = 12;
const int red = A1;
const int green = A2;
const int blue = A3;
const int max_Thr=600;
const int min_Thr=300;

void setup() {
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

  int level = analogRead(WaterLevel);
  Serial.println(level);

  if (level < min_Thr){

    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(buzzer, LOW);

  }
  else if (level < max_Thr){

    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(buzzer, LOW);

  }
 else {

    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(buzzer, HIGH);   

 }
  delay(300);


}