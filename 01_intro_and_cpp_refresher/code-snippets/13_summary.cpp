/*
 * 13 - Summary
 * Complete example combining all concepts
 */

#include <iostream>
#include <string>
using namespace std;

// Student class
class Student {
private:
    string name;
    int* grades;
    int numGrades;
    
public:
    Student(string n, int num) {
        name = n;
        numGrades = num;
        grades = new int[numGrades];
    }
    
    ~Student() {
        delete[] grades;
    }
    
    void setGrade(int index, int grade) {
        if (index >= 0 && index < numGrades) {
            grades[index] = grade;
        }
    }
    
    double getAverage() {
        int sum = 0;
        for (int i = 0; i < numGrades; i++) {
            sum += grades[i];
        }
        return (double)sum / numGrades;
    }
    
    void printInfo() {
        cout << "Student: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < numGrades; i++) {
            cout << grades[i] << " ";
        }
        cout << endl;
        cout << "Average: " << getAverage() << endl;
    }
};

int main() {
    cout << "=== C++ REFRESHER SUMMARY ===" << endl;
    
    // Basic variables
    int count = 5;
    float average = 3.5f;
    char grade = 'A';
    bool passed = true;
    
    cout << "Basic variables: " << count << ", " << average << ", " << grade << ", " << passed << endl;
    
    // Array
    int numbers[] = {85, 90, 78, 92, 88};
    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Pointer
    int* ptr = &count;
    cout << "Pointer value: " << *ptr << endl;
    
    // Dynamic memory
    int* dynamicArray = new int[3];
    dynamicArray[0] = 10;
    dynamicArray[1] = 20;
    dynamicArray[2] = 30;
    
    cout << "Dynamic array: ";
    for (int i = 0; i < 3; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    
    // 2D array
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "2D array: " << matrix[1][2] << endl;
    
    // Object
    Student student("Alice", 3);
    student.setGrade(0, 85);
    student.setGrade(1, 90);
    student.setGrade(2, 78);
    student.printInfo();
    
    // Clean up
    delete[] dynamicArray;
    
    cout << "All concepts demonstrated!" << endl;
    
    return 0;
}

/*
 * Expected Output:
 * === C++ REFRESHER SUMMARY ===
 * Basic variables: 5, 3.5, A, 1
 * Array: 85 90 78 92 88 
 * Pointer value: 5
 * Dynamic array: 10 20 30 
 * 2D array: 6
 * Student: Alice
 * Grades: 85 90 78 
 * Average: 84.3333
 * All concepts demonstrated!
 */

/*
 * TASK: Create a complete program that demonstrates:
 * 1. A class with constructor/destructor
 * 2. Dynamic memory allocation
 * 3. Array operations
 * 4. Pointer usage
 * 
 * ANSWER:
 * #include <iostream>
 * #include <string>
 * using namespace std;
 * 
 * class Calculator {
 * private:
 *     int* numbers;
 *     int count;
 * 
 * public:
 *     Calculator(int size) {
 *         count = size;
 *         numbers = new int[count];
 *         cout << "Calculator created with " << count << " slots" << endl;
 *     }
 *     
 *     ~Calculator() {
 *         delete[] numbers;
 *         cout << "Calculator destroyed" << endl;
 *     }
 *     
 *     void setNumber(int index, int value) {
 *         if (index >= 0 && index < count) {
 *             numbers[index] = value;
 *         }
 *     }
 *     
 *     int getSum() {
 *         int sum = 0;
 *         for (int i = 0; i < count; i++) {
 *             sum += numbers[i];
 *         }
 *         return sum;
 *     }
 * };
 * 
 * int main() {
 *     Calculator calc(3);
 *     calc.setNumber(0, 10);
 *     calc.setNumber(1, 20);
 *     calc.setNumber(2, 30);
 *     
 *     cout << "Sum: " << calc.getSum() << endl;
 *     return 0;
 * }
 */