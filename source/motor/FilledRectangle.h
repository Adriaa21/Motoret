/*
* #pragma once

#include <string>

namespace motoret
{
	class FilledRectangle
	{
		std::string _id;
	protected:
		FilledRectangle(std::string id)
			: _id(id)
		{
		}
	public:
		//Funcions
		const std::string& GetID() const { return _id; }

		virtual void Update() {}
		virtual void RenderimGui() {}
		virtual void Render() {}

		virtual void OnAdded() {}
		virtual void OnRemoved() {}
		virtual ~FilledRectangle() = default;
	};
}
 */