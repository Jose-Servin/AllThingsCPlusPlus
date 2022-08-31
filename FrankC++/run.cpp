#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    cout << "Welcome to Baker's Cleaning Service" << endl;

    cout << "\nEnter the number of rooms you want cleaned: ";
    int number_of_rooms;
    cin >> number_of_rooms;

    const double price_per_room = 30.0;
    const double tax_rate = 0.06;
    const int days_valid = 30;

    cout << "\nEstimate of Cleaning Service: " << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room $" << price_per_room << endl;
    cout << "Cost $" << price_per_room * number_of_rooms << endl;
    cout << "Tax $" << price_per_room * number_of_rooms * tax_rate << endl;
    cout << "==========================" << endl;
    cout << "Total Estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * tax_rate) << endl;
    cout << "This estimate is valid for " << days_valid << " days" << endl;
    return 0;
}