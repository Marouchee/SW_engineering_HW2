#pragma once
#include "LogoutController.h"

class LogoutUI {
public:
    LogoutUI(LogoutController* lc, CurrentUser* cu, ostream* os);
    void enterLogout();

private:
    LogoutController* controller;
    CurrentUser* current_user;
    ostream* out;
};