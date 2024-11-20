#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

static const int WIDTH = 620;
static const int HEIGHT = 500;

int main(int argc, const char *argv[]){

	SDL_Window *window = NULL;

	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		printf("VIDEO Initialization Error");
		SDL_GetError();
	}

	else{
		window = SDL_CreateWindow("My Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
		
		if(window == NULL){
			printf("Window Creation Error");
			SDL_GetError();
		}
		else{
			SDL_UpdateWindowSurface(window);
			SDL_Delay(8000);
			printf("WORKED!!");
		}

	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
