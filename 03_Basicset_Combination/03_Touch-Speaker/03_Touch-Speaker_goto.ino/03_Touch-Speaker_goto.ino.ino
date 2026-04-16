const int touchPin = 3; //3:ConnectorA 4:ConnectorB
const int spkrPin = 4; //3:ConnectorA 4:ConnectorB

#define DO 261.6

void playmusic(){
  ledcWriteTone(spkrPin, DO);
}

//void setup() {
//  Serial.begin(115200);
//  pinMode(swPin, INPUT);
//  pinMode(ledPin, OUTPUT);
//}

void setup() {
  Serial.begin(115200);
  pinMode(touchPin, INPUT);
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8); //Pin setting(Pin num, Max frequency, Resolution)
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
  if (digitalRead(touchPin) == LOW) {
    Serial.println("...");
    delay(100);
  } else {
//    digitalWrite(touchPin, HIGH); //OFF
    playmusic();
    Serial.println("Touch!");
    delay(100);
  }
}
