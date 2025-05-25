#pragma once
#include <vector>
#include "Member.h"

using namespace std;

class MemberCollection {
public:
    /** 신규 회원 추가 */
    void addMember(const Member& member);
    /** 자격 증명 검증 */
    bool isValidate(const string& id,
        const string& password) const;
    /** 전체 회원 삭제 */
    void deleteAllMember();

private:
    vector<Member> members;
};