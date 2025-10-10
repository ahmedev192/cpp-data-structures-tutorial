/*
 * 12 - Programmer Defined Types
 * Enums and typedef examples
 */

#include <iostream>
using namespace std;

// Enum for days of week
enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// Enum for student grade
enum Grade {
    A = 90,
    B = 80,
    C = 70,
    D = 60,
    F = 0
};

// Typedef for custom types
typedef int StudentID;
typedef double GPA;

// Function to get day name
string getDayName(Day day) {
    switch (day) {
        case MONDAY: return "Monday";
        case TUESDAY: return "Tuesday";
        case WEDNESDAY: return "Wednesday";
        case THURSDAY: return "Thursday";
        case FRIDAY: return "Friday";
        case SATURDAY: return "Saturday";
        case SUNDAY: return "Sunday";
        default: return "Unknown";
    }
}

// Function to get grade letter
char getGradeLetter(Grade grade) {
    if (grade >= A) return 'A';
    else if (grade >= B) return 'B';
    else if (grade >= C) return 'C';
    else if (grade >= D) return 'D';
    else return 'F';
}

int main() {
    // Using enums
    Day today = WEDNESDAY;
    cout << "Today is: " << getDayName(today) << endl;
    
    Grade studentGrade = B;
    cout << "Student grade: " << getGradeLetter(studentGrade) << endl;
    
    // Using typedef
    StudentID id = 12345;
    GPA gpa = 3.8;
    
    cout << "Student ID: " << id << endl;
    cout << "GPA: " << gpa << endl;
    
    // Enum values
    cout << "Monday value: " << MONDAY << endl;
    cout << "Friday value: " << FRIDAY << endl;
    
    return 0;
}

/*
 * Expected Output:
 * Today is: Wednesday
 * Student grade: B
 * Student ID: 12345
 * GPA: 3.8
 * Monday value: 1
 * Friday value: 5
 */

/*
 * TASK: Create an enum for months and a typedef for temperature.
 * Write a function that returns the season for a given month.
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, 
 *              JUL, AUG, SEP, OCT, NOV, DEC };
 * 
 * typedef double Temperature;
 * 
 * string getSeason(Month month) {
 *     if (month >= MAR && month <= MAY) return "Spring";
 *     if (month >= JUN && month <= AUG) return "Summer";
 *     if (month >= SEP && month <= NOV) return "Fall";
 *     return "Winter";
 * }
 * 
 * int main() {
 *     Month currentMonth = JUL;
 *     Temperature temp = 25.5;
 *     
 *     cout << "Month: " << currentMonth << endl;
 *     cout << "Season: " << getSeason(currentMonth) << endl;
 *     cout << "Temperature: " << temp << "°C" << endl;
 *     return 0;
 * }
 */