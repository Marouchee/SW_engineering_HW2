#include "Bike.h"

Bike::Bike(const string& id, const string& model)
    : bike_id(id), model(model), status("available") {
}

const string& Bike::getId() const { return bike_id; }

const string& Bike::getModel() const { return model; }

void Bike::updateStatus(const string& status_) { status = status_; }