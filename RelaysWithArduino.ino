int relay1 = 8;    //initialising digital pin no 8 for relay channel 1
int relay2 =9;     //initialising digital pin no 9 for relay channel 2

void setup() {
  pinMode (relay1, OUTPUT);        //we are using the pin as output
  pinMode (relay2, OUTPUT);         //we are using the pin as output
  Serial.begin(9600);              // initialising the serial communication
  

}

void loop() {

String y = Serial.readString();          //reading and storing the data from serial communication (in our case,BLUETOOTH), 
if (y=="red"){                           // checking whether it is equal to red or not,if it is equal to red then do the set of statements.
  digitalWrite(relay1, LOW);;            // we are giving output to relaych1 by statement digitalWrite.
digitalWrite(relay2, HIGH);              // In relay , HIGH means off and LOW means on
delay (1000);                            // so that relay1 is LOW and relay2 is HIGH for 1 sec.
                                         //delay take input in milliseconds , means 1000 as input is equal to 1 sec.
}
if (y=="purple"){
  digitalWrite(relay1, HIGH);           
  digitalWrite(relay2, LOW);;
delay (1000);
  
}
if (y=="both"){
  digitalWrite(relay1, LOW);;
digitalWrite(relay2, LOW);
delay (1000);
  
}
if (y=="none"){
  digitalWrite(relay1, HIGH);;
digitalWrite(relay2, HIGH);
delay (1000);
  
}

if (y=="1"){

  for( int k=0 ; k<100 ; k++){
digitalWrite(relay1, LOW);;
digitalWrite(relay2, HIGH);
delay (1000);
digitalWrite(relay1, LOW);;
digitalWrite(relay2, LOW);
delay (1000);
digitalWrite(relay1, HIGH);;
digitalWrite(relay2, LOW);
delay (1000);
digitalWrite(relay1, HIGH);;
digitalWrite(relay2, HIGH);
delay (1000);
  }
  
}



 




 

}
