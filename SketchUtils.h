#ifndef SketchUtils_H
#define SketchUtils_H

#if defined(ARDUINO) && ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

class SketchUtils
{
    private:

	public:

    	SketchUtils(){};
	
        void blink(int ledPin, long millis);
        
        void hang();
        void hang(int ledPin);
    
        void setAsInput(int size, int leds[]);
        void setAsOutput(int size, int leds[]);      
    
    private:
         void setPinMode(int size, int leds[], int mode);
		
};

extern SketchUtils sketchUtils;

#endif
