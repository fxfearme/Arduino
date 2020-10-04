// Primer programa del Dani
// Led Parpadeante

#define temps 500







void setup() {
  //Definim la sortida del 4t pin GROC
  pinMode(4,OUTPUT); 
  
  //Definim la sortida del 5e pin VERD
  pinMode(5,OUTPUT);

  //Definim la sortida del 6e pin ORANGE
  pinMode(6,OUTPUT);

  //Definim la sortida del 7e pin BLAU
  pinMode(7,OUTPUT);
}

void loop() {
  //Alimentem led num1
  digitalWrite(4,HIGH);
  delay(temps);
  digitalWrite(4,LOW);
  delay(temps);

  //Alimentem led num2
  digitalWrite(6,HIGH);
  delay(temps);
  digitalWrite(6,LOW);
  delay(temps);


  //Alimentem led num 3
  digitalWrite(5,HIGH);
  delay(temps);
  digitalWrite(5,LOW);
  delay(temps);
  

  //Alimentem led  num 4
  digitalWrite(7,HIGH);
  delay(temps);
  digitalWrite(7,LOW);
  delay(temps);

  
}
