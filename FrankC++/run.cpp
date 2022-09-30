#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int num = 0;
    bool done = false;
    while (!done)
    {
        cout << "Enter a number greater than 1 and less than 10: " << endl;
        cin >> num;

        if (num > 1 & num < 10)
        {
            cout << "Thanks! " << endl;
            done = true;
        }
        else
        {
            cout << "Out of range...try again! " << endl;
            // since we didn't set out done flag to true, the while loop continues
        }
    }
}
