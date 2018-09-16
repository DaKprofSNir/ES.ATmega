void setup(void){
  pinMode( 8,OUTPUT);
  pinMode( 9,OUTPUT);
  pinMode(10,OUTPUT);
}

int i=0;

void loop(void){
    digitalWrite(  8, LOW);
    digitalWrite(  9, LOW);
    digitalWrite( 10, LOW);
    delay(500);

    if( i==1) digitalWrite(  8, HIGH);
    if( i==2) digitalWrite(  9, HIGH);
    if( i==3) digitalWrite( 10, HIGH);
    delay(1000);
  
    i=i+1;
    if( i>3 ) i=1;
}

