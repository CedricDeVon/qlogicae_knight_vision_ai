#pragma once

#include "assembly.hpp"

namespace QLogicaeAiseConsole
{
    class Utilities
    {
    public:
        CLI::App CLI_APPLICATION;

        QLogicaeCore::JsonFileIO CLIENT_JSON_FILE;

        std::unordered_map<std::string, std::pair<CLI::App*, std::function<bool()>>> CLI_APPLICATION_COMMANDS;

        std::string get_application_full_name();

        std::string get_application_about_details();

        bool setup();

        std::future<bool> setup_async();

        void setup_async(
            QLogicaeCore::Result<std::future<void>>& result
        );

        void setup(
            QLogicaeCore::Result<void>& result
        );

        std::future<bool> setup_async(
            const std::function<void(const bool& result)>& callback
        );

        void setup_async(
            const std::function<void(QLogicaeCore::Result<void>& result)>& callback
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

        static Utilities& get_instance();

        static void get_instance(
            QLogicaeCore::Result<Utilities*>& result
        );

    protected:
        Utilities();

        ~Utilities();

        Utilities(
            const Utilities& instance
        ) = default;

        Utilities(
            Utilities&& instance
        ) noexcept = delete;

        Utilities& operator = (
            Utilities&& instance
        ) = delete;

        Utilities& operator = (
            const Utilities& instance
        ) = delete;

        std::mutex _mutex;
    };

    inline static Utilities& UTILITIES =
        Utilities::get_instance();
}
