#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define CONTRAST 75

void setup() {
  analogWrite(6, CONTRAST);
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Hello");
  lcd.setCursor(0,1);
  lcd.print("World!");
  delay(10000);
}
