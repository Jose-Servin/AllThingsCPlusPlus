#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int length = 0;
    int width = 0;
    int height = 0;
    const int max_dimension = 10;

    int volume = 0;
    const double base_cost = 2.50;
    double final_rate = 0;
    double surcharge = 0;

    cout << "Enter the length, width and height of your package: ";
    cin >> length >> width >> height;

    volume = length * width * height;

    if (length <= max_dimension && width <= max_dimension && height <= max_dimension)
    {
        if (volume > 100 && volume < 500)
        {
            surcharge = base_cost * .10;
            final_rate = base_cost + surcharge;
        }
        else if (volume > 500)
        {
            surcharge = base_cost * .25;
            final_rate = base_cost + surcharge;
        }
        else
        {
            final_rate = 2.50;
        }
        cout << fixed << setprecision(2);
        cout << "Your final shipping rate is $" << final_rate << endl;
    }
    else
    {
        cout << "Sorry, one of your dimensions is greater than 10 inches, we cannot ship." << endl;
    }
}
