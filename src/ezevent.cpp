#include "ezevent.hpp"

event::event()
{
    this->mPEvent = &(this->mEvent);
    this->mA = false;
    this->mB = false;
    this->mC = false;
    this->mD = false;
    this->mE = false;
    this->mF = false;
    this->mG = false;
    this->mH = false;
    this->mI = false;
    this->mJ = false;
    this->mK = false;
    this->mL = false;
    this->mM = false;
    this->mN = false;
    this->mO = false;
    this->mP = false;
    this->mQ = false;
    this->mR = false;
    this->mS = false;
    this->mT = false;
    this->mU = false;
    this->mV = false;
    this->mW = false;
    this->mX = false;
    this->mY = false;
    this->mZ = false;
}

void event::readEvent(void)
{
    SDL_PollEvent(this->mPEvent);

    if(this->mEvent.type == SDL_KEYDOWN)
        switch (this->mEvent.key.keysym.sym)
        {
            case SDLK_a:
                this->mA = true;
                break;
            case SDLK_b:
                this->mB = true;
                break;
            case SDLK_c:
                this->mC = true;
                break;
            case SDLK_d:
                this->mD = true;
                break;
            case SDLK_e:
                this->mE = true;
                break;
            case SDLK_f:
                this->mF = true;
                break;
            case SDLK_g:
                this->mG = true;
                break;
            case SDLK_h:
                this->mH = true;
                break;
            case SDLK_i:
                this->mI = true;
                break;
            case SDLK_j:
                this->mJ = true;
                break;
            case SDLK_k:
                this->mK = true;
                break;
            case SDLK_l:
                this->mL = true;
                break;
            case SDLK_m:
                this->mM = true;
                break;
            case SDLK_n:
                this->mN = true;
                break;
            case SDLK_o:
                this->mO = true;
                break;
            case SDLK_p:
                this->mP = true;
                break;
            case SDLK_q:
                this->mQ = true;
                break;
            case SDLK_r:
                this->mR = true;
                break;
            case SDLK_s:
                this->mS = true;
                break;
            case SDLK_t:
                this->mT = true;
                break;
            case SDLK_u:
                this->mU = true;
                break;
            case SDLK_v:
                this->mV = true;
                break;
            case SDLK_w:
                this->mW = true;
                break;
            case SDLK_x:
                this->mX = true;
                break;
            case SDLK_y:
                this->mY = true;
                break;
            case SDLK_z:
                this->mZ = true;
                break;
                    
            default:
                break;
        }


    if(this->mEvent.type == SDL_KEYUP)
        switch (this->mEvent.key.keysym.sym)
        {
             case SDLK_a:
                this->mA = false;
                break;
            case SDLK_b:
                this->mB = false;
                break;
            case SDLK_c:
                this->mC = false;
                break;
            case SDLK_d:
                this->mD = false;
                break;
            case SDLK_e:
                this->mE = false;
                break;
            case SDLK_f:
                this->mF = false;
                break;
            case SDLK_g:
                this->mG = false;
                break;
            case SDLK_h:
                this->mH = false;
                break;
            case SDLK_i:
                this->mI = false;
                break;
            case SDLK_j:
                this->mJ = false;
                break;
            case SDLK_k:
                this->mK = false;
                break;
            case SDLK_l:
                this->mL = false;
                break;
            case SDLK_m:
                this->mM = false;
                break;
            case SDLK_n:
                this->mN = false;
                break;
            case SDLK_o:
                this->mO = false;
                break;
            case SDLK_p:
                this->mP = false;
                break;
            case SDLK_q:
                this->mQ = false;
                break;
            case SDLK_r:
                this->mR = false;
                break;
            case SDLK_s:
                this->mS = false;
                break;
            case SDLK_t:
                this->mT = false;
                break;
            case SDLK_u:
                this->mU = false;
                break;
            case SDLK_v:
                this->mV = false;
                break;
            case SDLK_w:
                this->mW = false;
                break;
            case SDLK_x:
                this->mX = false;
                break;
            case SDLK_y:
                this->mY = false;
                break;
            case SDLK_z:
                this->mZ = false;
                break;
                    
            default:
                break;
        }



}


bool event::eventQuit(void)
{

        if(this->mEvent.type == SDL_QUIT)
            return false;
        else
            return true;

}


bool event::key(string s)
{
    if(s == "a")
        return this->mA;
    if(s == "b")
        return this->mB;
    if(s == "c")
        return this->mC;
    if(s == "d")
        return this->mD;
    if(s == "e")
        return this->mE;
    if(s == "f")
        return this->mF;
    if(s == "g")
        return this->mG;
    if(s == "h")
        return this->mH;
    if(s == "i")
        return this->mI;
    if(s == "j")
        return this->mJ;
    if(s == "k")
        return this->mK;
    if(s == "l")
        return this->mL;
    if(s == "m")
        return this->mM;
    if(s == "n")
        return this->mN;
    if(s == "o")
        return this->mO;
    if(s == "p")
        return this->mP;
    if(s == "q")
        return this->mQ;
    if(s == "r")
        return this->mR;
    if(s == "s")
        return this->mS;
    if(s == "t")
        return this->mT;
    if(s == "u")
        return this->mU;
    if(s == "v")
        return this->mV;
    if(s == "w")
        return this->mW;
    if(s == "x")
        return this->mX;
    if(s == "y")
        return this->mY;
    if(s == "z")
        return this->mZ;
        
    




    return false;

  
}