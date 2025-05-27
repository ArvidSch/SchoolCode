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

void loop() {
   // put your main code here, to run repeatedly:

  //Controlling speed (0   = off and 255 = max speed):     ,,,,,,,,,,,,
  //(Optional)
  analogWrite(9, 255); //ENA   pin
  analogWrite(10, 255); //ENB pin
  //(Optional)
  
 digitalWrite(out3, HIGH);
 digitalWrite(out4, LOW);
  digitalWrite(out1,LOW);
 digitalWrite(out2, HIGH);
}
