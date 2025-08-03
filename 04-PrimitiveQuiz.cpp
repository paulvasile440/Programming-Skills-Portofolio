#include <iostream>  
using namespace std; 

int main() {
    // Ask the user a question
    cout << "What is the capital of France? ";

    string answer; // Variable to store the user's answer

    // Read a full line of input, allowing for spaces if needed
    getline(cin, answer);

    // Check if the user's answer is correct
    if (answer == "Paris") {
        // If the answer is exactly "Paris", print a success message
        cout << "Correct! Paris is the capital of France." << endl;
    } else {
        // If the answer is anything else, print a correction message
        cout << "Incorrect. The capital of France is Paris." << endl;
    }

    return 0; // Exit the program
}