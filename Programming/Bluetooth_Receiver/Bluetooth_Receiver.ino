#include <BluetoothA2DPCommon.h>
#include <BluetoothA2DPSink.h>
#include <BluetoothA2DPSource.h>
#include <config.h>
#include <SoundData.h>

#define msg7RESET 14
#define msg7Strobe 13
#define msg7DCout 34  

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
}

void loop() {
  digitalWrite(msg7RESET, HIGH);
  delay(5);
  digitalWrite(msg7RESET, LOW);
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
  }
}
