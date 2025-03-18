#ifndef DIODE_H
#define DIODE_H
#include "Arduino.h"

class Diode
{
    public :
        Diode ( int pin );
        void oncourt ();
        void onlong ();
    private :
        int _pin ;
};

#endif