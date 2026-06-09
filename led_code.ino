int sensor = 3;
int led = 8;

void setup() {

  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int value = digitalRead(sensor);

  Serial.println(value);

  if(value == 1) {

    digitalWrite(led, HIGH);
  }

  else {

    digitalWrite(led, LOW);
  }
}
