/*
  Prende un led usando un pin Touch
  En el ejemplo el D4 que en el pinout es el Touch0
*/


const int LedPin = 32;


// la funcion Setup se ejecuta cuando se presiona el boton de RESET o se da energia a la placa
void setup() {

  // Inicializo el pin digital LedPin como output.
  pinMode(LedPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  
  // el valor 50 lo obtuve de ejecutar el otro programa del repositorio
  if (touchRead(4) < 50) {
    digitalWrite(LedPin, HIGH);       // enciende el LED  (HIGH es el nivel de salida)
  }
  else
  {
    digitalWrite(LedPin, LOW);  // apago LED poniendo la salida en LOW
  }
}
