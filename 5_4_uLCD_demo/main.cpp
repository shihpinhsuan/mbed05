// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.background_color(0xFFFFFF);

    uLCD.color(BLUE);

    uLCD.printf("\n108061229\n"); //Default Green on black text

    uLCD.color(GREEN);

    for (int i=30; i>=0; --i) {

        uLCD.locate(1,2);

        uLCD.printf("%2d",i);

        ThisThread::sleep_for(1000ms);

    }

}
