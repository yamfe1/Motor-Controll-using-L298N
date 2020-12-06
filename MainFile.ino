#define enA 9
#define in1 6
#define in2 7
int rotDirection = 0;
void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
 
  // Set initial rotation direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void loop() {
motorSpeed = 255;
Serial.println("test start");
Serial.println("test forward");
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 analogWrite(EN_A, motor_speed);
 delay(3000);
 Serial.println("test backwards");
 digitalWrite(in1, HIGH);
 digitalWrite(in2, Low);
 analogWrite(EN_A, motor_speed);
 delay(3000);
 Serial.println("test stop");
 motorSpeed = 0;
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 analogWrite(EN_A, motor_speed);
 Serial.println("test over");
}