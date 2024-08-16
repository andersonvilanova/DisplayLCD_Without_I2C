// Include the library code. If you to have any error, check if the "LiquidCrystal by Arduino, Adafruit" library is installed:
#include <LiquidCrystal.h>

// Arduino Pinout Settings
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);  //Display LCD (RS, EN, D4, D5, D6, D7)

void setup() {
  lcd.begin(16, 2); //Here we will define the size of LCD display. Set number columns and rows of your display, in the same order.
  lcd.clear(); // Clear any information on display
}

void loop() {
  lcd.setCursor(0, 0); // Defines in which column and row the text should start.
  lcd.print("Estanho & Solda"); // Text to be displayed
  lcd.setCursor(0, 1); // Defines in which column and row the text should start.
  lcd.print("  Display  LCD"); // text to be displayed
  delay(5000);
  lcd.clear(); // Clear all display information
  lcd.setCursor(0, 0); // Defines in which column and row the text should start.
  lcd.print("YouTube  Channel"); // New text inserted
  lcd.setCursor(0, 1); // Defines in which column and row the text should start.
  lcd.print(" @estanhoesolda"); // New text inserted
  delay(5000);
  lcd.clear();
}
