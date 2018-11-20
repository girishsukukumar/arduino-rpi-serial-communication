


void setup() 
{
  Serial.begin(9600); //Baud rate: 9600
  pinMode(13, OUTPUT);
  


}
void loop() 
{

  byte val,x ;
  
  x = Serial.available();
      
  if ( x!= 0 )
  {
    val = Serial.read();
    switch(val)
    {
        case '1' : {
                      Serial.println("Received option 1");
                      break ;
                   }
        case  '2' : {
                      Serial.println("Received option 2");
                      break ;
                    }
        case  '3' :{
                      Serial.println("Recieved option 3");           
                      break ;
                   }
        case  '4' :{
                      Serial.println("Recieved option 4");           
                      break ;
                   }
        case  '5' :{
                      Serial.println("Recieved option 5");           
                      break ;
                   }
        case  '6' :{
                      Serial.println("Recieved option 6");           
                      break ;
                   }
        case  '7' :{
                      Serial.println("Recieved option 7");           
                      break ;
                   }
        case  '8' :{
                      Serial.println("Recieved option 8");           
                      break ;
                   }
        case  '9' :{
                      digitalWrite(13, HIGH);
                      Serial.println("Recieved option 9")  ;         
                      delay(3000);
                      digitalWrite(13, LOW);
                      break ;
                   }                   
        default : {
                      digitalWrite(13, HIGH);
                      Serial.println(val);
                  }
    }
    
  } 

}
