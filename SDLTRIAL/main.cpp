#include <SDL.h>
#include <iostream>

#include "Window.h"

int main(int argc, char** argv) {
	Window* window;
	window = new Window;
	SDL_Delay(10000);
	delete window;
	return 0;
}