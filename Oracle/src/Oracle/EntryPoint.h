#pragma once

#ifdef OC_PLATFORM_WINDOWS
	
extern Oracle::Application* Oracle::CreateApplication();

int main(int argc, char** argv) {
	Oracle::Log::Init();
	OC_CORE_WARN("Initialized Oracle Log!");
	int a = 23;
	OC_INFO("Initialized Client Log! Var={0}", a);

	auto app = Oracle::CreateApplication();
	app->Run();
	delete(app);
}

#endif // OC_PLATFORM_WINDOWS
  