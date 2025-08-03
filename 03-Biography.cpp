#include <iostream>
using namespace std;

int main() {
    string name;       // Variable to store the user's name
    string hometown;   // Variable to store the user's hometown
    int age;           // Variable to store the user's age

    cout << "Enter your name:Paul "; // Prompt user to enter their name
    cin >> name;       // Takes input for name (only reads up to the first space)

    cout << "Enter your hometown:London "; // Prompt user to enter hometown
    cin >> hometown;   // Takes input for hometown (only reads up to the first space)

    cout << "Enter your age:33 "; // Prompt user to enter age
    cin >> age;        // Takes integer input for age

    cout << "Name: " << name << endl
         << "Hometown: " << hometown << endl
         << "Age: " << age << endl;

    return 0; 
}