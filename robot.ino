// Define the pins for Motor 1
const int motor1_input1_pin = 2;
const int motor1_input2_pin = 3;

// Define the pins for Motor 2
const int motor2_input1_pin = 4;
const int motor2_input2_pin = 5;

// Define the pins for Motor 3
const int motor3_input1_pin = 6;
const int motor3_input2_pin = 7;

// Define the pins for Motor 4
const int motor4_input1_pin = 8;
const int motor4_input2_pin = 9;

const int pump1 = 11;
const int pump2 = 12;


void setup() {
  // Initialize pins as outputs
  pinMode(motor1_input1_pin, OUTPUT);
  pinMode(motor1_input2_pin, OUTPUT);

  pinMode(motor2_input1_pin, OUTPUT);
  pinMode(motor2_input2_pin, OUTPUT);

  pinMode(motor3_input1_pin, OUTPUT);
  pinMode(motor3_input2_pin, OUTPUT);

  pinMode(motor4_input1_pin, OUTPUT);
  pinMode(motor4_input2_pin, OUTPUT);

  pinMode(pump1, OUTPUT);
  pinMode(pump2, OUTPUT);


}
void turn(){
  digitalWrite(motor3_input2_pin, LOW);
  digitalWrite(motor3_input1_pin, HIGH);
  digitalWrite(motor4_input2_pin, LOW);
  digitalWrite(motor4_input1_pin, HIGH);


}
void idle(){
  digitalWrite(motor1_input2_pin, HIGH);
  digitalWrite(motor1_input1_pin, LOW);
  digitalWrite(motor2_input2_pin, HIGH);
  digitalWrite(motor2_input1_pin, LOW);
  digitalWrite(motor3_input2_pin, LOW);
  digitalWrite(motor3_input1_pin, HIGH);
  digitalWrite(motor4_input2_pin, LOW);
  digitalWrite(motor4_input1_pin, HIGH);
  
  
  delay(2000);
  digitalWrite(motor1_input1_pin, LOW);
  digitalWrite(motor1_input2_pin, LOW);
  digitalWrite(motor2_input1_pin, LOW);
  digitalWrite(motor2_input2_pin, LOW);
  digitalWrite(motor3_input1_pin, LOW);
  digitalWrite(motor3_input2_pin, LOW);
  digitalWrite(motor4_input1_pin, LOW);
  digitalWrite(motor4_input2_pin, LOW);
  delay(2000);
  turn();
  delay(2000);
  
  digitalWrite(motor3_input1_pin, LOW);
  digitalWrite(motor3_input2_pin, LOW);
  digitalWrite(motor4_input1_pin, LOW);
  digitalWrite(motor4_input2_pin, LOW);


}
void loop() {

  digitalWrite(pump1, LOW);
  digitalWrite(pump2, HIGH);


  delay(2000);
  idle();

  delay(2000);
  digitalWrite(pump1, LOW);
  digitalWrite(pump2, LOW);
  delay(10000);
}
