#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int grade = 0;
    const int min = 0;
    const int max = 100;

    cout << "Enter your grade: " << endl;
    cin >> grade;

    // first we check to see if the grade entered is inside the range of possible grades (between 0 and 100)
    if (grade >= min && grade <= max)
    {
        if (grade < 60)
        {
            cout << "F" << endl;
            cout << "Sorry, you will have to re-take the class. " << endl;
        }
        else if (grade >= 60 && grade < 70)
        {
            cout << "D" << endl;
        }
        else if (grade >= 70 && grade < 80)
        {
            cout << "C" << endl;
        }
        else if (grade >= 80 && grade < 90)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
    }
    else
    {
        cout << grade << " is not between " << min << " and " << max << endl;
    }
}
