#include "LoginController.h"

LoginController::LoginController(MemberCollection* mc, CurrentUser* cu)
    : members(mc), current_user(cu) {
}

void LoginController::requestLogin(const string& id,
    const string& pw) {
    if (members->isValidate(id, pw)) {
        current_user->login(id);
    }
}