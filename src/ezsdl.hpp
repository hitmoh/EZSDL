#ifndef __EZSDL_HPP__
#define __EZSDL_HPP__
#include <SDL.h>
#include <stdlib.h>
#include <SDL_image.h>
#include <cstring>
#include <string>
#include <iostream>

 class window
{
    private:
        SDL_Window* mWind = NULL;
        SDL_Renderer* mRen = NULL;
        SDL_Event mEv;
        void testError(void);
        

    public:
        window();
        window(std::string);
        window(std::string,int,int,int,int);
        ~window();
        void refresh();
        SDL_Renderer* getRenderer(void);
        SDL_Window* getWind(void);
        void getEvent(void);
};


//-----------------------------------------
void delay(int d = 1000);
void fps(unsigned int);






#endif