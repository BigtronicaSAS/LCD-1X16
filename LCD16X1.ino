#include <LiquidCrystal.h>

//Crear el objeto LCD con los números correspondientes (rs, en, d4, d5, d6, d7)
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {

  lcd.begin(8, 2);
  // Print a message to the LCD.
  lcd.print("Hola");
  // Move the cursor to the beginning of the second address block
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  lcd.print("");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(5, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);
}
