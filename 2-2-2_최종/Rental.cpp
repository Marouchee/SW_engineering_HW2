#include "Rental.h"

Rental::Rental(const string& member_id, const Bike& bike)
    : member_id(member_id), bike(bike) {
}

const string& Rental::getMemberId() const { return member_id; }

const Bike& Rental::getBike() const { return bike; }