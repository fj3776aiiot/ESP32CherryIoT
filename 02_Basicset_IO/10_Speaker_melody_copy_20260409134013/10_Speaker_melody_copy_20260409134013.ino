const int spkrPin = 3; 

// 音程の定義（1オクターブ上を追加）
#define DO  261.6
#define RE  293.7
#define MI  329.6
#define FA  349.2
#define SO  392.0
#define RA  440.0
#define TI  493.9
#define octDO 523.3
#define HI_RE 587.3
#define HI_MI 659.3
#define HI_FA 698.5
#define HI_FAs 740.0
#define HI_SO 784.0
#define HI_RA 880.0
#define HI_TI 988.0
#define HI_HI_DO 1047.0

void playmusic() {
  // --- ファンファーレ冒頭 ---
  // ソ・ソ・ソ・ド（ドーレミファーソ！）
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);

  ledcWriteTone(spkrPin, RE); delay(200);
  ledcWriteTone(spkrPin, RE); delay(200);
  ledcWriteTone(spkrPin, RE); delay(200);
  
  ledcWriteTone(spkrPin, DO); delay(200);
  ledcWriteTone(spkrPin, RE); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, FA); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, RE); delay(200);

  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, FA); delay(200);
  ledcWriteTone(spkrPin, SO); delay(200);
  ledcWriteTone(spkrPin, RA); delay(200);
  ledcWriteTone(spkrPin, DO); delay(200);
  ledcWriteTone(spkrPin, RA); delay(200);
  
  ledcWriteTone(spkrPin, SO); delay(200);
  ledcWriteTone(spkrPin, FA); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, RE); delay(200);
  
  ledcWriteTone(spkrPin, RE); delay(200);
  ledcWriteTone(spkrPin, RE); delay(200);
  
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, DO); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, RE); delay(1200);
  
  
  
  ledcWriteTone(spkrPin, SO); delay(200);
  ledcWriteTone(spkrPin, SO); delay(200);
  ledcWriteTone(spkrPin, octDO); delay(400);
  ledcWriteTone(spkrPin, HI_RE); delay(400);
  ledcWriteTone(spkrPin, HI_MI); delay(400);
  ledcWriteTone(spkrPin, HI_FA); delay(400);
  ledcWriteTone(spkrPin, HI_SO); delay(400);
  ledcWriteTone(spkrPin, HI_HI_DO); delay(600);
  
  
  ledcWriteTone(spkrPin, HI_TI); delay(200);
  ledcWriteTone(spkrPin, HI_RE); delay(200);
  ledcWriteTone(spkrPin, HI_RE); delay(400);
  ledcWriteTone(spkrPin, HI_SO); delay(300);
  
  ledcWriteTone(spkrPin, HI_RA); delay(600);
  
  
  
  ledcWriteTone(spkrPin, HI_FAs); delay(600);
  ledcWriteTone(spkrPin, HI_FAs); delay(600);
  ledcWriteTone(spkrPin, HI_RA); delay(600);
  ledcWriteTone(spkrPin, HI_SO); delay(400);
  ledcWriteTone(spkrPin, HI_MI); delay(400);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, MI); delay(200);
  ledcWriteTone(spkrPin, MI); delay(400);
  ledcWriteTone(spkrPin, MI); delay(400);
  ledcWriteTone(spkrPin, HI_FAs); delay(600);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
  

//
//  ledcWriteTone(spkrPin, SO); delay(150);
//  ledcWriteTone(spkrPin, RA); delay(150);
//  ledcWriteTone(spkrPin, TI); delay(150);
//  ledcWriteTone(spkrPin, octDO); delay(150);
//  ledcWriteTone(spkrPin, HI_RE); delay(600);
//
//  // --- 続くメロディ ---
//  ledcWriteTone(spkrPin, HI_RE); delay(150);
//  ledcWriteTone(spkrPin, HI_MI); delay(150);
//  ledcWriteTone(spkrPin, HI_FA); delay(150);
//  ledcWriteTone(spkrPin, HI_SO); delay(600);
//
//  // 最後のキメ
//  ledcWriteTone(spkrPin, HI_SO); delay(200);
//  ledcWriteTone(spkrPin, HI_FA); delay(200);
//  ledcWriteTone(spkrPin, HI_MI); delay(200);
//  ledcWriteTone(spkrPin, HI_RE); delay(200);
//  ledcWriteTone(spkrPin, octDO); delay(800);

  ledcWriteTone(spkrPin, 0); // 停止
}

void setup() {
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8);
}

void loop() {
  playmusic();
  delay(5000); // 5秒待機してループ
}
