#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();        // Initialize LCD
  lcd.backlight();   // Turn on backlight

  lcd.setCursor(0, 0); 
  lcd.print("Hello, ECEMPIRE");

  lcd.setCursor(0, 1);
  lcd.print("Like & Share");
  delay(3000);  // Hold the intro message
  lcd.clear();
}

void loop() {
  String message = "  Subscribe to ECEMPIRE Channel  ";  
  int len = message.length();

  for (int i = 0; i < len - 15; i++) {   
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(message.substring(i, i + 16));
    delay(500); 
  }
}
