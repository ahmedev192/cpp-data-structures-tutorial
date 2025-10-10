/*
 * 06 - Two-Dimensional Arrays
 * Basic 2D array operations
 */

#include <iostream>
using namespace std;

int main() {
    // 2D array declaration
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Print 2D array
    cout << "2D Array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Access specific element
    cout << "Element at [1][2]: " << matrix[1][2] << endl;
    
    // Row sum
    cout << "Row sums:" << endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 4; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i << ": " << rowSum << endl;
    }
    
    // Column sum
    cout << "Column sums:" << endl;
    for (int j = 0; j < 4; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j << ": " << colSum << endl;
    }
    
    return 0;
}

/*
 * Expected Output:
 * 2D Array:
 * 1	2	3	4	
 * 5	6	7	8	
 * 9	10	11	12	
 * Element at [1][2]: 7
 * Row sums:
 * Row 0: 10
 * Row 1: 26
 * Row 2: 42
 * Column sums:
 * Column 0: 15
 * Column 1: 18
 * Column 2: 21
 * Column 3: 24
 */

/*
 * TASK: Create a 2x3 matrix and find the sum of all elements.
 * Matrix: {{1, 2, 3}, {4, 5, 6}}
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * int main() {
 *     int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
 *     int sum = 0;
 *     
 *     for (int i = 0; i < 2; i++) {
 *         for (int j = 0; j < 3; j++) {
 *             sum += matrix[i][j];
 *         }
 *     }
 *     
 *     cout << "Sum of all elements: " << sum << endl;
 *     return 0;
 * }
 */