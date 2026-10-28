#pragma once
#include "motor/gameobject.h"

namespace exemple
{
	class GOHolaMon : public motoret::GameObject
	{
		long _frames;
		bool _showDemoWindow;

	public:
		GOHolaMon(std::string id);
		
		void Update() override;
		void RenderimGui() override;
	};
}