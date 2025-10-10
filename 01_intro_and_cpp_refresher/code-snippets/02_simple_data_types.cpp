/*
 * 02 - Simple Data Types
 * int, float, char, bool with basic operations
 */

#include <iostream>
using namespace std;

int main() {
    // Integer operations
    int a = 10, b = 3;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;  // Integer division
    cout << "a % b = " << (a % b) << endl;  // Modulo
    
    // Float operations
    float x = 10.0f, y = 3.0f;
    cout << "x / y = " << (x / y) << endl;  // Float division
    
    // Boolean operations
    bool p = true, q = false;
    cout << "p && q = " << (p && q) << endl;  // AND
    cout << "p || q = " << (p || q) << endl;  // OR
    cout << "!p = " << (!p) << endl;          // NOT
    
    // Character operations
    char letter = 'A';
    cout << "Letter: " << letter << endl;
    cout << "ASCII value: " << (int)letter << endl;
    
    return 0;
}

/*
 * Expected Output:
 * a + b = 13
 * a - b = 7
 * a * b = 30
 * a / b = 3
 * a % b = 1
 * x / y = 3.33333
 * p && q = 0
 * p || q = 1
 * !p = 0
 * Letter: A
 * ASCII value: 65
 */

/*
 * TASK: Calculate the area and perimeter of a rectangle.
 * Given: length = 8.5, width = 4.2
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * int main() {
 *     float length = 8.5f;
 *     float width = 4.2f;
 *     
 *     float area = length * width;
 *     float perimeter = 2 * (length + width);
 *     
 *     cout << "Area: " << area << endl;
 *     cout << "Perimeter: " << perimeter << endl;
 *     
 *     return 0;
 * }
 */