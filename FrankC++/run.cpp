#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int test_scores[5] = {90, 85, 76, 93, 99};

    cout << "The current value of the second elemenent in the test_scores array is: " << test_scores[1] << endl;

    cout << "Enter the new value of the second array element: ";

    cin >> test_scores[1];

    cout << "The new value for test_scores[1] is now: " << test_scores[1] << endl;
    return 0;
}