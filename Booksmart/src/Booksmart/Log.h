#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Booksmart 
{
	class BOOKSMART_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
	};
}

// Core log macros
#define BS_CORE_TRACE(...)      ::Booksmart::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BS_CORE_INFO(...)       ::Booksmart::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BS_CORE_WARN(...)       ::Booksmart::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BS_CORE_ERROR(...)      ::Booksmart::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BS_CORE_CRITICAL(...)   ::Booksmart::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define BS_TRACE(...)           ::Booksmart::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BS_INFO(...)            ::Booksmart::Log::GetClientLogger()->info(__VA_ARGS__)
#define BS_WARN(...)            ::Booksmart::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BS_ERROR(...)           ::Booksmart::Log::GetClientLogger()->error(__VA_ARGS__)
#define BS_CRITICAL(...)        ::Booksmart::Log::GetClientLogger()->critical(__VA_ARGS__)