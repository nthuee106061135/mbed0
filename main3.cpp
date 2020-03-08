#include "mbed.h"


DigitalOut redLED(LED_RED);

DigitalOut greenLED(LED_GREEN);


int ledred(DigitalOut& ledpin);
int ledgre(DigitalOut& ledpin);


int main()

{

   redLED = 1;

   greenLED = 1;

   while (true) {

       ledred(redLED);

       ledgre(greenLED);

   }

}