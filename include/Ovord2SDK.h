#ifndef Ovord2SDK_h
#define Ovord2SDK_h
#include <Arduino.h>
#include <HTTPClient.h>
#include <WiFiClientSecure.h>
#include <ArduinoJson.h>

class Ovord2SDK {
    private:
        const char *shortName;
        const char *token;
        const char *rootCACertificate;
    
    public: 
        Ovord2SDK(char *shortName, char *token);
        void sendData(String sensors[], float values[]);
};

#endif