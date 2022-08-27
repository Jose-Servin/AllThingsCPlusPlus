/* Ask user to enter number from 1-100 */

#include <iostream>

using std::cin;
using std::cout; // using only these 3 defined standard namespace functions
using std::endl;

int main()
{

    int number1;
    int number2;

    cout << "Enter two numbers from 1 - 100 seperated by a space: ";

    cin >> number1 >> number2;

    cout << "You entered " << number1 << " and " << number2 << endl;

    return 0;
}