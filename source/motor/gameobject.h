#pragma once

#include <string>

namespace motoret
{
	class GameObject
	{
		std::string _id;
	protected:
		GameObject(std::string id)
			: _id(id)
			{}
	public:
		//Funcions
		const std::string& GetID() const { return _id; }

		virtual void Update() {}
		virtual void RenderimGui() {}
		virtual void Render() {}

		virtual ~GameObject() = default;
	};
}