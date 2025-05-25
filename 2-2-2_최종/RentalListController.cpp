#include "RentalListController.h"

RentalListController::RentalListController(CurrentUser* cu,
    RentalCollection* rc)
    : current_user(cu), rentals(rc) {
}

vector<Rental> RentalListController::requestRentalList() {
    return rentals->getRentalList(current_user->getUserId());
}