/*
 * 08 - Arrays of Objects
 * Creating and using arrays of objects
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double gpa;
    
public:
    Student(string n, double g) {
        name = n;
        gpa = g;
    }
    
    string getName() { return name; }
    double getGpa() { return gpa; }
    
    void printInfo() {
        cout << name << " - GPA: " << gpa << endl;
    }
};

int main() {
    // Array of Student objects
    Student students[3] = {
        Student("Alice", 3.8),
        Student("Bob", 3.2),
        Student("Charlie", 3.9)
    };
    
    // Print all students
    cout << "All students:" << endl;
    for (int i = 0; i < 3; i++) {
        students[i].printInfo();
    }
    
    // Find student with highest GPA
    int maxIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].getGpa() > students[maxIndex].getGpa()) {
            maxIndex = i;
        }
    }
    
    cout << "Student with highest GPA: ";
    students[maxIndex].printInfo();
    
    // Calculate average GPA
    double total = 0;
    for (int i = 0; i < 3; i++) {
        total += students[i].getGpa();
    }
    double average = total / 3;
    cout << "Average GPA: " << average << endl;
    
    return 0;
}

/*
 * Expected Output:
 * All students:
 * Alice - GPA: 3.8
 * Bob - GPA: 3.2
 * Charlie - GPA: 3.9
 * Student with highest GPA: Charlie - GPA: 3.9
 * Average GPA: 3.63333
 */

/*
 * TASK: Create an array of 3 Book objects with title and price.
 * Find the most expensive book.
 * 
 * ANSWER:
 * #include <iostream>
 * #include <string>
 * using namespace std;
 * 
 * class Book {
 * private:
 *     string title;
 *     double price;
 * 
 * public:
 *     Book(string t, double p) {
 *         title = t;
 *         price = p;
 *     }
 *     
 *     string getTitle() { return title; }
 *     double getPrice() { return price; }
 * };
 * 
 * int main() {
 *     Book books[3] = {
 *         Book("C++ Guide", 29.99),
 *         Book("Python Basics", 24.99),
 *         Book("Java Advanced", 34.99)
 *     };
 *     
 *     int maxIndex = 0;
 *     for (int i = 1; i < 3; i++) {
 *         if (books[i].getPrice() > books[maxIndex].getPrice()) {
 *             maxIndex = i;
 *         }
 *     }
 *     
 *     cout << "Most expensive: " << books[maxIndex].getTitle() 
 *          << " ($" << books[maxIndex].getPrice() << ")" << endl;
 *     return 0;
 * }
 */