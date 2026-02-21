#pragma once

#ifdef BS_PLATFORM_WINDOWS

extern Booksmart::Application* Booksmart::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Booksmart::CreateApplication();
	app->Run();
	delete app;
}
#endif