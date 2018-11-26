#define two 2                     // digital pin 2 , now be called as "two"
#define seven 3
#define five 4
#define three 5
#define one 6
#define six 7
#define nine 8
#define ten 9
#define eight 10
#define four 11
  
void setup()                                  
{
  pinMode (one, OUTPUT);               //we are telling the arduino that arduino have to give output to "one" named pin
  pinMode (two, OUTPUT);
  pinMode (three, OUTPUT);
  pinMode (four, OUTPUT);
  pinMode (five, OUTPUT);
  pinMode (six, OUTPUT);
  pinMode (seven, OUTPUT);
  pinMode (eight, OUTPUT);
  pinMode (nine, OUTPUT);
  pinMode (ten, OUTPUT);
  Serial.begin(9600);             // initialising the serial communication
}

void loop() {

         Serial.println(" ENTER THE STRING ");                  //we are asking for the input from the user
          while (Serial.available()==0){}                   // this is an infinite loop unless user give the input
          String val = Serial.readString();                 //reading and storing the data in a string from serial communication (in our case,BLUETOOTH), 
          Serial.println(val.charAt(0));

for (int i=0; i<24; i++){  
   
if (val.charAt(i)=='a')                                     
a();     
if (val.charAt(i)=='b')
b();
if (val.charAt(i)=='c')
c();
if (val.charAt(i)=='d')
d();
if (val.charAt(i)=='e')
e();
if (val.charAt(i)=='f')
f();
if (val.charAt(i)=='g')
g();
if (val.charAt(i)=='h')
h();
if (val.charAt(i)=='i')
ij();
if (val.charAt(i)=='j')
j();
if (val.charAt(i)=='l')
l();
if (val.charAt(i)=='m')
m();
if (val.charAt(i)=='o')
o();
if (val.charAt(i)=='p')
p();
if (val.charAt(i)=='q')
q();
if (val.charAt(i)=='r')
r();
if (val.charAt(i)=='s')
s();
if (val.charAt(i)=='t')
t();
if (val.charAt(i)=='u')
{u();}
if (val.charAt(i)=='w')
{w();}
if (val.charAt(i)=='y')
{y();}
 delay (750);
 no();
 delay(250);
 if (val.charAt(i)==' ')
 delay(500);
}
}


void a()                        {
  digitalWrite(one,HIGH);
  digitalWrite(two,HIGH);
  digitalWrite(four,HIGH);
  digitalWrite(five,HIGH);
  digitalWrite(six,HIGH);
  digitalWrite(seven,HIGH);
  digitalWrite(eight,HIGH);
  digitalWrite (nine, LOW);
  digitalWrite (ten, LOW);
   digitalWrite (three, LOW);}
void b()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, HIGH);
  digitalWrite (six, HIGH);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);  
  digitalWrite (ten, LOW);}
void c()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, LOW);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, LOW);
  digitalWrite (nine, HIGH);
  digitalWrite (ten, LOW);;       }
void d()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five,LOW );
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);
  digitalWrite (ten, LOW);       }
void e()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, LOW);
  digitalWrite (five, HIGH);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, LOW);
  digitalWrite (nine, HIGH);
  digitalWrite (ten, LOW);}
void f()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, LOW);
  digitalWrite (five, HIGH);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, LOW);
  digitalWrite (nine, LOW);
  digitalWrite (ten, LOW);}
void g()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, LOW);
  digitalWrite (five, LOW);
  digitalWrite (six, HIGH);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH); 
  digitalWrite (ten, LOW);   }
void h()                        {
  digitalWrite (one, LOW);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, HIGH);
  digitalWrite (six, HIGH);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, LOW);  
  digitalWrite (ten, LOW);   }
void ij()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, LOW);
  digitalWrite (three, HIGH);
  digitalWrite (four, LOW);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, LOW);
  digitalWrite (eight, LOW);
  digitalWrite (nine, HIGH); 
  digitalWrite (ten, LOW);    }
void j()                        {
  digitalWrite (one, LOW);
  digitalWrite (two, LOW);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);  
  digitalWrite (ten, LOW);   }
void l()                        {
  digitalWrite (one, LOW);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, LOW);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, LOW);
  digitalWrite (nine, HIGH); 
  digitalWrite (ten, LOW);    }
void m()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, HIGH);
  digitalWrite (four, HIGH);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, LOW);   
  digitalWrite (ten, LOW);    }
void o()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);   
   digitalWrite (ten, LOW); }
void p()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, HIGH);
  digitalWrite (six, HIGH);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, LOW);
  digitalWrite (nine, LOW);   
  digitalWrite (ten, LOW);   }
void q()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);   
   digitalWrite (ten, HIGH); }
   void r()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, HIGH);
  digitalWrite (six, HIGH);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, LOW);
  digitalWrite (nine, LOW);   
  digitalWrite (ten, HIGH);   }
void s()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, LOW);
  digitalWrite (five, HIGH);
  digitalWrite (six, HIGH);
  digitalWrite (seven, LOW);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);  
  digitalWrite (ten, LOW);       }
void t()                        {
  digitalWrite (one, HIGH);
  digitalWrite (two, LOW);
  digitalWrite (three, HIGH);
  digitalWrite (four, LOW);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, LOW);
  digitalWrite (eight, LOW);
  digitalWrite (nine, LOW);      
  digitalWrite (ten, LOW);     }
void u()                        {
  digitalWrite (one, LOW);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);   
  digitalWrite (ten, LOW);      }

  void v()                        {
  digitalWrite (one, LOW);
  digitalWrite (two, LOW);
  digitalWrite (three, LOW);
  digitalWrite (four, LOW);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, LOW);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, LOW);   
  digitalWrite (ten, HIGH);      }


void w()                        {
  digitalWrite (one, LOW);
  digitalWrite (two, HIGH);
  digitalWrite (three, HIGH);
  digitalWrite (four, HIGH);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, HIGH);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);    
  digitalWrite (ten, LOW);     }
void y()                        {
  digitalWrite (one, LOW);
  digitalWrite (two, HIGH);
  digitalWrite (three, LOW);
  digitalWrite (four, HIGH);
  digitalWrite (five, HIGH);
  digitalWrite (six, HIGH);
  digitalWrite (seven, LOW);
  digitalWrite (eight, HIGH);
  digitalWrite (nine, HIGH);   
  digitalWrite (ten, LOW); }
void no()                        {
  digitalWrite (one, LOW);
  digitalWrite (two, LOW);
  digitalWrite (three, LOW);
  digitalWrite (four, LOW);
  digitalWrite (five, LOW);
  digitalWrite (six, LOW);
  digitalWrite (seven, LOW);
  digitalWrite (eight, LOW);
  digitalWrite (nine, LOW);
  digitalWrite (ten, LOW);    

}
