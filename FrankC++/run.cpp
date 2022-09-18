#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int dollars = 100;
    int quarters = 25;
    int dimes = 10;
    int nickle = 5;
    int pennies = 1;

    // take in change amount from user
    cout << "Enter an amount in change: ";
    int change_amount = 0;
    cin >> change_amount;

    // number of dollars to give back
    int dollars_back = 0;
    dollars_back = change_amount / dollars;

    // find the remainder to continue program if 1 dollar is not enough
    int remainder = 0;
    remainder = change_amount % dollars;

    cout << "Dollars: " << dollars_back << endl;
    // cout << "Remainder: " << remainder << endl;

    // quarters to give back
    int quarters_back = 0;
    quarters_back = remainder / 25;

    // find the "new remainder" to continue program if quarters is not enough
    remainder = remainder % 25;

    cout << "Quarters: " << quarters_back << endl;
    // cout << "Remainder: " << remainder << endl;

    // dimes to give back
    int dimes_back = 0;
    dimes_back = remainder / 10;
    remainder = remainder % 10;
    cout << "Dimes: " << dimes_back << endl;
    // cout << "Remainder: " << remainder << endl;

    // nickles to give back
    int nickles_back = 0;
    nickles_back = remainder / 5;
    remainder = remainder % 5;
    cout << "Nickles: " << nickles_back << endl;
    // cout << "Remainder: " << remainder << endl;

    // pennies to give back

    int pennies_back = 0;
    pennies_back = remainder / 1;
    remainder = remainder % 1;

    cout << "Pennies: " << pennies_back << endl;
    // adding this to check the final remainder is 0
    cout << "Remainder: " << remainder << endl;

    return 0;
}
