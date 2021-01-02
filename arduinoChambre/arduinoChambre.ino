#include <LiquidCrystal_I2C.h>

#define PIN_LED 13
char data2;
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);
  lcd.backlight();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    data2 = Serial.read();
  }

  if(data2=="0")
  {
    lcd.setCursor(0,0);
    lcd.print("selectionner");
    lcd.setCursor(0,1);
    lcd.print("une chambre");
    lcd.clear();
  }
   /* digitalWrite(PIN_LED, LOW);
    lcd.setCursor(0,0);
    lcd.print("selectionner");
    lcd.setCursor(0,1);
    lcd.print("une chambre");
    delay(5000);
    lcd.clear();*/
   
  
  if (data2 == '1')
  { digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("1");
    delay(5000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();

  }
  if ( data2 == '2' )
  {
    digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("2");
    delay(5000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();
  }
  if ( data2 == '3' )
  {
    digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("3");
    delay(3000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();
  }
  if ( data2 == '4' )
  {
    digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("4");
    delay(5000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();
  }

  if ( data2 == '5' )
  {
    digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("5");
    delay(5000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();
  }
  if ( data2 == '6' )
  {
    digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("6");
    delay(5000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();
  }
  if ( data2 == '7' )
  {
    digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("7");
    delay(5000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();
  }
  if ( data2 == '8' )
  {
    digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("8");
    delay(5000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();
  }
  if ( data2 == '9' )
  {
    digitalWrite(PIN_LED, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Nombre de lits:");
    lcd.setCursor(0, 1);
    lcd.print("9");
    delay(5000);
    digitalWrite(PIN_LED, LOW);
    lcd.clear();
  }


}
