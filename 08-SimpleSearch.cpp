#include <iostream>  
using namespace std;  

int main() {
    // Declare and initialize an array of names
    const string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    // Calculate the number of elements in the names array
    const int N = sizeof(names) / sizeof(names[0]);

    string target; // Variable to store the name the user wants to search for

    // Prompt the user to enter a name
    cout << "Enter name to search: ";
    cin >> target; // Read the user's input

    bool found = false; // Flag to indicate if the name is found

    // Loop through the array to search for the target name
    for (int i = 0; i < N; ++i) {
        if (names[i] == target) { // Check if the current name matches the target
            found = true; // Set the flag to true if found
            break;        // Exit the loop early since the name is found
        }
    }

    // Output the result based on the search
    if (found)
        cout << target << " is in the list.\n";
    else
        cout << target << " is not in the list.\n";

    return 0; 
}