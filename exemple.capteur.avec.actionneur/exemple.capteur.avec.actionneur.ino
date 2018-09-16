void setup(void){
  // initialiser le capteur
  pinMode( brocheConnecteeAuCapteur,INPUT ou INPUT_PULLUP );
  // initialiser l'actionneur
  pinMode( brocheConnecteeActionneur,OUTPUT);
}

void loop(void){
  int x = valeur de depart;
  // lire l'état ou la valeur du capteur
  x = digitalRead(brocheConnecteeAuCapteur);
  x = analogRead(brocheConnecteeAuCapteur); 
  
  // determiner la condition pour agir
  if( x==HIGH ){
  if( x==LOW ){
  if( x>=seuil ){
	  // determiner l'action a effectuer dans ce cas
	  digitalWrite( brocheConnecteeActionneur, LOW ou HIGH);
  }else{
	  // determiner l'action a effectuer dans le cas contraire
	  digitalWrite( brocheConnecteeActionneur, LOW ou HIGH);
  }
}

