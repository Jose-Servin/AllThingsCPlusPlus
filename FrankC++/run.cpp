#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> test = {10, 20, 30, 40, 50, 110, 100};

    // int index = 0;
    // int count = 0;
    // bool flag = false;
    // while (index < test.size() && !flag)
    // {
    //     if (test[index] == 99)
    //     {
    //         int count = -1;
    //         flag = true;
    //         count += 1;
    //     }
    //     else
    //     {
    //         count += 1;
    //         ++index;
    //     }
    // }
    // cout << count << endl;
    vector<int> vec = {10, 20, 30, 40, 50, 99, 100};
    int count{0};
    int index{0}; // See the Q/A forum for more about size_t
                  // size_t is an unsigned int
                  // you can replace size_t with int or unsigned int and it will work fine

    while (index < vec.size() && vec.at(index) != 99)
    {
        ++count;
        ++index;
    }
    cout << count << endl;

    return 0;
}
