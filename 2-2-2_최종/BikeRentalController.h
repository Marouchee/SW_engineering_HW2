#pragma once
#include "BikeCollection.h"
#include "RentalCollection.h"
#include "CurrentUser.h"

class BikeRentalController {
public:
    BikeRentalController(CurrentUser* cu, BikeCollection* bc,
        RentalCollection* rc);
    /** 성공 시 모델명을, 실패 시 빈 문자열 반환 */
    string rentBike(const string& bike_id);

private:
    CurrentUser* current_user;
    BikeCollection* bikes;
    RentalCollection* rentals;
};