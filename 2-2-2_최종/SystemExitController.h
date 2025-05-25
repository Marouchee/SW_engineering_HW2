#pragma once
#include "MemberCollection.h"
#include "BikeCollection.h"
#include "RentalCollection.h"
#include "CurrentUser.h"

class SystemExitController {
public:
    SystemExitController(CurrentUser* cu, MemberCollection* mc,
        BikeCollection* bc, RentalCollection* rc);
    void requestExit();

private:
    CurrentUser* current_user;
    MemberCollection* members;
    BikeCollection* bikes;
    RentalCollection* rentals;
};