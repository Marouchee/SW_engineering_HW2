#pragma once
#include "SystemExitController.h"

class SystemExitUI {
public:
    SystemExitUI(SystemExitController* sc, ostream* os);
    void enterSystemExit();

private:
    SystemExitController* controller;
    ostream* out;
};