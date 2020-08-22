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
  
  pinMode(sinalparaorele5, INPUT); //Define o pino como saida
  pinMode(sinalparaorele6, INPUT); //Define o pino como saida
  pinMode(sinalparaorele7, INPUT); //Define o pino como saida
  pinMode(sinalparaorele8, INPUT); //Define o pino como saida
}

void loop()
{
  if(digitalRead(sinalparaorele5)){
    digitalWrite(sinalparaorele1, HIGH); //Aciona o rele
  }else{
    digitalWrite(sinalparaorele1, LOW); //Aciona o rele
  }

  if(digitalRead(sinalparaorele6)){
     digitalWrite(sinalparaorele2, HIGH); //Aciona o rele
  }else{
    digitalWrite(sinalparaorele2, LOW); //Aciona o rele
  }

  if(digitalRead(sinalparaorele7)){
     digitalWrite(sinalparaorele3, HIGH); //Aciona o rele
  }else{
    digitalWrite(sinalparaorele3, LOW); //Aciona o rele
  }

  if(digitalRead(sinalparaorele8)){
    digitalWrite(sinalparaorele4, HIGH); //Aciona o rele
  }else{
    digitalWrite(sinalparaorele4, LOW); //Aciona o rele
  }  
  
  delay(tempo);
}

