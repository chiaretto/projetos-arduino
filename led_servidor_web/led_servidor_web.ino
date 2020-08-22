// A simple web server that turn an LED on or off"
#include "etherShield.h"
#include "ETHER_28J60.h"

// Dados do pino
int outputPin = 9;

// Dados da placa de rede
static uint8_t mac[6] = {0x54, 0x55, 0x58, 0x10, 0x00, 0x24};   // this just needs to be unique for your network, 
static uint8_t ip[4] = {192,168,1,13}; // IP address for the webserver
static uint16_t port = 80; // Use port 80 - the standard for HTTP

// Define a placa de rede
ETHER_28J60 e;

// Configura o programa
void setup(){ 
  // Inicia a placa de rede
  e.setup(mac, ip, port);
  
  // Inicia os pinos
  pinMode(outputPin, OUTPUT);
  
  // Inicia a porta serial
  Serial.begin(9600);
}

// Loop
void loop(){
  
  // Declara a variaveis dos parametros
  char* params;
  
  if (params = e.serviceRequest()) {
    
    // Cria o titulo
    e.print("<html><title>Arduino Server</title><body>");
    e.print("<h1>Sistema Automatizado de Acendimento de Luzes</h1>");
    
    // Verifia a instrucao passada via get
    if (strcmp(params, "?led=on") == 0) {
      
      // Escreve o retorno na porta serial
      Serial.println("Led ligado");
      
      // Acende o led
      digitalWrite(outputPin, HIGH);
      
      // Escreve html e link de acao
      e.print("As luzes estao ligadas. <br>");
      e.print("<a href='?led=off'>Desligar</a>");
    } else {
      
      // Escreve o retorno na porta serial
      Serial.println("Led desligado");
      
      // Apaga o led
      digitalWrite(outputPin, LOW);
      
      // Escreve html e link de acao
      e.print("As luzes estao desligadas. <br>");
      e.print("<a href='?led=on'>Ligar</a>");
    }
    e.print("</body>");
    
    // Retorna o html
    e.respond();
    
  }
  
}
