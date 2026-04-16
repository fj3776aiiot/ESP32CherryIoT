const int swPin = 3; //3:ConnectorA 4:ConnectorB
const int motorPin = 4; //3:ConnectorA 4:ConnectorB



//void setup() {
//  Serial.begin(115200);
//  pinMode(swPin, INPUT);
//  pinMode(ledPin, OUTPUT);
//}

void setup() {
  Serial.begin(115200);
  pinMode(swPin, INPUT);
  pinMode(motorPin, OUTPUT);
}


//void loop() { 
//  if (digitalRead(swPin) == HIGH) {
//    digitalWrite(ledPin, HIGH); //ON
//    Serial.println("Pushed");
//    delay(100);
//  } else {
//    digitalWrite(ledPin, LOW); //OFF
//    Serial.println("Not Pushed");
//    delay(100);
//  }
//}

void loop() { 
  if (digitalRead(swPin) == HIGH) {
    digitalWrite(motorPin, HIGH); //ON
    delay(1000);
    Serial.println("Pushed");
    delay(100);
  } else {
    digitalWrite(motorPin, LOW); //OFF
    Serial.println("Not Pushed");
    delay(100);
  }
}
