#if defined(__AVR__)
    #include <avr/pgmspace.h>
#elif defined(__PIC32MX__)
    #define PROGMEM
#elif defined(__arm__)
    #define PROGMEM
#endif



const int imageWidth = 128;
const int imageHeight = 96;




const unsigned short smiley48[12288] PROGMEM={........}; //YOUR OWN IMAGE!















