#include <ArduinoJson.h>


const int botaoAumentar = 4; 
const int botaoDiminuir = 5; 


int contador = 0;

void setup() {

  pinMode(botaoAumentar, INPUT_PULLUP); 
  pinMode(botaoDiminuir, INPUT_PULLUP); 


  Serial.begin(9600);
}

void loop() {

  if (digitalRead(botaoAumentar) == LOW) {
    contador++; 
    delay(200); 
  }


  if (digitalRead(botaoDiminuir) == LOW && contador > 0) {
    contador--; 
    delay(200); 
  }
  StaticJsonDocument<100> json; 

  json["contador"] = contador;

  String jsonString;
  serializeJson(json, jsonString);

  Serial.println(jsonString);


  delay(200);
}