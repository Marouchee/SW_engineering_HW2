#include "BikeCollection.h"

void BikeCollection::addBike(const Bike& bike) {
    bikes.push_back(bike);
}

Bike BikeCollection::findAvailableBike(const string& bike_id) const {
    for (auto& b : bikes) {
        if (b.getId() == bike_id) return b;
    }
    // 예제 단순화: 항상 존재
    return bikes.front();
}

void BikeCollection::updateStatus(const string& bike_id,
    const string& status) {
    for (auto& b : bikes) {
        if (b.getId() == bike_id) {
            b.updateStatus(status);
            break;
        }
    }
}

void BikeCollection::deleteAllBike() { bikes.clear(); }