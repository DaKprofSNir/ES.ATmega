void setup(void){
  pinMode( 13,OUTPUT);
  pinMode( 11,INPUT_PULLUP);
}

void loop(void){
  int x = LOW;
  x = digitalRead(11); 
  digitalWrite( 13, x);
}

