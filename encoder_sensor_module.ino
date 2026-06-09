int sensor = 3; 

void setup() {

  pinMode(sensor, INPUT);

  Serial.begin(9600);
}

void loop() {

  int value = digitalRead(sensor);

  Serial.println(value);

  delay(100);
}
