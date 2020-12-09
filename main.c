#include <SDL2/SDL.h>

int main(void)
{
	SDL_Window *window;
	SDL_Renderer *renderer;

	/*Initiate SDL*/
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprint(stderr, "Unable to initialize SDL:  %s\n", SDL_GetError());
		return (1);
	}
