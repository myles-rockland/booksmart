#include <Booksmart.h>

class Sandbox : public Booksmart::Application
{
public:
	Sandbox() { }
	~Sandbox() { }
};

Booksmart::Application* Booksmart::CreateApplication()
{
	return new Sandbox();
}