#pragma once
#include <string>
#include "Bike.h"

using namespace std;

class Rental {
public:
	Rental(const string& member_id, const Bike& bike);
	const string& getMemberId() const;
	const Bike& getBike() const;

private:
	string member_id;
	Bike bike;
};