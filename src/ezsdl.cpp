#include "ezsdl.hpp"
/*############################################################
                        CONSTRUCTORS
############################################################*/
window::window()
{
    SDL_Init(SDL_INIT_VIDEO);
    this->mWind = SDL_CreateWindow("games",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,640,480,SDL_WINDOW_OPENGL);
    
    if (this->mWind == NULL)
    {
        std::cout<< " window non creer"<<std::endl;
    }

    /*this->mRen = SDL_CreateRenderer(this->mWind,-1,SDL_RENDERER_ACCELERATED);

    if(this->mRen == NULL)
    {
        std::cout<<"rendererr non creer"<<std::endl;
    }
*/
}
//--------------------------------------------------------------
window::window(std::string t,int x,int y,int w,int h)
{
    char targ[t.size() + 1];
    strcpy(targ,t.c_str());

    SDL_Init(SDL_INIT_VIDEO);
    this->mWind = SDL_CreateWindow(targ,x,y,w,h,SDL_WINDOW_OPENGL);
    
    //this->mRen = SDL_CreateRenderer(this->mWind,-1,SDL_RENDERER_ACCELERATED);




if (this->mWind == NULL)
    {
        std::cout<< " window non creer"<<std::endl;
    }

        /*if(this->mRen == NULL)
    {
        std::cout<<"rendererr non creer"<<std::endl;
    }*/
}
//--------------------------------------------------------------
window::window(std::string t)
{
    char targ[t.size() + 1];
    strcpy(targ,t.c_str());

    SDL_Init(SDL_INIT_VIDEO);
        this->mWind = SDL_CreateWindow(targ,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,640,480,SDL_WINDOW_OPENGL);
    
    this->mRen = SDL_CreateRenderer(this->mWind,-1,SDL_RENDERER_ACCELERATED);

if (this->mWind == NULL)
    {
        std::cout<< " window non creer"<<std::endl;
    }
    else
    {
        std::cout<< " window  creer"<<std::endl;
    }
    

        if(this->mRen == NULL)
    {
        std::cout<<"rendererr non creer"<<std::endl;
    }
}

/*############################################################
                        destrctors
############################################################*/

window::~window()
{
    SDL_DestroyRenderer(this->mRen);
    std::cout<< " window detruit"<<std::endl;
    SDL_DestroyWindow(this->mWind);
    SDL_Quit();
    
}
/*############################################################
                        methods
############################################################*/
void window::refresh(void)
{   
    
    SDL_RenderPresent(this->mRen);
    SDL_RenderClear(this->mRen);
}
//------------------------------------------------------------
void window::testError(void)
{
    if(this->mWind == NULL)
    {
        SDL_Quit();
    }
    else{
        if(this->mRen == NULL)
        {   
            SDL_DestroyWindow(this->mWind);
            SDL_Quit();

        }
    }
}
//------------------------------------------------------------
SDL_Renderer* window::getRenderer(void)
{
    if(this->mRen != NULL)
        {
            return this->mRen;
        }
    else
        {
            return NULL;
        }
    
}
//------------------------------------------------------------
SDL_Window* window::getWind(void)
{
    return this->mWind;
}
//------------------------------------------------------------
void window::getEvent(void)
{
    SDL_PollEvent(&(this->mEv));
}



/*############################################################
                        other
############################################################*/
void delay(int d)
{
    SDL_Delay(d);
}
//------------------------------------------------------------
void fps(unsigned int limit)
{
    unsigned int ticks = SDL_GetTicks();
    if(limit < ticks)
        return;
    else if(limit > ticks + 16)
    delay(16);
    else
    delay(limit - ticks);
    
}

