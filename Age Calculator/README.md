# 🎂 **Comprehensive Age Calculator in C++**

This program calculates your **exact age** in **years, months, and days**, and also provides your **total age in weeks, days, hours, minutes, and seconds** — with full support for **leap years** and **date validation**.

It demonstrates advanced handling of:  
✔️ **Conditional logic**  
✔️ **Leap year detection**  
✔️ **Date arithmetic**  
✔️ **Input validation and time conversions**

---

## 🧠 **Core Concepts Used**

| **Concept** | **Purpose** |
|--------------|-------------|
| 🗓️ **Leap Year Check** | Determines if February has 28 or 29 days. |
| 📆 **Month Days Function** | Returns the exact number of days for any given month. |
| 🔢 **Date Arithmetic** | Calculates differences between current and birth dates accurately. |
| ⚙️ **Loops and Conditionals** | Handle logic for adjusting negative days or months. |
| 🧮 **Unit Conversion** | Converts total days into weeks, months, hours, minutes, and seconds. |

---

## 🧩 **Code Structure**

### 🔹 **Leap Year Function**

cpp
bool isLeap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

🔹 Month Days Function
int monthDays(int month, int year) {
    if (month == 2) return isLeap(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else if (month >= 1 && month <= 12) return 31;
    return 0;
}

🔹 Main Program Flow

Take user input for current and birth dates.

Validate the dates.

Calculate precise age in years, months, and days.

Convert total lived time into days, weeks, hours, minutes, and seconds.

Display all results neatly formatted.

🧪 Example Execution
Enter current year: 2025
Enter current month: 10
Enter current day: 9
Enter your birth year: 2000
Enter your birth month: 4
Enter your birth day: 15

You are 25 years, 5 months, and 24 days old.

============================
Total age in different units:
Days   : 9315
Weeks  : 1330
Months : 305
Hours  : 223560
Minutes: 13413600
Seconds: 804816000
============================

⚙️ How to Run

Save this code as age_calculator.cpp

Open terminal in the same folder

Compile and execute:

g++ age_calculator.cpp -o age_calc
./age_calc

📘 Learning Outcomes

By practicing this project, you will:
✅ Master modular programming with helper functions
✅ Learn how to handle leap years and invalid dates
✅ Understand time unit conversions
✅ Strengthen your logic-building and debugging skills
✅ Build confidence with C++ input/output and conditionals

👨‍💻 Author

Ishtiaq Ahmed
🎓 AI Student • 💻 C++ & Python Developer • 🧠 Data Structures Enthusiast
