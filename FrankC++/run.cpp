#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// Function Prototyping
double fahrenheit_to_celsius(double fahrenheit);
double fahrenheit_to_kelvin(double fahrenheit);

int main()
{

    int fahrenheit = 0;
    cout << "Enter fahrenheit temp to convert: " << endl;
    cin >> fahrenheit;

    double celsius_temperature = fahrenheit_to_celsius(fahrenheit);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit);

    cout << "The fahrenheit temperature " << fahrenheit << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";

    return 0;
}

double fahrenheit_to_celsius(double fahrenheit)
{

    double celsius = (5.0 / 9.0) * (fahrenheit - 32);

    return celsius;
}

double fahrenheit_to_kelvin(double fahrenheit)
{

    double kelvin = (5.0 / 9.0) * (fahrenheit - 32) + 273;

    return kelvin;
}