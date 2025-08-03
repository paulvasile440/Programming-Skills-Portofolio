#include <iostream>  
using namespace std; 

int main() {

    // Print numbers from 0 to 50
    cout << "0 to 50:\n";
    for (int i = 0; i <= 50; i++)
        cout << i << " ";
    cout << "\n\n"; // Add spacing after the sequence

    // Print numbers from 50 down to 0
    cout << "50 to 0:\n";
    for (int i = 50; i >= 0; i--)
        cout << i << " ";
    cout << "\n\n"; // Add spacing after the sequence

    // Print numbers from 30 to 50
    cout << "30 to 50:\n";
    for (int i = 30; i <= 50; i++)
        cout << i << " ";
    cout << "\n\n"; 

    // Print numbers from 50 down to 10, decreasing by 2 each time
    cout << "50 down to 10 by 2:\n";
    for (int i = 50; i >= 10; i -= 2)
        cout << i << " ";
    cout << "\n\n"; 

    // Print numbers from 100 to 200, increasing by 5 each time
    cout << "100 to 200 by 5:\n";
    for (int i = 100; i <= 200; i += 5)
        cout << i << " ";
    cout << endl;

    return 0; 
}