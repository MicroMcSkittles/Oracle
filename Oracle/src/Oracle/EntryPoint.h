#pragma once

#ifdef OC_PLATFORM_WINDOWS
	
extern Oracle::Application* Oracle::CreateApplication();

int main(int argc, char** argv) {
	std::printf("Oracle Engine");
	auto app = Oracle::CreateApplication();
	app->Run();
	delete(app);
}

#endif // OC_PLATFORM_WINDOWS
