void off(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
 
 
void load(){
int delayint =50;
off();
digitalWrite(2,HIGH);
delay(delayint);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay(delayint);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
delay(delayint);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(delayint);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(delayint);
digitalWrite(6,LOW);
digitalWrite(8,HIGH);
delay(delayint);
digitalWrite(8,LOW);
}
 
void one(){
  off();
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
 
}
 
void two(){
  off();
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}
void three(){
  off();
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
 
  digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
}
void four(){
  off();
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
void five(){
  off();
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}
 
void six(){
  off();
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}
void seven(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(8,HIGH);
}
void eight(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}
 
void nine(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}
void zero(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  //digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}
 
 
 
 
 
 
 
 
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:

int light = analogRead(A0);
Serial.println(light);
int dly = 20;
if (light >= 0 && light < 10){
  zero();
  delay(dly);
}
if (light > 10 && light < 20){
  one();
  delay(dly);
}
if (light > 20 && light < 30){
  two();
  delay(dly);
}
if (light > 30 && light < 40){
  three();
  delay(dly);
}
if (light > 40 && light < 50){
  four();
  delay(dly);
}
if (light > 50 && light < 60){
  five();
  delay(dly);
}
if (light > 60 && light < 70){
  six();
  delay(dly);
}
if (light > 70 && light < 80){
  seven();
  delay(dly);
}
if (light > 80 && light < 90){
  eight();
  delay(dly);
}

if (light > 90 && light < 2000){
  nine();
  delay(dly);
}

off();

}
