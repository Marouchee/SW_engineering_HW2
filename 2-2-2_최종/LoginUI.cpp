#include <fstream>
#include "LoginUI.h"

LoginUI::LoginUI(LoginController* lc, ostream* os)
    : controller(lc), out(os) {
}
void LoginUI::enterLogin(const vector<string>& p) {
    *out << "2.1. ·Î±×ÀÎ\n"
        << "> " << p[0] << " " << p[1] << "\n\n";
    controller->requestLogin(p[0], p[1]);
}