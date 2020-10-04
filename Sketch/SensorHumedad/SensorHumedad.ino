int lectura = 0;
int lecturaporcentaje;

void setup() {
  Serial.begin(9600);
}

void loop() {
  lectura = analogRead(A0);


  // lecturas entre 1000 - 1023
//  if (lectura >= 1000) {
//    Serial.println(">> EL SENSOR ESTA DESCONECTADO O FUERA DEL SUELO <<");
//  }
//  else if (lectura  < 1000 && lectura >= 600) {
//    Serial.println(">> EL SUELO ESTA SECO <<");
//  }
//  else if (lectura < 600 && lectura >= 370) {
//    Serial.println(">> EL SUELO ESTA HUMEDO <<");
//  }
//  else if (lectura < 370 ) {
//    Serial.println(">> EL SENSO ESTA PRACTICAMENTE EN AGUA <<");
//  }

  lecturaporcentaje = map(lectura, 1023, 0, 0, 100);

   Serial.print("Humedad = ");
  Serial.print(lecturaporcentaje);
  Serial.println(" %");
  Serial.println(lectura);
  delay(5000);
}
