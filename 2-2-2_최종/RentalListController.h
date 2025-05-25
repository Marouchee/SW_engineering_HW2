#pragma once
#include "RentalCollection.h"
#include "CurrentUser.h"

class RentalListController {
public:
    RentalListController(CurrentUser* cu, RentalCollection* rc);
    vector<Rental> requestRentalList();

private:
    CurrentUser* current_user;
    RentalCollection* rentals;
};