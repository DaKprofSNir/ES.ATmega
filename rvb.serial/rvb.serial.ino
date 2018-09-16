void setup(void){
  pinMode( 8,OUTPUT);
  pinMode( 9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop(void){
  int i=0;
  i=Serial.read();
  switch( i ){  
  case '0' : leds(LOW ,LOW ,LOW ); break;
  case '1' : leds(LOW ,LOW ,HIGH); break;
  case '2' : leds(LOW ,HIGH,LOW ); break;
  case '3' : leds(LOW ,HIGH,HIGH); break;
  case '4' : leds(HIGH,LOW ,LOW ); break;
  case '5' : leds(HIGH,LOW ,HIGH); break;
  case '6' : leds(HIGH,HIGH,LOW ); break;
  case '7' : leds(HIGH,HIGH,HIGH); break;
  }
}

void leds(int r, int g, int b){
    digitalWrite( 8, r);
    digitalWrite( 9, g);
    digitalWrite(10, b);
}
