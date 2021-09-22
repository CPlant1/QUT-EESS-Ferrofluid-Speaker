#include <BluetoothA2DPCommon.h>
#include <BluetoothA2DPSink.h>
#include <BluetoothA2DPSource.h>
#include <config.h>
#include <SoundData.h>

#define msg7RESET 14
#define msg7Strobe 13
#define msg7DCout 34

// Define Magnet output pins
#define M1 19
#define M2 18
#define M3 5
#define M4 17
#define M5 16
#define M6 4

/*
 * 
 bck_io_num = 26
ws_io_num = 25
data_out_num = 22
 */

BluetoothA2DPSink a2dp_sink;

void setup() {
    a2dp_sink.start("TestBluetooth");
    pinMode(msg7RESET, OUTPUT);
    pinMode(msg7Strobe, OUTPUT);
    Serial.begin(9600);
    //timer = timerBegin(0, 80, true);
    //timerAttachInterrupt(timer, &onTimer, true);

    //Setup output pins which will power magnets
    pinMode(M1, OUTPUT);
    pinMode(M2, OUTPUT);
    pinMode(M3, OUTPUT);
    pinMode(M4, OUTPUT);
    pinMode(M5, OUTPUT);
    pinMode(M6, OUTPUT);
    
}

void loop() {
  digitalWrite(msg7RESET, HIGH);
  delay(5);
  digitalWrite(msg7RESET, LOW);
  // Create 7 bandwidth gaps for frequency ranges.
  for (int x = 0 ; x < 7 ; x++)
  {
  delayMicroseconds(100);
  digitalWrite(msg7Strobe, LOW);

  int spectrumRead = analogRead(msg7DCout);
  Serial.println(spectrumRead);
  /*int PWMvalue = map(spectrumRead, 0, 1024, 0, 255);
  if (PWMvalue < 50)
  PWMvalue = PWMvalue / 2;*/
  digitalWrite(msg7Strobe, HIGH);
  //  delayMicroseconds(35);
  //}

  // now create a pulse if you want to turn a magnet on based on which bandwidth is on.
  // e.g. if b0 = high, set M1 = 3V
  // voltage range between 0V - 3.3V
  // this correlates to 0 - 4095 when converted by analogRead
  if (x = 0){
    if (spectrumRead < 400){
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M3, LOW);
      digitalWrite(M4, LOW);
      digitalWrite(M5, LOW);
      digitalWrite(M6, LOW);
      delayMicroseconds(100000);
    }else{
      digitalWrite(M1, LOW);
    }
  }
  else if (x = 1){
    if (spectrumRead < 400){
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M3, LOW);
      digitalWrite(M4, LOW);
      digitalWrite(M5, LOW);
      digitalWrite(M6, LOW);
      delayMicroseconds(100000);
    }else{
      digitalWrite(M1, LOW);
    }
  }
  else if (x = 2){
    if (spectrumRead < 600){
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M3, LOW);
      digitalWrite(M4, LOW);
      digitalWrite(M5, LOW);
      digitalWrite(M6, LOW);
      delayMicroseconds(100000);
    }else{
      digitalWrite(M1, LOW);
    }
  }
  else if (x = 3){
    if (spectrumRead < 700){
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M3, LOW);
      digitalWrite(M4, LOW);
      digitalWrite(M5, LOW);
      digitalWrite(M6, LOW);
      delayMicroseconds(100000);
    }else{
      digitalWrite(M1, LOW);
    }
  }
  else if (x = 4){
    if (spectrumRead < 800){
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M3, LOW);
      digitalWrite(M4, LOW);
      digitalWrite(M5, LOW);
      digitalWrite(M6, LOW);
      delayMicroseconds(100000);
    }else{
      digitalWrite(M1, LOW);
    }
  }
  else if (x = 5){
    if (spectrumRead < 1800){
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M3, LOW);
      digitalWrite(M4, LOW);
      digitalWrite(M5, LOW);
      digitalWrite(M6, LOW);
      delayMicroseconds(100000);
    }else{
      digitalWrite(M1, LOW);
    }
  }
  else if (x = 6){
    if (spectrumRead < 4095){
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M3, LOW);
      digitalWrite(M4, LOW);
      digitalWrite(M5, LOW);
      digitalWrite(M6, LOW);
      delayMicroseconds(100000);
    }else{
      digitalWrite(M1, LOW);
    }
  }
  }
}
