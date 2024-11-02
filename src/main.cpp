//
// Created by tainguyen on 10/28/24.
//

#include"ship_manager.h"

using namespace std;

int main() {
    vector<int> numbers;
    char selection{};

    do {
        display_menu();
        selection = getting_selection();
        switch (selection) {
            case '1':
                Intra_provincial_routes_except_Hanoi_and_Ho_Chi_Minh(numbers);
            break;

            case '2':
                Intra_provincial_routes_applies_to_Hanoi_and_Ho_Chi_Minh(numbers);
            break;

            case '3' :
                Intra_regional_route(numbers);
            break;

            case '4' :
                Intra_provincial_route(numbers);
            break;

            case '5' :
                Special_inter_regional_route(numbers);
            break;

            case '6' :
                Inter_regional_route(numbers);
            break;

            case '7' :
                Inter_provincial_route(numbers);
            break;

            case '0' :
                Quit();
            break;
            default:
                Unknow();
        }
    } while (selection != '0');
    cout << endl;
    return 0;
}