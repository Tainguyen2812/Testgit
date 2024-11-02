//
// Created by tainguyen on 10/28/24.
//

#ifndef SHIP_MANAGER_H
#define SHIP_MANAGER_H

#include<iostream>
#include<string>
#include<vector>

// Prototypes for displaying the menu and getting user selection
void display_menu();
char getting_selection();

// Menu handling function prototypes
void Intra_provincial_routes_except_Hanoi_and_Ho_Chi_Minh(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
void Intra_provincial_routes_applies_to_Hanoi_and_Ho_Chi_Minh(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
void Intra_regional_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
void Intra_provincial_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
void Special_inter_regional_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
void Inter_regional_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
void Inter_provincial_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
void Quit();
void Unknow();

// Prototypes for functions that work with the list
double calc_Intra_provincial_routes_except_Hanoi_and_Ho_Chi_Minh(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
double calc_Intra_provincial_routes_applies_to_Hanoi_and_Ho_Chi_Minh(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
double calc_Intra_regional_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
double calc_Intra_provincial_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
double calc_Special_inter_regional_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
double calc_Inter_regional_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
double calc_Inter_provincial_route(int weight, int address, int default_weight, const int mass, double inner_city_prices,double district_price,double price_per_05,double change_amount,double change_kg,double total_cost);
#endif //SHIP_MANAGER_H
