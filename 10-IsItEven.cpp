#include <iostream> 

// Function to check if a number is even or odd
// Takes an integer 'n' as input and returns a descriptive string
string checkEven(int n) {
    return (n % 2 == 0)                     // Use the modulo operator to check if n is divisible by 2
         ? "The provided number is even"    // If true, return this message
         : "The provided number is odd";    // If false, return this message
}

int main() {
    int n; // Variable to store user input

    // Prompt user to enter a number
    cout << "Enter a number: ";
    cin >> n; // Read the input number from the user

    // Call the checkEven function and display the result
    cout << checkEven(n) << endl;

    return 0; 
}