#include <iostream>  
using namespace std; 

int main() {
    int month; // Variable to store the user's input for month number

    // Prompt the user to enter a month number
    cout << "Enter the month number (1‑12): ";
    cin >> month; // Read the user's input

    // Use a switch statement to determine the number of days in the month
    switch (month) {
        // Months with 31 days
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "31 days" << endl;
            break;

        // Months with 30 days
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "30 days" << endl;
            break;

        // February (assuming it's not a leap year)
        case 2:
            cout << "28 days (assuming non-leap year)" << endl;
            break;

        // Handle invalid month numbers (outside the range 1–12)
        default:
            cout << "Invalid month number — please enter 1 through 12." << endl;
            break;
    }

    return 0; 
}