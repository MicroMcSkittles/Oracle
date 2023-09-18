#pragma once

#include "Core.h"

namespace Oracle {

	class ORACLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defind in CLIENT
	Application* CreateApplication();
}