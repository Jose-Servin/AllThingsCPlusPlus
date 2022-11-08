#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

// Function Prototyping
void say_hello(char name)
{
    cout << "This is implemented when the argument is a char. " << endl;
    cout << "Hello " << name << endl;
}

void say_hello(string name)
{
    cout << "This is implemented when the argument is a string. " << endl;
    cout << "Hello " << name << endl;
}

void say_hello(std::vector<string> v)
{
    cout << "This is implemented when the argument is a vector of names. " << endl;
    for (string name : v)
        cout << "Hello " << name << endl;
}
int main()
{
    vector<string> names = {"Baker", "Bella", "Luna"};
    say_hello(names);
    return 0;
}
