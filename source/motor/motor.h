#pragma once

#include "imgui.h"
#include "imgui_impl_sdl3.h"
#include "imgui_impl_sdlrenderer3.h"
#include <stdio.h>
#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>

#include <vector>
#include "gameobject.h"

namespace motoret
{
	class Motoret
	{
		//Variables
		std::vector<GameObject*> _gameObjects;
		bool _done;

		//SDL3
		SDL_Window* _window;
		SDL_Renderer* _renderer;
		ImGuiIO* io;

		ImVec4 _clearColor;
		//Funcions

	public:
		Motoret();
		~Motoret();
		//Funcions
		int Init();
		void Run();
		void Close();

		//Aquestes funcions cal refer-les
		//no estan preparades per fer-se servir
		//a temps d'execució
		void AddGameObject(GameObject* gameObject);
		GameObject* RemoveGameObject(GameObject* gameObject);
	};
}