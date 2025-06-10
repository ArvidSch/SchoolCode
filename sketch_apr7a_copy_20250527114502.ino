int out1 = 5;
int out2 = 4;
int out3 = 3;
int out4 = 2;


void setup() {
  // put your setup code here, to run once:
   pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3,   OUTPUT);
  pinMode(out4, OUTPUT);

  //(Optional)
  pinMode(9,   OUTPUT); 
  pinMode(10, OUTPUT);
  //(Optional)
}

static void w(int i){
  
 digitalWrite(out1,HIGH);
 digitalWrite(out2, LOW);
 digitalWrite(out3, HIGH);
 digitalWrite(out4, LOW);
 delay(i);
 digitalWrite(out1, LOW);
 digitalWrite(out2, LOW);
 digitalWrite(out3, LOW);
 digitalWrite(out4, LOW);
}

static void s(int i){
  
 digitalWrite(out1,LOW );
 digitalWrite(out2, HIGH);
 digitalWrite(out3, LOW);
 digitalWrite(out4, HIGH);
 delay(i);
 digitalWrite(out1, LOW);
 digitalWrite(out2, LOW);
 digitalWrite(out3, LOW);
 digitalWrite(out4, LOW);
}
static void a(int i){
  
 digitalWrite(out1,LOW );
 digitalWrite(out2, HIGH);
 digitalWrite(out3, HIGH);
 digitalWrite(out4, LOW);
 delay(i*8.6);
 digitalWrite(out1, LOW);
 digitalWrite(out2, LOW);
 digitalWrite(out3, LOW);
 digitalWrite(out4, LOW);
}
static void d(int i){
  
 digitalWrite(out1,HIGH );
 digitalWrite(out2, LOW);
 digitalWrite(out3, LOW);
 digitalWrite(out4, HIGH);
 delay(i*8.6);
 digitalWrite(out1, LOW);
 digitalWrite(out2, LOW);
 digitalWrite(out3, LOW);
 digitalWrite(out4, LOW);
}
static void manD(int i){
  
 digitalWrite(out1,HIGH );
 digitalWrite(out2, LOW);
 digitalWrite(out3, LOW);
 digitalWrite(out4, LOW);
 delay(i*8.66666);
 digitalWrite(out1, LOW);
 digitalWrite(out2, LOW);
 digitalWrite(out3, LOW);
 digitalWrite(out4, LOW);
}
static void stop(int i){
  delay(i);
}
static void out (){
  for (int i = 0; i < 3; i++){
   w(100);
   a(5);
 s(100);
   a(5);
 w(100);
   a(5);
 s(100);
   a(5);
 w(100);
   a(5);
 s(100);
   a(5);
 w(100);
   a(5);
 s(100);
   a(5);
 w(100);
   a(5);
 s(100);
   a(5);
 w(100);
   a(5);
 s(100);
   a(5);
   }
}
void loop() {
   // put your main code here, to run repeatedly:

  //Controlling speed (0   = off and 255 = max speed):     ,,,,,,,,,,,,
  //(Optional)
  //analogWrite(9, 255); //ENA   pin
 // analogWrite(10, 255); //ENB pin
  //(Optional)
w(3500);
a(20);
w(1500);
manD(700);
s(700);
d(20);
w(2700);
d(70);
w(2500);
d(45);
w(2500);
s(200);
w(300);
d(20);
w(800);



s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);
s(200);
w(500);


out();

  //s(2000);
}
