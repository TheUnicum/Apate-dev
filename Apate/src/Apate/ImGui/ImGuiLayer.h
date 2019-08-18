#pragma once

#include "Apate/Core/Layer.h"

namespace Apate {

	class APATE_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		virtual ~ImGuiLayer();

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnUpdate() override;
		virtual void OnImGuiRender() {}
		virtual void OnEvent(Event& event) override;
	private:
		float m_Time = 0.0f;
	};

}

