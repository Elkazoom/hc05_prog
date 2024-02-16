// TROCAR SENHA E NOME DO MÓDULO HC 05 OU HC 06 //
// https://www.robocore.net/tutoriais/configurando-bluetooth-hc-05-via-arduino


#include "SoftwareSerial.h" //inclui a biblioteca para comunicação serial
SoftwareSerial bluetooth(2, 3); //TX, RX (Bluetooth)

void setup() {
  Serial.begin(9600);
  Serial.println(F("Digite um comando AT:"));
  bluetooth.begin(9600);    //Velocidade da serial do HC-05
}

void loop() {
  if (Serial.available()) {
    char r = Serial.read();  
    bluetooth.print(r);   
    Serial.print(r);   
  }
  
  if (bluetooth.available()) {
    char r = bluetooth.read();  
    Serial.print(r);  
  }
}
