const int pressSensor1 = A1;
const int pressSensor2 = A0;
const int led1 = 9;
const int led2 = 10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led1,OUTPUT);
  pinMode(pressSensor1,INPUT);
  pinMode(led2,OUTPUT);
  pinMode(pressSensor2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(pressSensor1);
  int Value = analogRead(pressSensor2);
  Serial.println(value);
  Serial.println(Value);

  if(value <= 100){
    digitalWrite(led1,LOW);
  }
  else{
    for(int i=0; i<=100; i++){
      analogWrite(led1,i);
      delay(5);
    }
    for(int i=100; i>=0; i--){
      analogWrite(led1,i);
      delay(5);
    }    
  } 
    
  
    
  if(Value <= 100){
    digitalWrite(led2,LOW);
  }
  else{
    for(int s=0; s<=100; s++){
      analogWrite(led2,s);
      delay(5);
    }
    for(int s=100; s>=0; s--){
      analogWrite(led2,s);
      delay(5);
    }    
  }  
}
