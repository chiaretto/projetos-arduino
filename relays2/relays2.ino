// Programa de teste do modulo rele
// Autor : Arduino e Cia.
//
// Ligar o pino S do rele no pino 7 do Arduino
// Ligar o pino + do rele no pino 5V do Arduino
// Ligar o pino - do rele no pino GND do Arduino

int sinalparaorele1 = 9; //define a saida a ser utilizada para o acionamento do rele
int sinalparaorele2 = 8;
int sinalparaorele3 = 7;
int sinalparaorele4 = 6;

int sinalparaorele5 = 5;
int sinalparaorele6 = 4;
int sinalparaorele7 = 3;
int sinalparaorele8 = 2;
int tempo = 1000;

void setup()
{
  pinMode(sinalparaorele1, OUTPUT); //Define o pino como saida
  pinMode(sinalparaorele2, OUTPUT); //Define o pino como saida
  pinMode(sinalparaorele3, OUTPUT); //Define o pino como saida
  pinMode(sinalparaorele4, OUTPUT); //Define o pino como saida
  
  pinMode(sinalparaorele5, OUTPUT); //Define o pino como saida
  pinMode(sinalparaorele6, OUTPUT); //Define o pino como saida
  pinMode(sinalparaorele7, OUTPUT); //Define o pino como saida
  pinMode(sinalparaorele8, OUTPUT); //Define o pino como saida
}

void loop()
{
  digitalWrite(sinalparaorele1, HIGH); //Aciona o rele
  delay(tempo); //Aguarda 5 segundos
  digitalWrite(sinalparaorele2, HIGH); //Aciona o rele
  delay(tempo); //Aguarda 5 segundos
  digitalWrite(sinalparaorele3, HIGH); //Aciona o rele
  delay(tempo); //Aguarda 5 segundos
  digitalWrite(sinalparaorele4, HIGH); //Aciona o rele
  delay(tempo); //Aguarda 5 segundos
  digitalWrite(sinalparaorele5, HIGH); //Aciona o rele
  delay(tempo); //Aguarda 5 segundos
  digitalWrite(sinalparaorele6, HIGH); //Aciona o rele
  delay(tempo); //Aguarda 5 segundos
  digitalWrite(sinalparaorele7, HIGH); //Aciona o rele
  delay(tempo); //Aguarda 5 segundos
  digitalWrite(sinalparaorele8, HIGH); //Aciona o rele
  delay(tempo); //Aguarda 5 segundos
  
  digitalWrite(sinalparaorele1, LOW); //Desliga o rele
  delay(tempo); //Aguarda 5 segundos e reinicia o processo
  digitalWrite(sinalparaorele2, LOW); //Desliga o rele
  delay(tempo); //Aguarda 5 segundos e reinicia o processo
  digitalWrite(sinalparaorele3, LOW); //Desliga o rele
  delay(tempo); //Aguarda 5 segundos e reinicia o processo
  digitalWrite(sinalparaorele4, LOW); //Desliga o rele
  delay(tempo); //Aguarda 5 segundos e reinicia o processo
  digitalWrite(sinalparaorele5, LOW); //Desliga o rele
  delay(tempo); //Aguarda 5 segundos e reinicia o processo
  digitalWrite(sinalparaorele6, LOW); //Desliga o rele
  delay(tempo); //Aguarda 5 segundos e reinicia o processo
  digitalWrite(sinalparaorele7, LOW); //Desliga o rele
  delay(tempo); //Aguarda 5 segundos e reinicia o processo
  digitalWrite(sinalparaorele8, LOW); //Desliga o rele
  delay(tempo); //Aguarda 5 segundos e reinicia o processo
}

