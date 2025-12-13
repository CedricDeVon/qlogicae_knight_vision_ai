#include "pch.hpp"

#include "main.hpp"

int main(int argc, char** argv)
{           
    try
    {
        bool is_safe = QLogicaeAiseConsole::APPLICATION.setup(argc, argv);

        if (!is_safe)
        {
            QLogicaeCore::LOGGER.handle_exception_async(
                "main()",
                "Setup failed"
            );

            return EXIT_FAILURE;
        }

        is_safe = QLogicaeAiseConsole::APPLICATION.parse();

        if (!is_safe)
        {
            QLogicaeCore::LOGGER.handle_exception_async(
                "main()",
                "Parsing failed"
            );

            return EXIT_FAILURE;
        }

        is_safe = QLogicaeAiseConsole::APPLICATION.terminate();

        if (!is_safe)
        {
            QLogicaeCore::LOGGER.handle_exception_async(
                "main()",
                "Termination failed"
            );

            return EXIT_FAILURE;
        }

        return EXIT_SUCCESS;
    }
    catch (const std::exception& exception)
    {
        QLogicaeCore::LOGGER.handle_exception_async(
            "main()",
            exception.what()
        );

        return EXIT_FAILURE;
    }
}

namespace QLogicaeAiseConsole
{

}
