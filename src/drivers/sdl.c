#include <gtt_internal.h>
#include <SDL/SDL.h>

typedef struct {
	SDL_Window *window;
} SDL_INTERNAL, * SDL_INTERNALP;

int gtt_display_init(){
	return 1;
}