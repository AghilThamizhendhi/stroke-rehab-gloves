int pin1=19;
int pin2=21;
int pb1=2;
int pb2=4;
int pb3=15;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
  pinMode(pb3,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int push1=digitalRead(pb1);
  Serial.print(push1);
  int push2=digitalRead(pb2);
  Serial.print(push2);
  int push3=digitalRead(pb3);
  Serial.print(push3);
  if(push1==LOW){
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,LOW);
    delay(1500);
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,HIGH);
    delay(1500);   
    
  }
 /* else if(push2==HIGH) {
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,LOW);
  }
    else if(push2==LOW) {
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);
  }
  else if(push3==HIGH) {
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,HIGH);
  }
    else if(push3==LOW) {
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);
  } */
}