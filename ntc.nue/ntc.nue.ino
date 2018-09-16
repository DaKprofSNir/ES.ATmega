void setup(void){
  pinMode(A0,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(void){
  int x=0;
  x = analogRead(A0);
  Serial.print("Valeur lue=");
  Serial.println(x);
  delay(2000);
}

