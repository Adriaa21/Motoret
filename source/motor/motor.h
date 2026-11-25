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
		std::vector<GameObject*> _gameObjects, _gameObjectsToAdd, _gameObjectsToRemove;
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

		void AddGameObject(GameObject* gameObject);
		GameObject* RemoveGameObject(GameObject* gameObject);

		//GFX
		void DrawFilledRectangle(const SDL_Color& color, const SDL_FRect* rect);
		//void DrawSprite(const SDL_Texture* texture, const SDL_FRect* rect, const SDL_FRect* subSection = nullptr);
	};
}