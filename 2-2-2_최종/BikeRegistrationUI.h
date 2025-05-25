#pragma once
#include "BikeRegistrationController.h"

class BikeRegistrationUI {
public:
    BikeRegistrationUI(BikeRegistrationController* bc, ostream* os);
    void enterRegisterBike(const vector<string>& params);

private:
    BikeRegistrationController* controller;
    ostream* out;
};