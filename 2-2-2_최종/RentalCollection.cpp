#include "RentalCollection.h"

void RentalCollection::addRental(const Rental& rental) {
    rentals.push_back(rental);
}

vector<Rental> RentalCollection::getRentalList(
    const string& member_id) const {
    vector<Rental> out;
    for (auto& r : rentals) {
        if (r.getMemberId() == member_id) out.push_back(r);
    }
    return out;
}

void RentalCollection::deleteAllRental() { rentals.clear(); }