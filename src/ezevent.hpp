#ifndef __EZEVENT_HPP__
#define __EZEVENT_HPP__

#include <SDL.h>
#include <SDL_image.h>

#include <cstring>
#include <string>
using namespace std;

class event
{
    private:
        SDL_Event mEvent;
        SDL_Event* mPEvent;
        bool mA,mB,mC,mD,mE,mF,mG,mH,mI,mJ,mK,mL,mM,mN,mO,mP,mQ,mR,mS,mT,mU,mV,mW,mX,mY,mZ;


        
    public:
        event();
        bool eventQuit(void);
        bool key(string s);
        void readEvent(void);
};





#endif // __EZEVENT_HPP__