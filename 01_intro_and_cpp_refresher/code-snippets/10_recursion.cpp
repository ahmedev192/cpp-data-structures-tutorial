/*
 * 10 - Recursion
 * Basic recursive function examples
 */

#include <iostream>
using namespace std;

// Factorial function
int factorial(int n) {
    if (n <= 1) {
        return 1;  // Base case
    }
    return n * factorial(n - 1);  // Recursive case
}

// Fibonacci function
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

// Sum of array elements
int sumArray(int arr[], int size) {
    if (size == 0) {
        return 0;  // Base case
    }
    return arr[size - 1] + sumArray(arr, size - 1);  // Recursive case
}

int main() {
    // Factorial example
    int n = 5;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    
    // Fibonacci example
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < 8; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    
    // Array sum example
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << "Sum of array: " << sumArray(numbers, size) << endl;
    
    return 0;
}

/*
 * Expected Output:
 * Factorial of 5 = 120
 * Fibonacci sequence: 0 1 1 2 3 5 8 13 
 * Sum of array: 15
 */

/*
 * TASK: Write a recursive function to calculate the sum of digits of a number.
 * Example: sumDigits(123) = 1 + 2 + 3 = 6
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * int sumDigits(int n) {
 *     if (n < 10) {
 *         return n;  // Base case: single digit
 *     }
 *     return (n % 10) + sumDigits(n / 10);  // Recursive case
 * }
 * 
 * int main() {
 *     int number = 123;
 *     cout << "Sum of digits of " << number << " = " << sumDigits(number) << endl;
 *     return 0;
 * }
 */