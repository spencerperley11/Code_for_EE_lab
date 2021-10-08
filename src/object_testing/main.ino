#include "commonAr.h"

DigitalPin light(8);

int a = 1;

void setup() // This is the function to settup the arduino 
{
    light.alocatePin(); 
	Serial.begin(9600); // Initiation of the built-in led on pin 13 as an output    
	
} // End brakets indicate end of settup function 

void loop()  // Start the main loop
{
 
    light.blinkLight(10000); // Set pin 13 to HIGH (5v) 
	Serial.println("yoooooo");

	

} // End the main loop 

