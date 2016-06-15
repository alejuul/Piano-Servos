#include<Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;
int pos = 90;
int pos2 = 120;
int pos3 = 50;
int counter = 0;


const int button1Pin = 2;  // pushbutton 1 pin


void setup()
{
  pinMode(button1Pin, INPUT);
  s1.attach(13); 
  s2.attach(12);
  s3.attach(11);
  s4.attach(10);
  s5.attach(9);
  s6.attach(8); 
}


void loop()
{
  int button1State;  // variables to hold the pushbutton states

  button1State = digitalRead(button1Pin);

  if (button1State == LOW) {              // if we're pushing button 1  
    counter = counter+1;
    delay(500);
  }


  if (counter%30 == 0)
  {
    s1.write(pos);
    s2.write(pos);
    s3.write(pos);
    s4.write(pos);
    s5.write(pos);
    s6.write(pos);
  }

  
  if (counter%30 == 1)                                                 
  {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);      
  }

   if (counter%30 == 2)                                                 
  {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);      
  }

   if (counter%30 == 3)                                                 
  {
      s2.write(pos3);
      s3.write(pos3);
      s4.write(pos);
      s5.write(pos2);
      s6.write(pos);      
  }

   if (counter%30 == 4)                                                 
  {
      s2.write(pos);
      s3.write(pos2);
      s4.write(pos2);
      s5.write(pos3);
      s6.write(pos);      
  }

   if (counter%30 == 5)                                                 
  {
      s2.write(pos);
      s3.write(pos3);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos2);      
  }

   if (counter%30 == 6)                                                 
  {
       s2.write(pos);
      s3.write(pos3);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos2);   
  }

  if (counter%30 == 7)                                                 
  {
      s2.write(pos);
      s3.write(pos2);
      s4.write(pos2);
      s5.write(pos3);
      s6.write(pos);      
  }

   if (counter%30 == 8)                                                 
  {
      s2.write(pos3);
      s3.write(pos3);
      s4.write(pos);
      s5.write(pos2);
      s6.write(pos);     
  }

  if (counter%30 == 9)                                                 
  {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);   
  }

  if (counter%30 == 10)                                                 
  {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);    
  }

  if (counter%30 == 11)
  {
      s2.write(pos3);
      s3.write(pos3);
      s4.write(pos);
      s5.write(pos2);
      s6.write(pos);      
  }

  if (counter%30 == 12)
  {
      s2.write(pos);
      s3.write(pos2);
      s4.write(pos2);
      s5.write(pos3);
      s6.write(pos);      
  }

  if (counter%30 == 13)
  {
      s2.write(pos);
      s3.write(pos2);
      s4.write(pos2);
      s5.write(pos3);
      s6.write(pos);      
  }

  if (counter%30 == 14)
  {
      s2.write(pos3);
      s3.write(pos3);
      s4.write(pos);
      s5.write(pos2);
      s6.write(pos);      
  }

  if (counter%30 == 15)
  {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);      
  }
  
  if (counter%30 == 16)
  {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);      
  }

  if (counter%30 == 17)
  {
      s2.write(pos3);
      s3.write(pos3);
      s4.write(pos);
      s5.write(pos2);
      s6.write(pos);      
  }

  if (counter%30 == 18)
  {
      s2.write(pos);
      s3.write(pos2);
      s4.write(pos2);
      s5.write(pos);
      s6.write(pos2);
  }

  if (counter%30 == 19)
  {
      s2.write(pos);
      s3.write(pos3);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos2);      
  }

  if (counter%30 == 20)
  {
      s2.write(pos);
      s3.write(pos3);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos2);      
  }

  if (counter%30 == 21)
  {
      s2.write(pos);
      s3.write(pos2);
      s4.write(pos2);
      s5.write(pos3);
      s6.write(pos);      
  }

  if (counter%30 == 22)
  {
      s2.write(pos3);
      s3.write(pos3);
      s4.write(pos);
      s5.write(pos2);
      s6.write(pos);      
  }


  if (counter%30 == 23)
  {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);      
  }


  if (counter%30 == 24)
  {
      s2.write(pos);
      s3.write(pos2);
      s4.write(pos2);
      s5.write(pos2);
      s6.write(pos);
  }

  if (counter%30 == 25)
  {
      s2.write(pos3);
      s3.write(pos3);
      s4.write(pos);
      s5.write(pos2);
      s6.write(pos);      
  }

  if (counter%30 == 26)
    {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);      
  }

  if (counter%30 == 27)
  {
      s1.write(pos3);
      s2.write(pos3);
      s3.write(pos);
      s4.write(pos2);
      s5.write(pos);
      s6.write(pos);
  }

  if (counter%30 == 28)
  {
      s2.write(pos3);
      s3.write(pos3);
      s4.write(pos);
      s5.write(pos2);
      s6.write(pos);      
  }

  if (counter%30 == 29)
  {
      s2.write(pos2);
      s3.write(pos2);
      s4.write(pos3);
      s5.write(pos);
      s6.write(pos);      
  }

}   
