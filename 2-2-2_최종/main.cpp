#include <iostream>
#include <fstream>
#include <sstream>
#include "LoginUI.h"
#include "SignUpUI.h"
#include "LogoutUI.h"
#include "BikeRegistrationUI.h"
#include "BikeRentalUI.h"
#include "RentalListUI.h"
#include "SystemExitUI.h"

/** 메뉴별 작업 수행 */
void doTask(int menu, int sub, const vector<string>& params,
    SignUpUI* su, LoginUI* lu, LogoutUI* lou,
    BikeRegistrationUI* bru, BikeRentalUI* brui,
    RentalListUI* rlu, SystemExitUI* seu) {
    switch (menu) {
    case 1:
        if (sub == 1) su->enterSignUp(params);
        break;
    case 2:
        if (sub == 1) lu->enterLogin(params);
        else if (sub == 2) lou->enterLogout();
        break;
    case 3:
        if (sub == 1) bru->enterRegisterBike(params);
        break;
    case 4:
        if (sub == 1) brui->enterRental(params);
        break;
    case 5:
        if (sub == 1) rlu->enterShowList();
        break;
    case 6:
        if (sub == 1) seu->enterSystemExit();
        break;
    default:
        break;
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    MemberCollection mc;
    // 관리자(admin) 계정 자동 생성 (id="admin", pw="admin")
    mc.addMember(Member("admin", "admin", ""));
    CurrentUser cu;
    BikeCollection bc;
    RentalCollection rc;

    // Controllers
    SignUpController signup_ctrl(&mc);
    LoginController login_ctrl(&mc, &cu);
    LogoutController logout_ctrl(&cu);
    BikeRegistrationController bike_reg_ctrl(&bc, &cu);
    BikeRentalController bike_rent_ctrl(&cu, &bc, &rc);
    RentalListController rent_list_ctrl(&cu, &rc);
    SystemExitController exit_ctrl(&cu, &mc, &bc, &rc);

    // UIs
    SignUpUI su_ui(&signup_ctrl, &out);
    LoginUI li_ui(&login_ctrl, &out);
    LogoutUI lo_ui(&logout_ctrl, &cu, &out);
    BikeRegistrationUI br_ui(&bike_reg_ctrl, &out);
    BikeRentalUI bru_ui(&bike_rent_ctrl, &out);
    RentalListUI rl_ui(&rent_list_ctrl, &out);
    SystemExitUI se_ui(&exit_ctrl, &out);

    int menu, sub;
    while (in >> menu >> sub) {
        string line;
        getline(in, line);
        istringstream iss(line);
        vector<string> params;
        string token;
        while (iss >> token) params.push_back(token);

        doTask(menu, sub, params,
            &su_ui, &li_ui, &lo_ui, &br_ui, &bru_ui, &rl_ui, &se_ui);

        if (menu == 6 && sub == 1) break;
    }

    return 0;
}