#include <fstream>
#include "SystemExitUI.h"

SystemExitUI::SystemExitUI(SystemExitController* sc, std::ostream* os)
    : controller(sc), out(os) {
}
void SystemExitUI::enterSystemExit() {
    *out << "6.1. Á¾·á";
    controller->requestExit();
}