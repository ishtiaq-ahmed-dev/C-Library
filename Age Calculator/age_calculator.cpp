#include <iostream>
using namespace std;

bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int monthDays(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2) {
        if (isLeap(year))
            return 29;
        else
            return 28;
    } else
        return 0; // invalid month
}

int main() {
    int birthDay, birthMonth, birthYear;
    int currDay, currMonth, currYear;

    cout << "Enter current year: ";
    cin >> currYear;
    cout << "Enter current month: ";
    cin >> currMonth;
    cout << "Enter current day: ";
    cin >> currDay;

    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month: ";
    cin >> birthMonth;
    cout << "Enter your birth day: ";
    cin >> birthDay;

    if (birthYear > currYear ||
        birthMonth < 1 || birthMonth > 12 ||
        currMonth < 1 || currMonth > 12 ||
        birthDay < 1 || birthDay > monthDays(birthMonth, birthYear) ||
        currDay < 1 || currDay > monthDays(currMonth, currYear)) {
        cout << "Invalid date entered.\n";
        return 0;
    }

    if ((birthYear == currYear && birthMonth > currMonth) ||
        (birthYear == currYear && birthMonth == currMonth && birthDay > currDay)) {
        cout << "Birth date cannot be in the future!\n";
        return 0;
    }

    int years = currYear - birthYear;
    int months = currMonth - birthMonth;
    int days = currDay - birthDay;

    if (days < 0) {
        currMonth--;
        if (currMonth == 0) {
            currMonth = 12;
            currYear--;
        }
        days += monthDays(currMonth, currYear);
        months--;
    }

    // Adjust for negative months
    if (months < 0) {
        months += 12;
        years--;
    }

    cout << "\nYou are " << years << " years, " << months << " months, and " 
         << days << " days old.\n";

    long totalDays = 0;

    for (int y = birthYear; y < currYear; y++) {
        if (isLeap(y))
            totalDays += 366;
        else
            totalDays += 365;
    }

    for (int m = 1; m < birthMonth; m++)
        totalDays -= monthDays(m, birthYear);
    totalDays -= (birthDay - 1);

    for (int m = 1; m < currMonth; m++)
        totalDays += monthDays(m, currYear);
    totalDays += currDay;

    long totalWeeks = totalDays / 7;
    long totalMonths = years * 12 + months;
    long hours = totalDays * 24;
    long minutes = hours * 60;
    long seconds = minutes * 60;

    cout << "\n============================\n";
    cout << "Total age in different units:\n";
    cout << "Days   : " << totalDays << endl;
    cout << "Weeks  : " << totalWeeks << endl;
    cout << "Months : " << totalMonths << endl;
    cout << "Hours  : " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
    cout << "============================\\n";

    return 0;
}
