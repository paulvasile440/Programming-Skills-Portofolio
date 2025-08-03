#include <iostream>  
using namespace std;

int main() {
    const int correct = 12345; // Declare a constant variable to store the correct password

    int attempt = 0; // Variable to store the user's password attempt

    // Keep asking for the password until the correct one is entered
    while (attempt != correct) {
        cout << "Enter password: "; // Prompt the user to enter the password
        cin >> attempt;             // Read the user's input

        // Check if the entered password is incorrect
        if (attempt != correct) {
            cout << "Incorrect password, try again." << endl; // Inform the user the attempt was wrong
        }
    }
    cout << "Welcome to the Secure Area" << endl;

    return 0; 
}