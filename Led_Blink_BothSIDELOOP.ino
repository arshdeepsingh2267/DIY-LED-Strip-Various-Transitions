int L1=13,L2=12,L3=11,L4=10,L5=9,L6=8,L7=7,L8=6,btn=3;
int I[] ={L1,L2,L3,L4}; int J[]={L5,L6,L7,L8};
int C[]={L1,L2,L3,L4,L5,L6,L7,L8};
int LedI,LedJ;
void setup() {
pinMode(L1,OUTPUT);pinMode(L2,OUTPUT);pinMode(L3,OUTPUT);
pinMode(L4,OUTPUT);pinMode(L5,OUTPUT);pinMode(L6,OUTPUT);
pinMode(L7,OUTPUT);pinMode(L8,OUTPUT);pinMode(btn,INPUT);

digitalWrite(L1,LOW);digitalWrite(L2,LOW);digitalWrite(L3,LOW);
digitalWrite(L4,LOW);digitalWrite(L5,LOW);digitalWrite(L6,LOW);
digitalWrite(L7,LOW);digitalWrite(L8,LOW);

}
// ##### WHILE PRESSING BUTTON, MAKE SURE YOU DO IT FOR AT LEAST HALF A SECOND AND ALSO NOT FOR VERY LONG. #####
void loop(){
  DoubleBlink();
}

void DoubleBlink() {
  while(1){
  for(int i=0,j=3;(i<=2) && (j>=1);i++,j--){
    LedI=I[i]; LedJ=J[j];
    digitalWrite(LedI,HIGH); digitalWrite(LedJ,HIGH);
    delay(250);
    digitalWrite(LedI,LOW); digitalWrite(LedJ,LOW);
    if(digitalRead(btn)==HIGH){
    delay(1);
    SimpleBlink();
  }
    }

  for(int i=3,j=0;(i>=1) && (j<=2);i--,j++){
    LedI=I[i]; LedJ=J[j];
    digitalWrite(LedI,HIGH); digitalWrite(LedJ,HIGH);
    delay(250);
    digitalWrite(LedI,LOW); digitalWrite(LedJ,LOW);
    if(digitalRead(btn)==HIGH){
    delay(1);
    SimpleBlink();
  }
    }

  if(digitalRead(btn)==HIGH){
    delay(1);
    SimpleBlink();
  }
  }
  
  
}
// ##### WHILE PRESSING BUTTON, MAKE SURE YOU DO IT FOR AT LEAST HALF A SECOND AND ALSO NOT FOR VERY LONG. #####
void SimpleBlink(){
while(1){
  digitalWrite(L1,HIGH);digitalWrite(L2,HIGH);digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);digitalWrite(L5,HIGH);digitalWrite(L6,HIGH);
  digitalWrite(L7,HIGH);digitalWrite(L8,HIGH);
  delay(250);
    if(digitalRead(btn)==HIGH){
    delay(1);
    CountinuesLoop();
  }
  digitalWrite(L1,LOW);digitalWrite(L2,LOW);digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);digitalWrite(L5,LOW);digitalWrite(L6,LOW);
  digitalWrite(L7,LOW);digitalWrite(L8,LOW);
  delay(250);
  if(digitalRead(btn)==HIGH){
    delay(250);
    CountinuesLoop();
  }
}  

}
// ##### WHILE PRESSING BUTTON, MAKE SURE YOU DO IT FOR AT LEAST HALF A SECOND AND ALSO NOT FOR VERY LONG. #####
void CountinuesLoop(){
while(1){
    for(int i=0;i<=7;i++){
    digitalWrite(C[i],HIGH);
    delay(250);  
    digitalWrite(C[i],LOW);
        if(digitalRead(btn)==HIGH){
    delay(1);
    DoubleBlink();
  }
    }

    for(int i=7;i>=0;i--){
    digitalWrite(C[i],LOW);
    delay(250);
    digitalWrite(C[i],HIGH);
        if(digitalRead(btn)==HIGH){
    delay(1);
    DoubleBlink();
  }
    }
  
  delay(250);

if(digitalRead(btn)==HIGH){
    delay(1);
    DoubleBlink();
  }
}

}
// ##### WHILE PRESSING BUTTON, MAKE SURE YOU DO IT FOR AT LEAST HALF A SECOND AND ALSO NOT FOR VERY LONG. #####



