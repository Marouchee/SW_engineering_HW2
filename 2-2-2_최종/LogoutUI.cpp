#include <fstream>
#include "LogoutUI.h"

LogoutUI::LogoutUI(LogoutController* lc, CurrentUser* cu, ostream* os)
    : controller(lc), current_user(cu), out(os) {
}
void LogoutUI::enterLogout() {
    *out << "2.2. ·Î±×¾Æ¿ô\n"
        << "> " << current_user->getUserId() << "\n\n";
    controller->requestLogout();
}