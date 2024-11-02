//
// Created by tainguyen on 10/28/24.
//

#include "ship_manager.h"

using namespace std;

/***************************************************************
This function displays the menu to the console.
***************************************************************/
void display_menu(){
  cout << " You Have Entered this Program, Please Select The Service You Want To Use : " << endl;
  cout << " 1. Intra-provincial routes (except Hanoi and Ho Chi Minh)." << endl;
  cout << " 2. Intra-provincial routes (applies to Hanoi and Ho Chi Minh)." << endl;
  cout << " 3. Intra-regional route." << endl;
  cout << " 4. Intra-provincial route." << endl;
  cout << " 5. Special inter-regional route." << endl;
  cout << " 6. Inter-regional route." << endl;
  cout << " 7. Inter-provincial route." << endl;
  cout << " 8.Quit " << endl;
}
/***************************************************************
This function simply reads a character selection from
stdin and returns it as upper case.
***************************************************************/

char getting_selection() {
  char selection;
  cout << " Enter your selection : ";
  cin >> selection;
  return selection;
}

/***************************************************************
***************************************************************/


void Intra_provincial_routes_except_Hanoi_and_Ho_Chi_Minh(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost){

}



