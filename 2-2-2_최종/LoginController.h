#pragma once
#include "MemberCollection.h"
#include "CurrentUser.h"

class LoginController {
public:
    LoginController(MemberCollection* mc, CurrentUser* cu);
    void requestLogin(const string& id, const string& pw);

private:
    MemberCollection* members;
    CurrentUser* current_user;
};