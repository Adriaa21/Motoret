#include <motor/motor.h>
#include "GoDestructor.h"
#include "imgui.h"


using namespace exemple;
using namespace motoret;

GoDestructor::GoDestructor(std::string id, float spawnTime)
	: motoret::GameObject(id)
	, destroyTime(spawnTime)
	, currentTime(0){

}

void GoDestructor::Update(){
	currentTime += Motoret::GetInstance().GetDeltaTime();
	if (currentTime >= destroyTime){
		Motoret::GetInstance().RemoveGameObject(this);
	}
}

void GoDestructor::RenderimGui()
{
	ImGui::Begin(GetID().c_str());
	ImGui::Text("Tiempo: %f", destroyTime - currentTime);
	ImGui::End();
}

void GoDestructor::OnRemoved()
{
	delete this;
}

