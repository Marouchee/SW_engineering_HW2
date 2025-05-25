#pragma once
#include <vector>
#include "Bike.h"

using namespace std;

class BikeCollection {
public:
    void addBike(const Bike& bike);
    /** 대여 가능한 자전거 검색(존재 보장) */
    Bike findAvailableBike(const string& bike_id) const;
    void updateStatus(const string& bike_id,
        const string& status);
    void deleteAllBike();

private:
    vector<Bike> bikes;
};