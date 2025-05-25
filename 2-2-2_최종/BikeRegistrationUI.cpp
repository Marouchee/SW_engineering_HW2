#include <fstream>
#include "BikeRegistrationUI.h"

BikeRegistrationUI::BikeRegistrationUI(
    BikeRegistrationController* bc, std::ostream* os)
    : controller(bc), out(os) {
}
void BikeRegistrationUI::enterRegisterBike(
    const std::vector<std::string>& p) {
    *out << "3.1. 자전거 등록\n"
        << "> " << p[0] << " " << p[1] << "\n\n";
    controller->registerBike(p[0], p[1]);
}