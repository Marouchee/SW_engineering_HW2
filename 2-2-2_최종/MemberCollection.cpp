#include "MemberCollection.h"

void MemberCollection::addMember(const Member& member) {
    // 중복 체크 생략
    members.push_back(member);
}

bool MemberCollection::isValidate(const string& id,
    const string& password) const {
    for (auto& m : members) {
        if (m.getId() == id && password == m.getPassword()) {
            return true;
        }
    }
    return false;
}

void MemberCollection::deleteAllMember() { members.clear(); }