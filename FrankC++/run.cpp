#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int wind_speed = 0;
    int temperature = 0;
    bool wear_coat = false;
    cout << std::boolalpha;

    cout << "Enter the current temperature: " << endl;
    cin >> temperature;

    cout << "Enter the current wind speed in mph: " << endl;
    cin >> wind_speed;

    wear_coat = (temperature <= 60 || wind_speed > 10);

    cout << "Should you wear a coat today? " << wear_coat << endl;

    return 0;
}
