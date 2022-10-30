#include <iostream>
#include <cstdlib>

using namespace std;

// Function Prototyping
double final_cost(double base_cost, double tax_rate = 0.06);

double final_cost(double base_cost, double tax_rate)
{
    return base_cost += (base_cost * tax_rate);
}
int main()
{
    // because tax_rate is a default argument we don't have to supply it
    double user_cost = 0;
    cout << "Enter the item cost: " << endl;
    cin >> user_cost;

    double final_price = final_cost(user_cost);
    // Here we supply a different value for tax; so default value is not used
    double final_price_10 = final_cost(user_cost, 0.10);

    cout << "Your final price with a 0.06 tax is $" << final_price << endl;
    cout << "Your final price with a 0.10 tax is $" << final_price_10 << endl;
    return 0;
}
