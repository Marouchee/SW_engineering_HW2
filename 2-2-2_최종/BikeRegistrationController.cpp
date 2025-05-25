#include "BikeRegistrationController.h"

BikeRegistrationController::BikeRegistrationController(
    BikeCollection* bc, CurrentUser* cu)
    : bikes(bc), current_user(cu) {
}

void BikeRegistrationController::registerBike(const string& id,
    const string& model) {
    bikes->addBike(Bike(id, model));
}