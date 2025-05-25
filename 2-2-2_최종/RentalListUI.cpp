#include <fstream>
#include <algorithm>
#include "RentalListUI.h"

RentalListUI::RentalListUI(RentalListController* rc, ostream* os)
    : controller(rc), out(os) {
}
void RentalListUI::enterShowList() {
    auto list = controller->requestRentalList();
    // 자전거 ID 순으로 정렬
    sort(list.begin(), list.end(),
        [](auto& a, auto& b) {
            return a.getBike().getId() < b.getBike().getId();
        });
    *out << "5.1. 자전거 대여 리스트\n";
    for (auto& r : list) {
        *out << "> " << r.getBike().getId() << " "
            << r.getBike().getModel() << "\n";
    }
    *out << "\n";
}