// Arvids arduinokod för trafikljuset på ellära
bool on = true;
bool off = false;

class redOnOff {
  public:
    void on() {  
      digitalWrite(2, HIGH);
    }

    void off() { 
      digitalWrite(2, LOW);
    }
};

class yellowOnOff {
  public:
    void on() {  
      digitalWrite(3, HIGH);
    }

    void off() { 
      digitalWrite(3, LOW);
    }
};

class greenOnOff {
  public:
    void on() {  
      digitalWrite(4, HIGH);
    }

    void off() { 
      digitalWrite(4, LOW);
    }
};
void p13On(){
  digitalWrite(13, HIGH);
}
void p13Off(){
  digitalWrite(13, LOW);
}
void wait(){
  delay(1500);
}

void swait(){
  delay(800);
}
void sosWait(){
  delay(600);
}

static void sosSwait(){
  delay(300);
}

//skaffa fram alla classes
redOnOff red;
yellowOnOff yellow;
greenOnOff green;

void allOn(){
  red.on();
  yellow.on();
  green.on();
  p13On();
}
void allOff(){
  red.off();
  yellow.off();
  green.off();
  p13Off();
}

void trafficLight(bool enable){
  if (enable = true){
    red.on();      
    swait();
    yellow.on();
    wait();
    red.off();
    yellow.off();
    green.on();
    wait();
    green.off();
    yellow.on();
    wait();
    yellow.off();
    red.on();
    

    red.off(); //reset
    yellow.off();
    green.off();
  }
}

void bounce(bool enable){
  if (enable = true){
    red.on();
    swait();
    red.off();
    yellow.on();
    swait();
    yellow.off();
    green.on();
    swait();
    green.off();

    red.off(); //reset
    yellow.off();
    green.off();
  }
}

void refresh(bool enable){
  if (enable = true){
    red.on();
    swait();
    yellow.on();
    swait();
    green.on();
    wait();
    red.off();
    swait();
    yellow.off();
    swait();
    green.off();
   

    red.off(); //reset
    yellow.off();
    green.off();
  }
}

void ledBlink(){
p13On();
red.on();
green.on();
yellow.on();
wait();
p13Off();
red.off();
yellow.off();
green.off();
wait();
}
/*
static void sos(){
  allOn();
  sosSWait();
  allOff();
  sosSWait();
  allOn();
  sosSWait();
  allOff();
  sosSWait();
  allOn();
  sosSWait();
  allOff();

  sosWait();
  allOn();
  wait();
  allOff();
  sosWait();
  allOn();
  sosWait();
  allOff();
  sosWait();
  allOn();
  sosWait();
  allOff();
}

/**/

// Skapa objekt av klasserna globalt så att de är tillgängliga i både setup() och loop()
void setup() { 
  pinMode(2, OUTPUT); // Red LED
  pinMode(3, OUTPUT); // Yellow LED
  pinMode(4, OUTPUT); // Green LED
  pinMode(13,OUTPUT);

  red.off(); //reset
  yellow.off();
  green.off();

}

void loop() {

//sos();
//ledBlink();
  trafficLight(on);
  /*
  bounce(off);
  refresh(off);
  /**/
}
