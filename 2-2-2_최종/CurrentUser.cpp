#include "CurrentUser.h"

CurrentUser::CurrentUser() : user_id("") {
}

void CurrentUser::login(const string& id) { 
	user_id = id; 
	if (user_id == "admin")
		status = "admin";
	else
		status = "user";
}

void CurrentUser::logout() { 
	user_id.clear(); 
	status.clear();
}

const string& CurrentUser::getUserId() const { return user_id; }