#pragma once
#include "BikeRentalController.h"

class BikeRentalUI {
public:
    BikeRentalUI(BikeRentalController* rc, ostream* os);
    void enterRental(const vector<string>& params);

private:
    BikeRentalController* controller;
    ostream* out;
};