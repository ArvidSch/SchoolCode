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
void wait(){
  delay(1200);
}

void swait(){
  delay(600);
}
//skaffa fram alla classes
redOnOff red;
yellowOnOff yellow;
greenOnOff green;

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


// Skapa objekt av klasserna globalt så att de är tillgängliga i både setup() och loop()
void setup() { 
  pinMode(2, OUTPUT); // Red LED
  pinMode(3, OUTPUT); // Yellow LED
  pinMode(4, OUTPUT); // Green LED

  red.off(); //reset
  yellow.off();
  green.off();

}

void loop() {

  trafficLight(on);
  bounce(off);
  refresh(off);
}





























