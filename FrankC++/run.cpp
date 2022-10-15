#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string phrase = "I like to Code!";

    // to get the first 6 characters (spaces count as characters)
    cout << phrase.substr(0, 6) << endl;
}
