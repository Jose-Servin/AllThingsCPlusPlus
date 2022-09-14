#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> test_scores = {90, 86, 99, 79, 88};

    cout << "Currently we have: " << test_scores.size() << " elements in our vector" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "Enter a new test score to add to our vector: " << endl;

    int score_to_add = 0;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "Now we have: " << test_scores.size() << " elements in our vector" << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << test_scores.at(5) << endl;

    return 0;
}