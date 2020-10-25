#pragma once

#include <SDL.h>

class Window
{
	SDL_Window* window;
	SDL_Renderer* renderer;
public:
	Window();
	~Window();
};

