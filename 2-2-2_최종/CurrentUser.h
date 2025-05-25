#pragma once
#include <string>

using namespace std;

class CurrentUser {
public:
	/** 积己 棺 技记 檬扁拳 */
	explicit CurrentUser();
	void login(const string& id);
	void logout();
	const string& getUserId() const;

private:
	string user_id;
	string status;
};