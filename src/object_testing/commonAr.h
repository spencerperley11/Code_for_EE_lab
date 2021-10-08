#ifndef DIGITALPIN_H
#define DIGITALPIN_H
#pragma once

class DigitalPin{ 




    int pinNum;

 //   static int pinCount;

    public:
    DigitalPin(int pinNumC);
    void setPinNum(int n);
    int getPinNum();
    void turnOn();
    void turnOff();
    void blinkLight(int blinkLength);
    void alocatePin();
    //int getPinCount(void);


};
#endif