/*
 * 01 - Introduction to C++
 * Basic program structure and variables
 */

#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int number = 42;
    float pi = 3.14f;
    char grade = 'A';
    bool isPassing = true;
    
    // Output
    cout << "Number: " << number << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passing: " << isPassing << endl;
    
    // Memory address
    cout << "Address of number: " << &number << endl;
    
    return 0;
}

/*
 * Expected Output:
 * Number: 42
 * Pi: 3.14
 * Grade: A
 * Passing: 1
 * Address of number: 0x7fff5fbff8ac
 */

/*
 * TASK: Create a program that declares variables for:
 * - Your age (int)
 * - Your height in meters (float)
 * - Your first initial (char)
 * - Whether you like programming (bool)
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * int main() {
 *     int age = 20;
 *     float height = 1.75f;
 *     char initial = 'A';
 *     bool likesProgramming = true;
 *     
 *     cout << "Age: " << age << endl;
 *     cout << "Height: " << height << "m" << endl;
 *     cout << "Initial: " << initial << endl;
 *     cout << "Likes Programming: " << likesProgramming << endl;
 *     
 *     return 0;
 * }
 */