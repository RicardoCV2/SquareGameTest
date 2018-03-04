#include "../SDL/include/SDL.h"
#include<iostream>
#pragma comment(lib, "../SDL/libx86/SDL2.lib")
#pragma comment(lib, "../SDL/libx86/SDL2main.lib")
using namespace std;

int main(int argv, char *argc[])
{
	int c = 0;
	bool shootexists = false;
	int cp1=0;
	int cp2 = 0;
	SDL_Window *win = NULL;
	SDL_Renderer *rend = NULL;
		win = SDL_CreateWindow("Cube Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

			SDL_Rect rect;
			rect.x = 300;
			rect.y = 300;
			rect.w = 120;
			rect.h = 120;
			struct bullet {

			};
			

			rend = SDL_CreateRenderer(win, -1, 0);
			SDL_SetRenderDrawColor(rend, 0, 0, 255, 255);
			SDL_RenderClear(rend);

			bool loop = true;

			while (loop)
			{
				SDL_Event event;
				if (SDL_PollEvent(&event) != 0){
					switch (event.type) {
					case SDL_QUIT:
						loop = false;
					case SDL_KEYDOWN:
						switch (event.key.keysym.sym) {
						case SDLK_RIGHT:
							rect.x += 10; 
							break;
						case SDLK_LEFT:
							rect.x -= 10;
							break;
						case SDLK_UP:
							rect.y -= 10;
							break;
						case SDLK_DOWN:
							rect.y += 10;
							break;
						case SDLK_SPACE:
							shootexists = true;
							
							switch (c) {
								if (c < 10) {
									c++;
								}
								else c = 0;
							case 0:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 1:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 2:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 3:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 4:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 5:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 6:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 7:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 8:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
							case 9:
								bullet[c].x = rect.x + 120;
								bullet[c].y = rect.y + 55;
								bullet[c].w = 50;
								bullet[c].h = 20;
								break;
								
							}
						}

					}
				}

				SDL_SetRenderDrawColor(rend, 255, 0, 0, 255);
				SDL_RenderFillRect(rend, &rect);
				SDL_SetRenderDrawColor(rend, 255, 255, 0, 255);
				
				
				if (shootexists) {
					
						SDL_RenderFillRect(rend, &bullet[c]);
						bullet[c].x += 15;
					
				}
				SDL_RenderPresent(rend);
				SDL_SetRenderDrawColor(rend, 0, 0, 255, 255);
				SDL_RenderClear(rend);

				SDL_Delay(5);
				}
				
				return 0;
			}
			
