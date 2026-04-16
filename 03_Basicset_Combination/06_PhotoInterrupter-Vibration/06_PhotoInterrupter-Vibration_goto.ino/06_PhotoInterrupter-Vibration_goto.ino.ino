const int ruptPin = 3; //3:ConnectorA 4:ConnectorB
const int vibPin = 4; //3:ConnectorA 4:ConnectorB


//void setup() {
//  Serial.begin(115200);
//  pinMode(swPin, INPUT);
//  pinMode(ledPin, OUTPUT);
//}

int interruptCount = 0;

void setup(){
  pinMode(ruptPin, INPUT);
  Serial.begin(115200);
  pinMode(vibPin, OUTPUT);
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

void loop(){
//Look at the serial monitor
  if (digitalRead(ruptPin)==LOW) {
    interruptCount++;
    Serial.println("Interrupt!");
    delay(300);
  }
  if (interruptCount >= 5) {
    digitalWrite(vibPin, HIGH);
    delay(300);
    digitalWrite(vibPin, LOW);
    interruptCount = 0;
    Serial.println("5 items comming!");
  }
  delay(500);
}
