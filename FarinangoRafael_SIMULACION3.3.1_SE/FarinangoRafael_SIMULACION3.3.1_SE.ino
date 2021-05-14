///////////////////////ESCLAVO////////////////////////

#include <Wire.h>


void setup() {
  Wire.begin(4);                  // 4 porque asi lo configuramos en el maestro
  Wire.onReceive(receiveEvent);   // evento de recepcion de mensajes
  Serial.begin(9600);
}


void loop() {
  delay(100);
}


void receiveEvent(int bytes){           // metodo I2C
  while(Wire.available()){              // verifica si hay menasaje x leer
    Serial.print("mensaje recibido ");
    int c=Wire.read();                  // recibe dato
    Serial.println(c);
    }
}
