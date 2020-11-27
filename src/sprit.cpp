#include "sprit.hpp"





sprit::sprit(SDL_Renderer *rend,string im0,string im1,string im2,string im3,string im4,string im5,string im6,string im7)
{
    this->mSec = 0;    
         
    this->sp[0].setImages(im0,rend);

    this->sp[1].setImages(im1,rend);

    this->sp[2].setImages(im2,rend);

    this->sp[3].setImages(im3,rend);

    this->sp[4].setImages(im4,rend);

    this->sp[5].setImages(im5,rend);
    
    this->sp[6].setImages(im6,rend);
    
    this->sp[7].setImages(im7,rend);
         
         
         
}
//-----------------------------------------------

void sprit::setPosy(int x ,int y)
{
      switch (this->mSec)
      {
            case 0:
                this->sp[0].setPosy(x,y);
                break;
            case 1:
                this->sp[1].setPosy(x,y);
                break;
            case 2:
                this->sp[2].setPosy(x,y);
                break;
            case 3:
                this->sp[3].setPosy(x,y);
                break;
            case 4:
                this->sp[4].setPosy(x,y);
                break;
            case 5:
                this->sp[5].setPosy(x,y);
                break;
            case 6:
                this->sp[6].setPosy(x,y);
                break;
            case 7:
                this->sp[7].setPosy(x,y);
                break;
            default:
                break;

         
             
      }

      this->mSec ++;

       if(this->mSec >7)
        this->mSec = 0;
    
}