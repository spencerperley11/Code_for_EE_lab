#include "commonAr.h"



    DigitalPin::DigitalPin(int pinNumC){

        pinNum =pinNumC;

        //pinCount++;


    }

    void DigitalPin::setPinNum(int n){pinNum=n;}

    int DigitalPin::getPinNum(){ return(pinNum);}

    void DigitalPin::turnOn(){
        digitalWrite(pinNum,HIGH);
    }

    void DigitalPin::turnOff(){
        digitalWrite(pinNum,LOW);
    }

    void DigitalPin::blinkLight(int blinkLength){
        digitalWrite(pinNum,HIGH);
        delay(blinkLength/2);
        digitalWrite(pinNum,LOW);
        delay(blinkLength/2);
    }

    void DigitalPin::alocatePin(){
        pinMode(pinNum,OUTPUT);
    }

    //int DigitalPin::getPinCount(void){return(pinCount);}
