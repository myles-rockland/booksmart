#pragma once

#ifdef BS_PLATFORM_WINDOWS
	#ifdef BS_BUILD_DLL
		#define BOOKSMART_API __declspec(dllexport)
	#else
		#define BOOKSMART_API __declspec(dllimport)
	#endif
#else
	#error Booksmart only supports Windows!
#endif