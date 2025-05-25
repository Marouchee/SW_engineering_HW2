#include <fstream>
#include "SignUpUI.h"

SignUpUI::SignUpUI(SignUpController* sc, ostream* os)
    : controller(sc), out(os) {
}
void SignUpUI::enterSignUp(const vector<string>& p) {
    *out << "1.1. 회원가입\n"
        << "> " << p[0] << " " << p[1] << " " << p[2] << "\n\n";
    controller->requestSignUp(p[0], p[1], p[2]);
}