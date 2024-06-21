#include <iostream>
#include <iomanip>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "Currency Converter" << endl;
    cout << "1. USD to EUR" << endl;
    cout << "2. USD to GBP" << endl;
    cout << "3. USD to INR" << endl;
    cout << "4. EUR to USD" << endl;
    cout << "5. GBP to USD" << endl;
    cout << "6. INR to USD" << endl;
    cout << "7. Exit" << endl;
    cout << "Choose an option: ";
}

// Function to convert currency
double convertCurrency(double amount, double rate) {
    return amount * rate;
}

int main() {
    int choice;
    double amount;
    double convertedAmount;

    // Exchange rates (as of a specific date, these rates will vary over time)
    const double USD_TO_EUR = 0.91;
    const double USD_TO_GBP = 0.81;
    const double USD_TO_INR = 82.00;
    const double EUR_TO_USD = 1.10;
    const double GBP_TO_USD = 1.23;
    const double INR_TO_USD = 0.012;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 7) {
            break; // Exit the program
        }

        cout << "Enter the amount: ";
        cin >> amount;

        switch (choice) {
            case 1:
                convertedAmount = convertCurrency(amount, USD_TO_EUR);
                cout << fixed << setprecision(2) << amount << " USD = " << convertedAmount << " EUR" << endl;
                break;
            case 2:
                convertedAmount = convertCurrency(amount, USD_TO_GBP);
                cout << fixed << setprecision(2) << amount << " USD = " << convertedAmount << " GBP" << endl;
                break;
            case 3:
                convertedAmount = convertCurrency(amount, USD_TO_INR);
                cout << fixed << setprecision(2) << amount << " USD = " << convertedAmount << " INR" << endl;
                break;
            case 4:
                convertedAmount = convertCurrency(amount, EUR_TO_USD);
                cout << fixed << setprecision(2) << amount << " EUR = " << convertedAmount << " USD" << endl;
                break;
            case 5:
                convertedAmount = convertCurrency(amount, GBP_TO_USD);
                cout << fixed << setprecision(2) << amount << " GBP = " << convertedAmount << " USD" << endl;
                break;
            case 6:
                convertedAmount = convertCurrency(amount, INR_TO_USD);
                cout << fixed << setprecision(2) << amount << " INR = " << convertedAmount << " USD" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }

        cout << endl;
    }

    return 0;
}
