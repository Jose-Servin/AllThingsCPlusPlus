#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Enter two numbers separated by a space: " << endl;
    cin >> num1 >> num2;

    if (num1 != num2)
    {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else
        (
            cout << "The numbers are equal" << endl;
}
