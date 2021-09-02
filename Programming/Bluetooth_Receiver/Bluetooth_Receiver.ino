#include <BluetoothA2DPCommon.h>
#include <BluetoothA2DPSink.h>
#include <BluetoothA2DPSource.h>
#include <config.h>
#include <SoundData.h>

#define msg7RESET 35
#define msg7Strobe 32
#define msg7DCout 34 


BluetoothA2DPSink a2dp_sink;

void setup() {
    a2dp_sink.start("TestBluetooth");
    pinMode(msg7RESET, OUTPUT);
    pinMode(msg7Strobe, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  digitalWrite(msg7RESET, HIGH);
  delay(5);
  digitalWrite(msg7RESET, LOW);
  for (int x = 0 ; x < 7 ; x++)
  {
  digitalWrite(msg7Strobe, LOW);
  delayMicroseconds(35);
  int spectrumRead = analogRead(msg7DCout);
  Serial.println(spectrumRead);
  int PWMvalue = map(spectrumRead, 0, 1024, 0, 255);
  if (PWMvalue < 50)
  PWMvalue = PWMvalue / 2;
  digitalWrite(msg7Strobe, HIGH);
  }
}
