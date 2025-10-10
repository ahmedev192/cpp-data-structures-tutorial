/*
 * 07 - Classes
 * Basic class definition and object creation
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;
    
public:
    // Constructor
    Student(string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
    }
    
    // Getter methods
    string getName() { return name; }
    int getAge() { return age; }
    double getGpa() { return gpa; }
    
    // Setter methods
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGpa(double g) { gpa = g; }
    
    // Display method
    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
    }
};

int main() {
    // Create objects
    Student student1("Alice", 20, 3.8);
    Student student2("Bob", 19, 3.2);
    
    // Display information
    cout << "Student 1: ";
    student1.printInfo();
    
    cout << "Student 2: ";
    student2.printInfo();
    
    // Modify object
    student1.setGpa(3.9);
    cout << "After updating GPA: ";
    student1.printInfo();
    
    // Access individual attributes
    cout << "Student 2's name: " << student2.getName() << endl;
    cout << "Student 2's age: " << student2.getAge() << endl;
    
    return 0;
}

/*
 * Expected Output:
 * Student 1: Name: Alice, Age: 20, GPA: 3.8
 * Student 2: Name: Bob, Age: 19, GPA: 3.2
 * After updating GPA: Name: Alice, Age: 20, GPA: 3.9
 * Student 2's name: Bob
 * Student 2's age: 19
 */

/*
 * TASK: Create a Rectangle class with length and width.
 * Include methods to calculate area and perimeter.
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * class Rectangle {
 * private:
 *     double length, width;
 * 
 * public:
 *     Rectangle(double l, double w) {
 *         length = l;
 *         width = w;
 *     }
 *     
 *     double getArea() {
 *         return length * width;
 *     }
 *     
 *     double getPerimeter() {
 *         return 2 * (length + width);
 *     }
 * };
 * 
 * int main() {
 *     Rectangle rect(5.0, 3.0);
 *     cout << "Area: " << rect.getArea() << endl;
 *     cout << "Perimeter: " << rect.getPerimeter() << endl;
 *     return 0;
 * }
 */