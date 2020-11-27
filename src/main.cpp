#include <iostream>

#include <stdlib.h>

#include <string>
#include <cmath>
#include "ezsdl.hpp"
#include "images.hpp"
#include "ezevent.hpp"
#include "sprit.hpp"
#define PI 3.141591
using namespace std;





int main(int argc,char **argv)
{
	window wind("ceci est un titre test");
	//SDL_Event ev;
	event r;

	images p1("src/case.png",wind.getRenderer());
	//images p2("src/sqr.png",wind.getRenderer());
	sprit p(wind.getRenderer(),"src/sprite_player/walk/right_walk1.png","src/sprite_player/walk/right_walk2.png","src/sprite_player/walk/right_walk3.png","src/sprite_player/walk/right_walk4.png","src/sprite_player/walk/right_walk5.png","src/sprite_player/walk/right_walk6.png","src/sprite_player/walk/right_walk7.png","src/sprite_player/walk/right_walk8.png");
	
	int i = 0;
	int j = 0;

	
	unsigned int frame_limit = 0;

	
	
	while(r.eventQuit())
	{
	r.readEvent();
	//SDL_PollEvent(&ev);

	frame_limit = SDL_GetTicks() + 16;
	fps(16);
	frame_limit = SDL_GetTicks() + 16;



	p1.setPosy(300,300);
	
	
	wind.refresh();

	if(r.key("d"))
		i+=1,p.setPosy(i,j);
	if(r.key("s"))
		j+=1,p.setPosy(i,j);
	if(r.key("z"))
		j-=1,p.setPosy(i,j);
	if(r.key("q"))
		i-=1,p.setPosy(i,j);
	if(r.key("d") && r.key("f"))
	i +=2,p.setPosy(i,j);



	
	//p.setPosy(i,j);
	//p2.setPosy(i,j);

	








	

	//delay(20);

	}




	
	
	

 wind.~window();
}
//g++ -std=c++14 src/*.cpp -o bin/pro -I include -L lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -mwindows


