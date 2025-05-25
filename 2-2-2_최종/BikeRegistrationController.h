#pragma once
#include "BikeCollection.h"
#include "CurrentUser.h"

class BikeRegistrationController {
public:
    BikeRegistrationController(BikeCollection* bc, CurrentUser* cu);
    void registerBike(const string& id, const string& model);

private:
    BikeCollection* bikes;
    CurrentUser* current_user;
};