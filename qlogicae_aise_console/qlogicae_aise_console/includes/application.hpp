#pragma once

#include "logger.hpp"
#include "utilities.hpp"
#include "input_cache.hpp"

namespace QLogicaeAiseConsole
{
	class Application
	{
	public:
		bool setup(
			int charc,
			char** argv
		);

		std::future<bool> setup_async(
			int charc,
			char** argv
		);

		void setup_async(
			QLogicaeCore::Result<std::future<void>>& result,
			int charc,
			char** argv
		);

		void setup(
			QLogicaeCore::Result<void>& result,
			int charc,
			char** argv
		);

		std::future<bool> setup_async(
			const std::function<void(const bool& result)>& callback,
			int charc,
			char** argv
		);

		void setup_async(
			const std::function<void(QLogicaeCore::Result<void>& result)>& callback,
			int charc,
			char** argv
		);

		bool terminate();

		std::future<bool> terminate_async();

		void terminate_async(
			QLogicaeCore::Result<std::future<void>>& result
		);

		void terminate(
			QLogicaeCore::Result<void>& result
		);

		std::future<bool> terminate_async(
			const std::function<void(const bool& result)>& callback
		);

		void terminate_async(
			const std::function<void(QLogicaeCore::Result<void>& result)>& callback
		);

		bool parse();

		static Application& get_instance();

		static void get_instance(
			QLogicaeCore::Result<Application*>& result
		);

	protected:
		Application();

		~Application();

		Application(
			const Application& instance
		) = delete;

		Application(
			Application&& instance
		) noexcept = delete;

		Application& operator = (
			Application&& instance
		) = delete;

		Application& operator = (
			const Application& instance
		) = delete;

		bool _setup_view_command();

		bool _setup_evaluate_command();
	};

	inline static Application& APPLICATION =
		Application::get_instance();
}
