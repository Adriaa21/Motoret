#include <motor/motor.h>
#include "GoSpawner.h"
#include "imgui.h"

using namespace exemple;
using namespace motoret;

GoSpawner::GoSpawner(std:: string id, float spawnTime)
	: motoret::GameObject(id)
	, spawnTime(spawnTime)
	, currentTime(0)
{

}

void GoSpawner::Update() {
	currentTime += Motoret::GetInstance().GetDeltaTime();
	if (currentTime > spawnTime) {
		currentTime = 0;
		//Motoret::GetInstance().AddGameObject();
	}
}

void GoSpawner::RenderimGui() {

	ImGui::Begin(GetID().c_str());

		ImGui::Text("Spawnejant en: %f", currentTime);

	ImGui::End();
}


