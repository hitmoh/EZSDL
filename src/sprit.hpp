#ifndef __SPRIT_HPP__
#define __SPRIT_HPP__
#include "images.hpp"


class sprit
{
    private:
        images sp[8];
        int mSec;
    public:
        sprit(SDL_Renderer*,string,string,string,string,string,string,string,string);
        void setPosy(int,int);


};






#endif