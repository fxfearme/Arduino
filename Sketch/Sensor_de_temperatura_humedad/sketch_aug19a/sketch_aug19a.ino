int pinData = 2;
int pinLatch = 3;
int pinClock = 4;

#define TIEMPO  500

void LedWrite(int Led) {
  shiftOut(pinData, pinClock, LSBFIRST , Led);
  digitalWrite(pinLatch, HIGH);
  digitalWrite(pinLatch, LOW);
}

void setup() {
  pinMode(pinData, OUTPUT);
  pinMode(pinLatch, OUTPUT);
  pinMode(pinClock, OUTPUT);
}

void loop() {
  LedWrite(128); delay(TIEMPO);
  LedWrite(64); delay(TIEMPO);
  LedWrite(B00100000); delay(TIEMPO);
  LedWrite(B00010000); delay(TIEMPO); delay(TIEMPO);
  LedWrite(B01000000); delay(TIEMPO);
  LedWrite(B00010000); delay(TIEMPO);
  LedWrite(B10000000); delay(TIEMPO);
  LedWrite(B00100000); delay(TIEMPO);

}
