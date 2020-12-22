/*
    ducoEspApi.h - Library for interacting with Duino-Coin with Espressif Esp8266 boards
    Created by phantom32
    Distributed under MIT License
    https://github.com/phantom32-0/ducoEspApi
*/
#ifndef ducoEspApi_h
#define ducoEspApi_h

#include "Arduino.h"
#include "ESP8266Wifi.h"

class ducoEspApi{
    public:
        ducoEspApi();
        bool begin(char[] username, char[] password);
        float balance();
        bool sendFunds(char[] recipient, float amount);
        bool end();
    private:
        char[] _username;
        char[] _password;
};
#endif
