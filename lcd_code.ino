#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int sensor = 2;
int led = 8;

int count = 0;
int lastState = 0;

void setup() {

  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Encoder Ready");

  delay(2000);

  lcd.clear();
}

void loop() {

  int value = digitalRead(sensor);

  // New object detected
  if(value == 1 && lastState == 0) {

    count++;

    digitalWrite(led, HIGH);

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("COUNT:");

    lcd.setCursor(7,0);
    lcd.print(count);

    delay(200);
  }

  else {

    digitalWrite(led, LOW);
  }

  lastState = value;
}
