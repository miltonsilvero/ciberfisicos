const int sensorPin = A0;
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);               ///Se declaran los pines y también se establece la barrera a valores que uno
  pinMode(sensorPin, INPUT);             ///necesite.
}

void loop() {
  int barrera = analogRead(sensorPin); 

  if (barrera > 200) {
    for (int i = 0; i < 1000; i++) {  ///Acá está el BUCLE FOR, el cual setea 1000 milisegundos (1 segundo) y dentro de el
      digitalWrite(ledPin, HIGH);     ///enciende el pin conectado al led dándole un delay de 1ms y luego también lo delaya
      delay(1);                       ///pero al apagarlo.
      digitalWrite(ledPin, LOW); 
      delay(1); 
    }
  }                                   ///Tengo problemas con el instalador del SimulIDE, mañana en clase pido el pendrive que tenían los profesores
}                                     ///y pruebo conectarlo. Acá en el compilador está correcto.
