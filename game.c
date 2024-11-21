#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <stdbool.h>

const int WIDTH = 640;
const int HEIGHT = 480;

int main(int argc, char* args[]){

	SDL_Window* window = NULL;	
		
	SDL_Surface* screenSurface = NULL;

	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_ERROR: %s\n", SDL_GetError());
	}

	else{
		window = SDL_CreateWindow("Snake Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
		if(window == NULL)
			printf("Window could be created! SDL_Error: \n%s", SDL_GetError());
		else{
			screenSurface = SDL_GetWindowSurface(window);

			SDL_FillRect(screenSurface , NULL, SDL_MapRGB(screenSurface->format, 0xff, 0xff,0xff));

			SDL_UpdateWindowSurface(window);

			SDL_Event e; bool quit = false; while( quit == false ){ while( SDL_PollEvent( &e ) ){ if( e.type == SDL_QUIT ) quit = true; } }
		}
	}

	SDL_DestroyWindow(window);

	SDL_Quit();


	return 0;
}
