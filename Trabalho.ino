

const int sensorPin = A0; //pino analogico usado pelo sensor 
 int temperatura = 0; // variavel que vai medir a temperatura,iniciliza como zero
const int transPin = 10;//pino do transistor no pino analogico 10 do aduino 
int pinoR = 13; // Pino onde o led vermelho esta conectado no arduino
int pinoG = 12; // Pino onde o led verde esta conectado no arduino
int pinoB = 11; //Pino onde o o led azul esta conectado no arduino


void setup() {
  Serial.begin(9600); //inicializacao da serial
  pinMode(pinoR, OUTPUT); //pino do led como saida
  pinMode(pinoG, OUTPUT);// pino do led como saida
  pinMode(pinoB, OUTPUT);// pino do led como saida 
  pinMode(transPin,OUTPUT); //pino do transistor como saida
  
}


void loop() {

  temperatura = (analogRead(sensorPin) * 0.0048828125 * 100); //recebe a temperatura medida e converte para graus celsius
  
  if (temperatura >= 22 ) { //Se o botao de ligar for pressionado e a temperatura estiver maior que a determinada alerta vermelho
    digitalWrite(pinoR, HIGH); // acende o led vermelho
    digitalWrite(pinoG, LOW); // apaga  o led verde
    digitalWrite(pinoB, LOW); // apaga o led azul
    digitalWrite(transPin,HIGH);
    
    Serial.print("Temperatura = "); //imprime  o texto da variavel
    Serial.print(temperatura); //imprime a variavel
    Serial.println(" C"); //imprime do texto
    delay(2000); //intervalo de 2 segundo 
        
  }
 else if (temperatura <= 18) { //Se o botao de ligar for pressionado e a temperatura estiver no limite  que a determinada alerta verde e mensagem 
    digitalWrite(pinoR, LOW); // apaga o led vermelho
   digitalWrite(pinoG, LOW); // acende  o led verde
    digitalWrite(pinoB, HIGH); // apaga o led azul
   Serial.print("Temperatura = "); //imprime  o texto da variavel
   Serial.print(temperatura); //imprime a variavel
   Serial.println(" C"); //imprime do texto
  delay(2000); //intervalo de 2 segundo 
 }
else{ //temperatura normal
    digitalWrite(pinoR, LOW); // apaga o led vermelho
    digitalWrite(pinoG, HIGH); // apaga  o led verde
    digitalWrite(pinoB, LOW); // acende o led azul
  Serial.print("Temperatura = "); //imprime  o texto da variavel
  Serial.print(temperatura); //imprime a variavel
  Serial.println(" C"); //imprime do texto
  delay(2000); //intervalo de 2 segundo 
  digitalWrite(transPin,HIGH); // transistor ligado
}
}

               
