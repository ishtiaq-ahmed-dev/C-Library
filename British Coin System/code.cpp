/**
 * British Currency Converter
 * ---------------------------
 * Converts British currency (pounds, shillings, pence)
 * into decimal pounds.
 *
 * Pre-decimal British system:
 *   1 pound (£1) = 20 shillings
 *   1 shilling = 12 pence
 *   Therefore, 1 pound = 240 pence
 *
 * Author: Ishtiaq Ahmed
 */

#include <iostream>
#include <iomanip>  // for std::fixed and std::setprecision

int main() {
    // Use UTF-8 pound symbol
    const char* poundSymbol = "£";

    // Input values
    double pounds = 0.0, shillings = 0.0, pence = 0.0;

    // Prompt user for input
    std::cout << "Enter pounds: ";
    std::cin >> pounds;

    std::cout << "Enter shillings: ";
    std::cin >> shillings;

    std::cout << "Enter pence: ";
    std::cin >> pence;

    // Conversion constants
    const double SHILLINGS_PER_POUND = 20.0;
    const double PENCE_PER_POUND = 240.0;

    // Convert to decimal pounds
    double decimalPounds = pounds + (shillings / SHILLINGS_PER_POUND) + (pence / PENCE_PER_POUND);

    // Display result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTotal in decimal pounds: " << poundSymbol << decimalPounds << std::endl;

    return 0;
}
