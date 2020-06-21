

const int sensorPin = A0; //pino analogico usado pelo sensor 
 int temperatura = 0; // variavel que vai medir a temperatura 
const int transPin = 10;
int pinoR = 13; // Pino onde o led vermelho esta conectado
int pinoG = 12; // Pino onde o led verde esta conectado
int pinoB = 11; //Pino onde o o led azul esta conectado


void setup() {
  Serial.begin(9600); //inicializacao da serial
  pinMode(pinoR, OUTPUT);
  pinMode(pinoG, OUTPUT);
  pinMode(pinoB, OUTPUT);
  pinMode(transPin,OUTPUT);
  
}


void loop() {

  temperatura = (analogRead(sensorPin) * 0.0048828125 * 100); //recebe a temperatura medida
  
  if (temperatura >= 22 ) { //Se o botao de ligar for pressionado e a temperatura estiver maior que a determinada alerta vermelho
    digitalWrite(pinoR, HIGH); // acende o led vermelho
    digitalWrite(pinoG, LOW); // apaga  o led verde
    digitalWrite(pinoB, LOW); // apaga o led azul
    digitalWrite(transPin,HIGH);
    
    Serial.print("Temperatura = "); //imprime  o texto da variavel
    Serial.print(temperatura); //imprime a variavel
    Serial.println(" C"); //imprime do texto
    delay(2000); //intervalo de 1 segundo 
        
  }
 else if (temperatura <= 18) { //Se o botao de ligar for pressionado e a temperatura estiver no limite  que a determinada alerta verde e mensagem 
    digitalWrite(pinoR, LOW); // apaga o led vermelho
   digitalWrite(pinoG, LOW); // acende  o led verde
    digitalWrite(pinoB, HIGH); // apaga o led azul
   Serial.print("Temperatura = "); //imprime  o texto da variavel
   Serial.print(temperatura); //imprime a variavel
   Serial.println(" C"); //imprime do texto
  delay(2000); //intervalo de 1 segundo 
 }
else{ //temperatura normal
    digitalWrite(pinoR, LOW); // apaga o led vermelho
    digitalWrite(pinoG, HIGH); // apaga  o led verde
    digitalWrite(pinoB, LOW); // acende o led azul
  Serial.print("Temperatura = "); //imprime  o texto da variavel
  Serial.print(temperatura); //imprime a variavel
  Serial.println(" C"); //imprime do texto
  delay(2000); //intervalo de 1 segundo 
  digitalWrite(transPin,HIGH);
}
}

               
