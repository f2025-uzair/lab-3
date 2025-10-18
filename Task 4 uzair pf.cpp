#include <iostream>
using namespace std;
int main() {
     // Define prices of items
    double item1 = 12.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 14.95;
    double item5 = 3.95;

    // Display each item's price
    cout << "Price of Item 1: $" << item1 << endl;
    cout << "Price of Item 2: $" << item2 << endl;
    cout << "Price of Item 3: $" << item3 << endl;
    cout << "Price of Item 4: $" << item4 << endl;
    cout << "Price of Item 5: $" << item5 << endl;

    // Calculate subtotal
    double subtotal = item1 + item2 + item3 + item4 + item5;

    // Calculate sales tax (6%)
    double salesTax = subtotal * 0.06;

    // Calculate total
    double total = subtotal + salesTax;

    // Display subtotal, sales tax, and total
    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Sales Tax (6%): $" << salesTax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}