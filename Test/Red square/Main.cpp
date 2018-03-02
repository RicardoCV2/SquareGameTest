#include "../SDL/include/SDL.h"
#include<iostream>
#pragma comment(lib, "../SDL/libx86/SDL2.lib")
#pragma comment(lib, "../SDL/libx86/SDL2main.lib")
using namespace std;

int main(int argv, char *argc[])
{
	SDL_Window *win = nullptr;
	SDL_Renderer *rend = nullptr;
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "Video error" << SDL_GetError() << endl;
		return 1;
	}
	else
	{
		win = SDL_CreateWindow("Cube Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
		if (win == nullptr)
		{
			cout << "Window creation error." << SDL_GetError() << endl;
			return 1;
		}
		else
		{

			SDL_Rect rect;
			rect.x = 100;
			rect.y = 100;
			rect.w = 100;
			rect.h = 100;

			rend = SDL_CreateRenderer(win, -1, 0);
			SDL_SetRenderDrawColor(rend, 0, 0, 255, 255);
			SDL_RenderClear(rend);

			bool loop = true;

			while (loop)
			{
				
				SDL_SetRenderDrawColor(rend, 255, 0, 0, 255);
				SDL_RenderFillRect(rend, &rect);
				SDL_RenderPresent(rend);
				SDL_SetRenderDrawColor(rend, 50, 50, 255, 255);
				SDL_RenderClear(rend);
				if (rect.x <= 540) {
					rect.x++;
					if (rect.x == 540) {
						rect.x = 0;
					}
				}
				if (rect.y <= 380) {
					rect.y++;;
					if (rect.y == 380) {
						rect.y = 0;
					}
				}
				SDL_Delay(5);
			}
		}

	}
	return 0;
}
