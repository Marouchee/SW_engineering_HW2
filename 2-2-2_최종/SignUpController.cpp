#include "SignUpController.h"

SignUpController::SignUpController(MemberCollection* mc)
    : members(mc) {
}

void SignUpController::requestSignUp(const std::string& id,
    const string& pw,
    const string& phone) {
    members->addMember(Member(id, pw, phone));
}