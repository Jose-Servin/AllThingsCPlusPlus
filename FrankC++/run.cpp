#include <iostream>
#include <vector>
using namespace std;

int main()
{
    bool result = false;

    result = (100 == 50 + 50);

    cout << result << endl; // by default a bool returns either 0 or 1

    cout << std::boolalpha; // this converts the bool value of 0 or 1 to false / true respectively

    cout << result << endl; // now, we will get back the word "true" and not "1"

    cout << std::noboolalpha; // this goes back to default behavior or printing 0 or 1

    return 0;
}