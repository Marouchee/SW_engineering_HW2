#pragma once
#include "CurrentUser.h"

class LogoutController {
public:
    explicit LogoutController(CurrentUser* cu);
    void requestLogout();

private:
    CurrentUser* current_user;
};