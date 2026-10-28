#include "holamon.h"
#include "Vectors_y_punts/vectors.h"
#include "imgui.h"

using namespace exemple;

GOHolaMon::GOHolaMon(std::string id)
	: motoret::GameObject(id),
	_frames(0),
	_showDemoWindow(true)
{

}

void GOHolaMon::Update()
{
	//Aquí fem el codi per cada update.
	//En el nostre cas, comptarem frames
	_frames++;
}

void GOHolaMon::RenderimGui()
{
	//Aquí fem el codi per cada render.
	//En el nostre cas, mostrarem l'exemple de Dear imGui una mica canviat.

	if(_showDemoWindow)
		ImGui::ShowDemoWindow(&_showDemoWindow);
	
	ImGui::Begin("Hola, mon!");
		ImGui::Checkbox("Demo Window", &_showDemoWindow);
		ImGui::Text("frames = %d", _frames);
	ImGui::End();

	/*Suma y resta de punts y vectors*/

	ImGui::Begin("prueba de suma y resta");

	static int v1x = 0, v1y = 0;
	static int v2x = 0, v2y = 0;

	ImGui::Text("Vector 1");
	ImGui::InputInt("V1 X", &v1x);
	ImGui::InputInt("V1 Y", &v1y);

	ImGui::Separator();

	ImGui::End();

	ImGui::Begin("Hola, Test Punts i Vectors");
		int punt1 = 0, punt2 = 0;
		ImGui::InputInt("punt1", &punt1);
		ImGui::InputInt("punt2", &punt2);
		

	ImGui::End();
}