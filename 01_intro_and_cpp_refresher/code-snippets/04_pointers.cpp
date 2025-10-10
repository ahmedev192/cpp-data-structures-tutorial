/*
 * 04 - Pointers
 * Basic pointer operations and memory addresses
 */

#include <iostream>
using namespace std;

int main() {
    // Basic pointer
    int number = 42;
    int* ptr = &number;
    
    cout << "Value: " << number << endl;
    cout << "Address: " << &number << endl;
    cout << "Pointer holds: " << ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;
    
    // Modify through pointer
    *ptr = 100;
    cout << "New value: " << number << endl;
    
    // Dynamic memory
    int* dynamicNum = new int;
    *dynamicNum = 75;
    cout << "Dynamic value: " << *dynamicNum << endl;
    
    // Clean up
    delete dynamicNum;
    
    // Pointer arithmetic
    int arr[] = {10, 20, 30, 40, 50};
    int* arrPtr = arr;
    
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " ";
    }
    cout << endl;
    
    return 0;
}

/*
 * Expected Output:
 * Value: 42
 * Address: 0x7fff5fbff8ac
 * Pointer holds: 0x7fff5fbff8ac
 * Value at pointer: 42
 * New value: 100
 * Dynamic value: 75
 * Array elements: 10 20 30 40 50
 */

/*
 * TASK: Use a pointer to swap two integer values.
 * Given: a = 10, b = 20
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * void swap(int* x, int* y) {
 *     int temp = *x;
 *     *x = *y;
 *     *y = temp;
 * }
 * 
 * int main() {
 *     int a = 10, b = 20;
 *     cout << "Before: a=" << a << ", b=" << b << endl;
 *     
 *     swap(&a, &b);
 *     cout << "After: a=" << a << ", b=" << b << endl;
 *     
 *     return 0;
 * }
 */