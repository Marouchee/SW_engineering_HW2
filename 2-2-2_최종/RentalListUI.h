#pragma once
#include "RentalListController.h"

class RentalListUI {
public:
    RentalListUI(RentalListController* rc, ostream* os);
    void enterShowList();

private:
    RentalListController* controller;
    ostream* out;
};