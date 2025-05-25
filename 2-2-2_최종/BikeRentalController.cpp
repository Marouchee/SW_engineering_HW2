#include "BikeRentalController.h"

BikeRentalController::BikeRentalController(CurrentUser* cu,
    BikeCollection* bc,
    RentalCollection* rc)
    : current_user(cu), bikes(bc), rentals(rc) {
}

string BikeRentalController::rentBike(const std::string& bike_id) {
    Bike b = bikes->findAvailableBike(bike_id);
    rentals->addRental(Rental(current_user->getUserId(), b));
    bikes->updateStatus(bike_id, "rented");
    return b.getModel();
}