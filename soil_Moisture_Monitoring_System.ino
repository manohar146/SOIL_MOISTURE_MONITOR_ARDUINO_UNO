#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SOIL_SENSOR A0
#define RED_LED 2
#define BLUE_LED 3
#define GREEN_LED 4
#define BUZZER 5

LiquidCrystal_I2C lcd(0x27, 16, 2); // Use 0x3F if 0x27 doesn't work

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture:");
}

void loop() {
  int sensorValue = analogRead(SOIL_SENSOR);
  int moisturePercent = map(sensorValue, 1023, 0, 0, 100); // Dry = 1023, Wet = 0

  Serial.print("Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  lcd.setCursor(0, 1);
  lcd.print("Level: ");
  lcd.print(moisturePercent);
  lcd.print("%    ");

  // Turn off all LEDs and buzzer
  digitalWrite(RED_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(BUZZER, LOW);

  if (moisturePercent < 30) {
    // LOW moisture — no buzzer
    digitalWrite(RED_LED, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Status: LOW     ");
    delay(1000);  // Delay to match other states
  }
  else if (moisturePercent >= 30 && moisturePercent <= 60) {
    // MODERATE moisture — beep once
    digitalWrite(BLUE_LED, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Status: MODERATE");
    shortBeep();
    delay(1000);
  }
  else {
    // HIGH moisture — beep once
    digitalWrite(GREEN_LED, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Status: HIGH    ");
    shortBeep();
    delay(1000);
  }
}

// Short beep for MODERATE and HIGH
void shortBeep() {
  digitalWrite(BUZZER, HIGH);
  delay(200);
  digitalWrite(BUZZER, LOW);
}
