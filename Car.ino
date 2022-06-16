#define LeftMotorReverse 2
#define LeftMotorForward 3
#define RightMotorForward 4
#define RightMotorReverse 5

#define leftIR A0
#define rightIR A1

void setup() {
  // put your setup code here, to run once:
  pinMode(LeftMotorForward,OUTPUT);
  pinMode(RightMotorForward,OUTPUT);
  pinMode(LeftMotorReverse,OUTPUT);
  pinMode(RightMotorReverse,OUTPUT);
  pinMode(leftIR, INPUT);
  pinMode(rightIR, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(leftIR) == LOW && digitalRead(rightIR) == LOW)//Forward
  {
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(RightMotorForward, HIGH);
  }

  else if(digitalRead(leftIR)==HIGH &&digitalRead(rightIR)==HIGH)//Stop
  {
    digitalWrite(LeftMotorForward,LOW);
    digitalWrite(RightMotorForward,LOW);
  }
  else if(digitalRead(leftIR)==LOW && digitalRead(rightIR)==HIGH)//Right Turn
  {
    digitalWrite(LeftMotorForward,HIGH);
    digitalWrite(RightMotorForward,LOW);
  }
  else if(digitalRead(leftIR)== HIGH && digitalRead(rightIR)==LOW)//Left Turn
  {
    digitalWrite(LeftMotorForward,LOW);
    digitalWrite(RightMotorForward,HIGH);
  }
  delay(20);
}
  
