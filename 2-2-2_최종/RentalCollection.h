#pragma once
#include <vector>
#include "Rental.h"

using namespace std;

class RentalCollection {
public:
    void addRental(const Rental& rental);
    vector<Rental> getRentalList(const string& member_id) const;
    void deleteAllRental();

private:
    vector<Rental> rentals;
};