//1.déclarer les variables
int pinLED= 9
int i

//premiere fonction d'arduino => instruction qu'on va qu'une fois mais obligatoire
void setup(){
  pinMode(pinLED,OUTPUT);
}

//sefaitenboucle=> envoie du courant progressivement ds la LED*
void loop(){
for(i=0;i<=255;+i+=3){
  analogWrite(pinLED,i);
  delay(30);
}
for (i=255;i>=0;i-=3){
  analogWrite(pinLED,i);
  delay(30);
}
}
