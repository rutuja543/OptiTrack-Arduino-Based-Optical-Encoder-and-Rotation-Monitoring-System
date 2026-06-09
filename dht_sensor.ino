#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

int ledPin = 13;

DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(9600);

  dht.begin();

  pinMode(ledPin, OUTPUT);
}

void loop() {

  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.println(" %");

  // LED blinks if temperature is greater than 0°C
  if(temp > 0) {

    digitalWrite(ledPin, HIGH);
    delay(500);

    digitalWrite(ledPin, LOW);
    delay(500);
  }

  else {

    digitalWrite(ledPin, LOW);
  }
}
