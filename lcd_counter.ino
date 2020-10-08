#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int pushButton = 7;
int count = 0;

void setup(){
  lcd.begin(16,2);
  pinMode(pushButton,INPUT);
}
void loop(){
  if(digitalRead(pushButton)== HIGH)
  {
  lcd.setCursor(0,0);
  lcd.print("Button Pressed");
  lcd.setCursor(0,1);
  lcd.print(count++);
  while(digitalRead(pushButton) == HIGH);
  }
}
