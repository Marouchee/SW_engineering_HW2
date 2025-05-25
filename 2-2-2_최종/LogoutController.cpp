#include "LogoutController.h"

LogoutController::LogoutController(CurrentUser* cu)
    : current_user(cu) {
}

void LogoutController::requestLogout() { current_user->logout(); }