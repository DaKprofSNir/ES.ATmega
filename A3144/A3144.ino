void setup(void){
  pinMode( 13,OUTPUT);
  pinMode(  7,INPUT);
}

void loop(void){
  int x = LOW;
  x = digitalRead(7); 
  digitalWrite( 13, x);
}

