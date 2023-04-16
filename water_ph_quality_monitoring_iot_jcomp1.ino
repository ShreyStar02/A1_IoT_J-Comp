int sensorpH = A0;
int valve1 =10;
int valve2 =11;
int valve3 =12;
int valve4 =13;
int motor =9;
int potValue;
int  pH;


void setup()
{
  pinMode(sensorpH, INPUT);
  pinMode(valve1,OUTPUT);
  pinMode(valve2,OUTPUT);
  pinMode(valve3,OUTPUT);
  pinMode(valve4,OUTPUT);
  pinMode(motor,OUTPUT);
  Serial.begin (9600);
   for(int i=1; i<=100; i++){
    potValue = analogRead(A0) ;
    float pH = potValue * (14.0/1023.0);
    Serial.print("pH Value:");
    Serial.println(pH); 
    digitalWrite(motor, HIGH);
  
    if(pH<6.5){
      Serial.print("pH Value:");
  	  Serial.println(pH); 
  	  digitalWrite(motor, LOW);
      digitalWrite(valve1, HIGH);
      delay(10000); 
      Serial.println("SAMPLE WATER 1 IS DONE");
      digitalWrite(valve1, LOW);
      delay(2000);
      digitalWrite(motor, HIGH);
      delay (10000);
      break;
    }
    if(pH>6.5){
      digitalWrite(motor, HIGH);
    }
  }
  for(int i=1; i<=100; i++){
    potValue = analogRead(A0) ;
    float pH = potValue * (14.0/1023.0);
    Serial.print("pH Value:");
    Serial.println(pH); 
    digitalWrite(motor, HIGH);
  
    if(pH<6.5){
      Serial.print("pH Value:");
  	  Serial.println(pH); 
  	  digitalWrite(motor, LOW);
      digitalWrite(valve2, HIGH);
      delay(10000); 
      Serial.println("SAMPLE WATER 2 IS DONE");
      digitalWrite(valve2, LOW);
      delay(2000);
      digitalWrite(motor, HIGH);
      delay (10000);
      break;
    }
    if(pH>6.5){
      digitalWrite(motor, HIGH);
    }
  }
  for(int i=1; i<=100; i++){
    potValue = analogRead(A0) ;
    float pH = potValue * (14.0/1023.0);
    Serial.print("pH Value:");
    Serial.println(pH); 
    digitalWrite(motor, HIGH);
  
    if(pH<6.5){
      Serial.print("pH Value:");
  	  Serial.println(pH); 
  	  digitalWrite(motor, LOW);
      digitalWrite(valve3, HIGH);
      delay(10000); 
      Serial.println("SAMPLE WATER 3 IS DONE");
      digitalWrite(valve3, LOW);
      delay(2000);
      digitalWrite(motor, HIGH);
      delay (10000);
      break;
    }
    if(pH>6.5){
      digitalWrite(motor, HIGH);
    }
  }
  for(int i=1; i<=100; i++){
    potValue = analogRead(A0) ;
    float pH = potValue * (14.0/1023.0);
    Serial.print("pH Value:");
    Serial.println(pH); 
    digitalWrite(motor, HIGH);
  
    if(pH<6.5){
      Serial.print("pH Value:");
  	  Serial.println(pH); 
  	  digitalWrite(motor, LOW);
      digitalWrite(valve4, HIGH);
      delay(10000); 
      Serial.println("SAMPLE WATER 4 IS DONE");
      digitalWrite(valve4, LOW);
      delay(2000);
      digitalWrite(motor, HIGH);
      delay (10000);
      break;
    }
    if(pH>6.5){
      digitalWrite(motor, HIGH);
    }
  }
}     

void loop(){  
  
   potValue = analogRead(A0) ;
   float pH = potValue * (14.0/1023.0);
   Serial.print("pH Value:");
   Serial.println(pH);
  delay(5000);
   if(pH<6.5){
   digitalWrite(motor, HIGH);
     delay(10000);
    
  }
  else{
    digitalWrite(motor, HIGH);
  }
}
