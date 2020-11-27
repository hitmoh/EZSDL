#include "images.hpp"
#include <SDL.h>
#include <stdlib.h>
#include <SDL_image.h>
#include <string>
#include <cstring>


using namespace std;


images::images()
{

}
//--------------------------------------------------------
images::images(string imageSource, SDL_Renderer *rend)
{
    this->mRen = rend;
    this->enable(imageSource);
}
//--------------------------------------------------------
images::~images()
{
    if(this->mSur != NULL)
    {
        SDL_FreeSurface(this->mSur);
        
    }

}
//--------------------------------------------------------

void images::enable(string imageSource)
{
    char targ[imageSource.size() + 1];
    strcpy(targ,imageSource.c_str());
this->mSur = IMG_Load(targ);

    if(this->mSur == NULL)
    {
        
        cout<<"error surface non charger"<<endl;
    }
    else
    {
        cout<<"surface charger"<<endl;
    }
    
this->mTex = SDL_CreateTextureFromSurface(this->mRen,this->mSur);

if(this->mTex == NULL)
    cout<<"texture non creer"<<endl;
    else
    {
        cout<<"texture creer"<<endl;
    }
    

SDL_FreeSurface(this->mSur);


    









}
//-----------------------------------------------------------
void images::setPosy(int x , int y)
{
    this->mRect.x = x;
    this->mRect.y = y;
    cout<<"position a etait regler"<<endl;





SDL_QueryTexture(this->mTex,NULL,NULL,&this->mRect.w,&this->mRect.h);

if(this->mTex == NULL)
    cout<<"image non charger"<<endl;
    else
    cout<<"image charger"<<endl;
    



    int stat = SDL_RenderCopy(this->mRen,this->mTex,NULL,&(this->mRect));

if(stat == 0)
{
    cout<<"render copier"<<endl;
}
else
{
    cout<<"render non copier"<<endl;
}
}
//-----------------------------------------------------------
SDL_Texture* images::getTexture(void)
{
    return this->mTex;
}
//-----------------------------------------------------------
SDL_Rect* images::getRectAdd(void)
{
    SDL_Rect *R = &(this->mRect);
    return R;
}
//-----------------------------------------------------------
void images::draw()
{   
    SDL_RenderPresent(this->mRen);
    cout<<"render presenter"<<endl;
}
//------------------------------------------------------------
void images::clear(void)
{
    SDL_RenderClear(this->mRen);
}
//------------------------------------------------------------
void images::setImages(string name,SDL_Renderer* r)
{
        this->mRen = r;
        this->enable(name);
}