#include <Oracle.h>

class Sandbox : public Oracle::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Oracle::Application* Oracle::CreateApplication() {
	return new Sandbox();
}