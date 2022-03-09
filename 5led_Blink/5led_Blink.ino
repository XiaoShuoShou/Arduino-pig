const int led1 = 13;
const int led2 = 13;
const int led3 = 13;
const int led4 = 13;
const int led5 = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
 
 digitalWrite(led1, HIGH);   
  delay(50);                     
  digitalWrite(led1, LOW);    
  delay(50); 
   digitalWrite(led2, HIGH);   
  delay(50);                     
  digitalWrite(led2, LOW);    
  delay(50); 
   digitalWrite(led3, HIGH);   
  delay(50);                     
  digitalWrite(led3, LOW);    
  delay(50); 
   digitalWrite(led4, HIGH);   
  delay(50);                     
  digitalWrite(led4, LOW);    
  delay(50); 
   digitalWrite(led5, HIGH);   
  delay(50);                     
  digitalWrite(led5, LOW);    
  delay(50);                      
}
