#pragma once
#include "MemberCollection.h"

class SignUpController {
public:
    explicit SignUpController(MemberCollection* mc);
    void requestSignUp(const string& id, const string& pw,
        const string& phone);

private:
    MemberCollection* members;
};