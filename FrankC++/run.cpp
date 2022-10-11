#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // first we take in how many pets the user has
    int number_of_pets = 0;
    cout << "How many pets do you have? " << endl;
    cin >> number_of_pets;

    // next, we create the data structure to hold the name of pet's we are going to receive.
    vector<string> name_of_pets = {};

    // ask for each pet name ; iterate "up to" the number of pets the user has
    // this also ensures we ask for the right amount of pet names
    for (int i = 1; i <= number_of_pets; ++i)
    {
        string name = "";
        cout << "Enter the name for pet number " << i << endl;
        cin >> name;
        // store the pet name into our vector
        name_of_pets.push_back(name);
    }

    // display the pet names that were just submitted
    cout << "----------------------PET SUMMARY-------------------------" << endl;
    cout << "You have " << number_of_pets << " pets! Here are their names: " << endl;
    for (auto name : name_of_pets)
    {
        cout << name << endl;
    }
}
