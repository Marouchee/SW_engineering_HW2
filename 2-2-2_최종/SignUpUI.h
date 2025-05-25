#pragma once
#include "SignUpController.h"

class SignUpUI {
public:
    SignUpUI(SignUpController* sc, ostream* os);
    void enterSignUp(const vector<string>& params);

private:
    SignUpController* controller;
    ostream* out;
};