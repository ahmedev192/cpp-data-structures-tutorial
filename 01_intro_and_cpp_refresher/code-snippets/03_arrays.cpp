/*
 * 03 - Arrays
 * Basic array operations and traversal
 */

#include <iostream>
using namespace std;

int main() {
    // Array declaration and initialization
    int numbers[5] = {10, 25, 7, 42, 15};
    
    // Access elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Third element: " << numbers[2] << endl;
    
    // Traverse array
    cout << "All elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Find maximum
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    cout << "Maximum: " << max << endl;
    
    // Modify array
    numbers[1] = 100;
    cout << "After modification: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}

/*
 * Expected Output:
 * First element: 10
 * Third element: 7
 * All elements: 10 25 7 42 15
 * Maximum: 42
 * After modification: 10 100 7 42 15
 */

/*
 * TASK: Create an array of 5 test scores and find the average.
 * Scores: 85, 92, 78, 96, 88
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * int main() {
 *     int scores[5] = {85, 92, 78, 96, 88};
 *     int sum = 0;
 *     
 *     for (int i = 0; i < 5; i++) {
 *         sum += scores[i];
 *     }
 *     
 *     double average = (double)sum / 5;
 *     cout << "Average score: " << average << endl;
 *     
 *     return 0;
 * }
 */