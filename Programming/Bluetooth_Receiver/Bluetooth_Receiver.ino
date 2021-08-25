#include <BluetoothA2DPCommon.h>
#include <BluetoothA2DPSink.h>
#include <BluetoothA2DPSource.h>
#include <config.h>
#include <SoundData.h>

BluetoothA2DPSink a2dp_sink;

void setup() {
    a2dp_sink.start("TestBluetooth");
}

void loop() {
}
