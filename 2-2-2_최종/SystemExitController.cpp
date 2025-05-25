#include "SystemExitController.h"

SystemExitController::SystemExitController(CurrentUser* cu,
    MemberCollection* mc,
    BikeCollection* bc,
    RentalCollection* rc)
    : current_user(cu),
    members(mc),
    bikes(bc),
    rentals(rc) {
}

void SystemExitController::requestExit() {
    current_user->logout();
    members->deleteAllMember();
    bikes->deleteAllBike();
    rentals->deleteAllRental();
}