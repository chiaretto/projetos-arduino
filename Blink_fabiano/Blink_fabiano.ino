/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int delay_time = 200;
int limit = 200;
int frequencia = 10;
boolean diminuindo = true;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  if(delay_time<=frequencia){
    diminuindo = false;
  }
  if(delay_time>=limit){
   diminuindo = true; 
  }
  
  if(diminuindo){
    delay_time -= frequencia;
  }else{
    delay_time += frequencia;
  }
  
  
  Serial.println(delay_time);
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delay_time);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(delay_time);               // wait for a second
  
}
