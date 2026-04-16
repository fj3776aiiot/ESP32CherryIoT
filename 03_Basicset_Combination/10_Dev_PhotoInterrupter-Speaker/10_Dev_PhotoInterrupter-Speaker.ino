const int ruptPin = 3; //3:ConnectorA 4:ConnectorB
const int spkrPin = 4; //3:ConnectorA 4:ConnectorB

// 音域の設定
#define DO 261.6
#define _DO 277.18
#define RE 293.665
#define _RE 311.127
#define MI 329.63
#define FA 349.228
#define _FA 369.994
#define SO 391.995
#define _SO 415.305
#define RA 440
#define _RA 466.164
#define TI 493.883
#define octDO 523.251
#define HI_RE 587.3
#define HI_MI 659.3

// 音源の設定
void playmusic(){
  ledcWriteTone(spkrPin, HI_MI);
  delay(1400);
  ledcWriteTone(spkrPin, octDO );
  delay(1800);
  ledcWriteTone(spkrPin, 0); // no sound
  delay(250);
}

// 初期の設定
void setup() {
  pinMode(ruptPin, INPUT);
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8); //Pin setting(Pin num, Max frequency, Resolution)
  Serial.begin(115200);
}

// 非接触の検出とその出力
void loop() {
  if (digitalRead(ruptPin) == LOW) {
    playmusic();
    Serial.println("来客です!");
    delay(300);

// 時刻（経過時間）の計算
    unsigned long allSeconds = millis() / 1000;
    int minutes = allSeconds / 60;
    int seconds = allSeconds % 60;

    Serial.print("(起動から ");
    Serial.print(minutes);
    Serial.print("分");
    Serial.print(seconds);
    Serial.println("秒経過)");

  }
  delay(100);
}