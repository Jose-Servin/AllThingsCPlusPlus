/* Ask user to enter number from 1-100 */

#include <iostream>

int main() {

    /* Creating variable to store user input*/
    int favorite_number; 

    /* Prompt user to enter their favorite number */
    std::cout << "Enter your favorite number from 1 to 100: ";

    /* Capture user input */
    std::cin >> favorite_number;

    /* Responde back to user */
    std::cout << "Nice! That's my favorite number too! " <<std::endl;
    std::cout << "No really! " << favorite_number << " is my favorite number! " <<std::endl;

    return 0;
}