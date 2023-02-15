/*
Usar pin D4 como sensor touch
*/


void setup() {
  Serial.begin(115200);
  delay(1000); // tiempo para abrir el monitor serial
  Serial.println("ESP32 Touch Test");
}

void loop() {
  Serial.println(touchRead(4));  // leer el valor de Touch 0 pin = GPIO 4
  delay(1000);
}
