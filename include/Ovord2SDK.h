#ifndef Ovord2SDK_h
#define Ovord2SDK_h
#include <Arduino.h>

class Ovord2SDK {
    private:
        char *shortName;
        char *token;
        char *rootCACertificate;
    
    public: 
        Ovord2SDK(char *shortName, char *token);
        void Ovord2SDK::sendData(String sensors[], float values[]);
};

#endif