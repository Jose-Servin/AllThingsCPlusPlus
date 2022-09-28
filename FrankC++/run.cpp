#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char letter_grade = {};
    cout << "Enter the letter grade you expect on the exam: " << endl;
    cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "You need a 90 or above for an A!" << endl;
        break;

    case 'b':
    case 'B':
        cout << "You need an 80- 89 for a B " << endl;
        break;

    case 'c':
    case 'C':
        cout << "You need a 70-79 for a C" << endl;
        break;

    default:
        cout << "Sorry, not a valid grade" << endl;
    }

    return 0;
}
