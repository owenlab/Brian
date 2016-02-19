/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo1;  // create servo object to control a servo

Servo myservo2;  // create servo object to control a servo

Servo myservo3;  // create servo object to control a servo

Servo myservo4;  // create servo object to control a servo




void setup() {
  myservo1.attach(6);  // rigth ext pin 6
  myservo2.attach(7);  // right int pin 7
  myservo3.attach(8);  // left int pin 8
  myservo4.attach(9);  // left int pin 9
}

void loop() {

  // MOVE FRONTWARD

    myservo1.write(180);              
    myservo4.write(0);             
   delay(500);                       // waits 1sec to async the second servo
    myservo2.write(180);             
    myservo3.write(0);            
   delay(500); 

   
 }
  
/*

   delay(3000);                       // waits 3sec

    myservo1.write(90);              // STOP
    myservo2.write(90);              // STOP
    myservo3.write(90);              // STOP
    myservo4.write(90);              // STOP


      delay(3000);                       // waits 3sec



      

 // MOVE BACKWARD

   myservo1.write(0);              
    myservo4.write(180);             
   delay(500);                       // waits 1sec to async the second servo
    myservo2.write(0);             
    myservo3.write(180);            


   delay(3000);                       // waits 3sec

     myservo1.write(90);              // STOP
    myservo2.write(90);              // STOP
    myservo3.write(90);              // STOP
    myservo4.write(90);              // STOP


      delay(3000);                       // waits 3sec



       // MOVE RIGHT

     myservo1.write(180);              
    myservo4.write(180);             
   delay(500);                       // waits 1sec to async the second servo
    myservo2.write(0);             
    myservo3.write(0);            


   delay(3000);                       // waits 3sec

     myservo1.write(90);              // STOP
    myservo2.write(90);              // STOP
    myservo3.write(90);              // STOP
    myservo4.write(90);              // STOP


      delay(3000);                       // waits 3sec



       // MOVE LEFT

     myservo1.write(0);              
    myservo4.write(0);             
   delay(500);                       // waits 1sec to async the second servo
    myservo2.write(180);             
    myservo3.write(180);            


   delay(3000);                       // waits 3sec

     myservo1.write(90);              // STOP
    myservo2.write(90);              // STOP
    myservo3.write(90);              // STOP
    myservo4.write(90);              // STOP


      delay(3000);                       // waits 3sec


}



*/
