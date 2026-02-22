#pragma once

#ifdef BS_PLATFORM_WINDOWS

extern Booksmart::Application* Booksmart::CreateApplication();

int main(int argc, char** argv)
{
	Booksmart::Log::Init();
	BS_CORE_WARN("Initialised log!");
	int a = 5;
	BS_INFO("Zdravo :) Var={0}", a);

	auto app = Booksmart::CreateApplication();
	app->Run();
	delete app;
}
#endif