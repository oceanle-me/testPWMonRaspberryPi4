#include <iostream>		// Include all needed libraries here
#include <wiringPi.h>
#include <unistd.h>

//using namespace std;		// No need to keep using “std”
unsigned int prevTime;		// Temporary variable that holds the previous millis value
/*
int main()
{
wiringPiSetup();			// Setup the library
pinMode(1, PWM_OUTPUT);		// Configure GPIO1 as an output for PWM

// Main program loop

	for(int i = 0; i < 1024; i++)
	{
		pwmWrite(1, i);
		delayMicroseconds(100);
	}
delayMicroseconds(10000);

return 0;
}*/

#include <wiringPi.h>
int main (void)
{
    const int _PIN = 21;
    std::cout << "Hello World!";
    wiringPiSetup () ;
    sleep(3);

    std::cout << "Hello World!";

 pinMode (_PIN, OUTPUT) ;
 digitalWrite (_PIN, HIGH);
//  delay (5) ;
/*
  for (;;)
  {
    digitalWrite (_PIN, HIGH) ; delay (5000) ;
    digitalWrite (_PIN, LOW) ; delay (5000) ;
    printf("gfdg");
    std::cout << "Hello World!";
  }
    //while(1);*/
 /*   for (int i=1;i<5;i++){
          std::cout << i;
          delay (5000);
    }*/

  return 0 ;
}
