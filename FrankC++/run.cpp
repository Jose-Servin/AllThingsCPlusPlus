#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Let's count from 1 to 10: " << endl;
    for (int i = 1; i <= 10; ++i)
    {
        if (i == 8)
        {
            break;
        }
        cout << i << endl;
    }

    cout << "Oops, there was an 8 in this loop! " << endl;
    return 0;
}
