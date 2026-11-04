#pragma once
#include "motor/gameobject.h"

namespace exemple {

	class GoSpawner : public motoret::GameObject {
		float spawnTime, currentTime;
	public:
		GoSpawner(std::string id, float spawnTime);

		void Update() override;
		void RenderimGui() override;
	};
}