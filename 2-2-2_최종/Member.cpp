#include "Member.h"

Member::Member(const string& id, const string& password,
    const string& phone)
    : id(id), password(password), phone(phone) {
}

const string& Member::getId() const { return id; }

const string & Member::getPassword() const { return password; }