#include "demo.h"

int init_instance(SDL_Instance *instance)
{
	/*Initiate SDL*/
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprint(stderr, "Unable to initialize SDL:  %s\n", SDL_GetError());
		return (1);
	}
	/*Create a new Window instance */
	instance->window = SDL_CreateWindow("SDL2 \\o/", SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED, 1260, 720, 0);
	if (instance->window == NULL)
	{
		fprint(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}
	/*Create anew Renderer instance linked to the Window */
	instance->renderer = SDL_CreateRenderer(instance->window, -1,
			SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (instance->renderer == NULL)
	{
		SDL_DestroyWindow(instance->window);
		fprint(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}
	return (0);
}
