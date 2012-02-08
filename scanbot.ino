const byte FOCUS_PIN = A2;
const byte SHUTTER_PIN = A3;
const byte FWD_PIN = 12;

void setup() {
  pinMode(FOCUS_PIN, INPUT);
  pinMode(SHUTTER_PIN, INPUT);
  digitalWrite(FOCUS_PIN, LOW);    // LOW = pullup off
  digitalWrite(SHUTTER_PIN, LOW);  // LOW = pullup off
  
  pinMode(FWD_PIN, OUTPUT);
  digitalWrite(FWD_PIN, LOW);
  
  delay(1000);
}

void loop() {
  //focus_down();
  //digitalWrite(13, HIGH);
  //delay(1000);
  //focus_up();
  //digitalWrite(13, LOW);
  //delay(1000);
  //digitalWrite(13, HIGH);
  snap();
  delay(50);
  digitalWrite(13, LOW);
  delay(100);
  fwd();
  delay(750);
}

void focus_down() {
  pinMode(FOCUS_PIN, OUTPUT);
  digitalWrite(FOCUS_PIN, LOW);
}

void focus_up() {
  pinMode(FOCUS_PIN, INPUT);
}

void fwd() {
  digitalWrite(FWD_PIN, HIGH);
  delay(100);
  digitalWrite(FWD_PIN, LOW);
}

void snap() {
  focus_down();
  pinMode(SHUTTER_PIN, OUTPUT);
  digitalWrite(SHUTTER_PIN, LOW);
  delay(50);
  pinMode(SHUTTER_PIN, INPUT);
}

