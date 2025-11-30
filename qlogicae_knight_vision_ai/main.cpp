#include "pch.hpp"

#include "main.hpp"

int main(int argc, char *argv[])
{        
    QLogicaeCore::QLOGICAE_APPLICATION.setup();

    QApplication application(argc, argv);

    QLogicaeKnightVisionAi::Application window;
    window.show();
    
    bool exit_code = application.exec();
    
    QLogicaeCore::CLI_IO.print_with_new_line("QLogicaeKnightVisionAi - Confirmed!");

    return exit_code;
}

namespace QLogicaeKnightVisionAi
{

}
