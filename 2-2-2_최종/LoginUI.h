#pragma once
#include "LoginController.h"

class LoginUI {
public:
    LoginUI(LoginController* lc, ostream* os);
    void enterLogin(const vector<string>& params);

private:
    LoginController* controller;
    ostream* out;
};