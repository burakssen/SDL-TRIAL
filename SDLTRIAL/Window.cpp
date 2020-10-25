#include "Window.h"

Window::Window()
{
	this->window = SDL_CreateWindow("SDLTRIAL", 500, 500, 100, 100, SDL_WINDOW_SHOWN);
	this->renderer = SDL_CreateRenderer(this->window, 0, SDL_RENDERER_ACCELERATED);
	SDL_RenderClear(this->renderer);
}

Window::~Window()
{

}
