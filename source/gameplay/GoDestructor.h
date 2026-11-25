#pragma once
#include "motor/gameobject.h"

namespace exemple {

	class GoDestructor : public motoret::GameObject {
        float destroyTime, currentTime;

    public:
        GoDestructor(std::string id, float spawnTime);

        void Update() override;
        void RenderimGui() override;
        void OnRemoved() override;
    };
}