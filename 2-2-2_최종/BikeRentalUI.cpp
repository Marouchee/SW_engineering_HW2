#include <fstream>
#include "BikeRentalUI.h"

BikeRentalUI::BikeRentalUI(BikeRentalController* rc, ostream* os)
    : controller(rc), out(os) {
}
void BikeRentalUI::enterRental(const vector<string>& p) {
    string model = controller->rentBike(p[0]);
    *out << "4.1. 자전거 대여\n"
        << "> " << p[0] << " " << model << "\n\n";
}