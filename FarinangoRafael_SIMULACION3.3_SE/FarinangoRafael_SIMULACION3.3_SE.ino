/*
 *CAPITULO III: MODULOS DE COMUNICACIÓN 
 *CODIGO 12: RECEPCION Y ENVIO DE MENSAJES POR COMUNICACION I2C
 *OBJETIVO: ENVIAR MENSAJES DESDE UN MASTER HACIA UN ESCLAVO
 *NOMBRE: RAFAEL FARINANGO
 *FUNCIONES:
 *wire.gebin()
 *wire.beginTransmission(adress)
 *wire.endTransmission(adress)
 *wire.requestFrom(adress, nBytes)
 */

 /////////////////////////MASTER///////////////////

#include <Wire.h>
int cont=0;


void setup() {
  Wire.begin();
  Serial.begin(9600);
}


void loop() {
  cont++;
  Wire.beginTransmission(4);
  Wire.write(cont);
  Wire.endTransmission();
  delay(1000);
  Wire.requestFrom(4,2);
  while(Wire.available()){
    Serial.print("mensaje recibido");
    char c=Wire.read();
    Serial.println(c);
    }
  Serial.println();
  delay(1000);

}
