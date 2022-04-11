#include <iostream>
#include <Python.h>
#include <stdio.h>
/*
using namespace std;

int main()
{
    	//PyObject* pInt;

	Py_Initialize();
	PyRun_SimpleString("print('Hello World from Embedded Python!!!')");
    PyRun_SimpleString("import RPi.GPIO as GPIO ");
   //PyRun_SimpleString("GPIO.setwarnings(False)");
    PyRun_SimpleString("GPIO.setmode(GPIO.BCM)");
    PyRun_SimpleString("GPIO.setup(12, GPIO.OUT)");

    PyRun_SimpleString("GPIO.output(12,GPIO.LOW) ");

    PyRun_SimpleString("pi_pwm = GPIO.PWM(12,1000)");
    PyRun_SimpleString("pi_pwm.start(100)");
 //   PyRun_SimpleString("pi_pwm.ChangeDutyCycle(80)");

  // char fewd[] ="GPIO.output(12,GPIO.HIGH ) ";
   fewd[20]='H';
    fewd[21]='I';
    fewd[22]='G';
    fewd[23]='H';
    PyRun_SimpleString("GPIO.output(12,GPIO.HIGH) ");
    PyRun_SimpleString(fewd);

   //  PyRun_SimpleString("GPIO.output(12,GPIO.HIGH) ");


	//Py_Finalize();
    cout << "Hello world!" << endl;
    printf("hehe");
    return 0;

}*/

int main(){
    Py_Initialize();
	PyRun_SimpleString("print('Hello World from Embedded Python ---- gpioZERO!!!\n')");
    PyRun_SimpleString("from gpiozero import LED, PWMLED ");
 //   PyRun_SimpleString("led = LED(12)");
  //  PyRun_SimpleString("led.on()");

    PyRun_SimpleString("led_red = PWMLED(12)");
    PyRun_SimpleString("led_red.value = 1");


  //  Py_Finalize();
  while(1);

return 0;
}
