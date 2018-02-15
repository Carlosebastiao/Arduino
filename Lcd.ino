#include <LiquidCrystal.h>
#include <max6675.h>
LiquidCrystal lcd(12,11, 5, 4, 3, 2);
int ktcSO = 8;
int ktcCS = 9;
int ktcCLK = 10;

MAX6675 ktc(ktcCLK, ktcCS, ktcSO);

  
void setup() {
 lcd.begin(16, 2);
 lcd.clear(); 
 lcd.setCursor(0,0);
 lcd.print("T1: ");
}
void loop() {
  // basic readout test
  // give the MAX a little time to settle
 lcd.setCursor(3,0); 
 lcd.print(ktc.readCelsius());
 delay(1000);
}
