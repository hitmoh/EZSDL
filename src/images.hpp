  #ifndef __IMAGE_HPP__
#define __IMAGE_HPP__
#include <SDL.h>
#include <stdlib.h>
#include <SDL_image.h>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;


class images 
{
    private: 
        SDL_Renderer* mRen = NULL;
        SDL_Surface* mSur = NULL;
        SDL_Texture* mTex = NULL;
        SDL_Rect mRect;


    public:
        images();
        images(string, SDL_Renderer*);
        ~images();
        void setImages(string,SDL_Renderer*);
        void enable(string imageSource);
        void setPosy(int x,int y);
        SDL_Texture* getTexture(void);
        SDL_Rect* getRectAdd(void);
        void draw();
        void clear();



};

#endif