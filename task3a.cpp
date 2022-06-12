// C++ code
//
void setup(){

  	DDRB = 0b00000010; //set d9 as output
  
  
  
}

void loop(){
  
  int d;
  for(d=0;d<=100;d++){

    PORTB = 0b00000010;
    delay(d);
    PORTB = 0b00000000;
    delay(100-d);
  }
  

} 
  


  
