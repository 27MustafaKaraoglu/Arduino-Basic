int but1=2;
int but2=3;
int but3=4;
int but4=5;
int but5=6;

int led1=8;
int led2=9;
int led3=10;

int b1d;
int b2d;
int b3d;
int b4d;
int b5d;

void setup() {
  Serial.begin(9600);
  pinMode(but1,INPUT);
pinMode(but2,INPUT);
pinMode(but3,INPUT);
pinMode(but4,INPUT);
pinMode(but5,INPUT);

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);


}

void loop() {
b1d=digitalRead(but1);
b2d=digitalRead(but2);
b3d=digitalRead(but3);
b4d=digitalRead(but4);
b5d=digitalRead(but5);

if(b1d==HIGH){
digitalWrite(led1,HIGH);
Serial.println("led 1 yandi");
delay(100);
} 
else if(b2d==HIGH){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
Serial.println("led 1 ve led 2 yandi");
delay(100);

}
else if(b3d==HIGH){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
Serial.println("Tum ledler yandi");
delay(100);
}

else if(b4d==HIGH){
digitalWrite(led1,HIGH);
delay(250);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delay(250);
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
delay(250);
digitalWrite(led3,LOW);
Serial.println("Karasimsek");
}
else if(b5d==HIGH){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  delay(250);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(250);
Serial.println("Uyari veriyor");
delay(100);
}
else{
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
Serial.println("Butonlara basilmiyor");
delay(100);
}

}



