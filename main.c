#include "demo.h"

int main(void)
{
	SDL_Instance instance;

	if (init_instance(&instance) != 0)
		return (1);

	/*
	 * C will always be awesome
	 * This is an infinite loop
	 */
	while ("C is awesome")
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		/*
		 * Draw some stuff here
		 */
		draw_stuff(instance);
		/*===================*/
		SDL_RenderPresent(instance.renderer);
	}
	return (0);
}
