// C++ code
//
void setup(){


    
// PWM IN NON INVERTING CONFIG 
    TCCR1A |= (1<<COM1A1);
  
  	DDRB = 0b00000010; //set d9 as output
  
  
  
}

void loop(){
  
  for (int i=0;255;i++){
  	OCR1A = i;
  }
  
  

} 
  
