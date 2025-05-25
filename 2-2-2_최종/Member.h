#pragma once
#include <string>

using namespace std;

class Member {
public:
    /** 생성자 */
    Member(const string& id, const string& password,
        const string& phone);
    const string& getId() const;
    // 비밀번호 검증용 접근자
    const string & getPassword() const;

private:
    string id;
    string password;
    string phone;
};