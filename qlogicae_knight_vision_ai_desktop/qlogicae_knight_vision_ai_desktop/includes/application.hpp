#pragma once

#include "ui_application.h"

namespace QLogicaeKnightVisionAi
{
    class Application :
        public QMainWindow
    {
        Q_OBJECT

    public:
        Application(
            QWidget* parent = nullptr
        );
        ~Application();

    private:
        Ui::ApplicationClass _ui;
    };
}
