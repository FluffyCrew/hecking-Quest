#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_main.h>
#include <iostream>
#include <vector>

enum DmgMode;

/* Fensterdimensionen */
extern const int LEVEL_WIDTH;
extern const int LEVEL_HEIGHT;

/* globale SDL-Variabeln */
extern SDL_Window* mainWindow;		//Hauptfenster
extern SDL_Surface* mainWinSurface;	//Surface das an mainWindow gebunden ist
extern SDL_Renderer* mainRenderer;	//Hauptrenderer
extern SDL_Rect camera;