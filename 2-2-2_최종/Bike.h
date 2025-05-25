#pragma once
#include <string>

using namespace std;

class Bike {
public:
	Bike(const string& id, const string& model);
	const string& getId() const;
	const string& getModel() const;
	void updateStatus(const string& status_);

private:
	string bike_id;
	string model;
	string status;
};