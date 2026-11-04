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
	private:
		//Variables
		std::vector<GameObject*> _gameObjects;
		bool _done;
		float _deltaTime;

		//SDL3
		SDL_Window* _window;
		SDL_Renderer* _renderer;
		ImGuiIO* io;

		ImVec4 _clearColor;

		//Funcions
		Motoret();
	public:
		//Singleton
		static Motoret& GetInstance();
		Motoret(Motoret const&) = delete;
		void operator=(Motoret const&) = delete;


		~Motoret();
		//Funcions	
		int Init();
		void Run();
		void Close();
		float GetDeltaTime() const;

		//Aquestes funcions cal refer-les
		//no estan preparades per fer-se servir
		//a temps d'execució
		void AddGameObject(GameObject* gameObject);
		GameObject* RemoveGameObject(GameObject* gameObject);
	};
}