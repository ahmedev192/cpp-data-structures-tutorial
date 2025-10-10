/*
 * 05 - Dynamic Arrays
 * Dynamic memory allocation for arrays
 */

#include <iostream>
using namespace std;

int main() {
    // Dynamic array allocation
    int size = 5;
    int* dynamicArray = new int[size];
    
    // Initialize array
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }
    
    // Print array
    cout << "Dynamic array: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    
    // Resize array
    int newSize = 8;
    int* newArray = new int[newSize];
    
    // Copy existing elements
    for (int i = 0; i < size; i++) {
        newArray[i] = dynamicArray[i];
    }
    
    // Add new elements
    for (int i = size; i < newSize; i++) {
        newArray[i] = (i + 1) * 10;
    }
    
    // Clean up old array
    delete[] dynamicArray;
    dynamicArray = newArray;
    size = newSize;
    
    cout << "Resized array: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    
    // Clean up
    delete[] dynamicArray;
    
    return 0;
}

/*
 * Expected Output:
 * Dynamic array: 10 20 30 40 50
 * Resized array: 10 20 30 40 50 60 70 80
 */

/*
 * TASK: Create a dynamic array to store user input numbers.
 * Ask user for array size, then input numbers and display them.
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * int main() {
 *     int size;
 *     cout << "Enter array size: ";
 *     cin >> size;
 *     
 *     int* arr = new int[size];
 *     
 *     cout << "Enter " << size << " numbers: ";
 *     for (int i = 0; i < size; i++) {
 *         cin >> arr[i];
 *     }
 *     
 *     cout << "Your numbers: ";
 *     for (int i = 0; i < size; i++) {
 *         cout << arr[i] << " ";
 *     }
 *     cout << endl;
 *     
 *     delete[] arr;
 *     return 0;
 * }
 */