int LED[] = {2,3,4,5,6};


void setup(){
   for (int i = 0;i<5; i ++){
     pinMode(LED[i], OUTPUT);
   }
}

void loop() {  
  for (int i = 0; i <5; i ++)  {      
    
    digitalWrite(LED[i], HIGH);
    digitalWrite(LED[4-i], HIGH);    
    delay(600- i*100); 
    digitalWrite(LED[i], LOW);
    digitalWrite(LED[4-i], LOW);  

   } 
}
  
  
