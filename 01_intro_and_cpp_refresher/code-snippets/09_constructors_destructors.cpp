/*
 * 09 - Constructors and Destructors
 * Basic constructor and destructor concepts
 */

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    
public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }
    
    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }
    
    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    cout << "Creating person..." << endl;
    Person person("Alice", 25);
    
    cout << "Person info: ";
    person.printInfo();
    
    cout << "End of main function..." << endl;
    // Destructor called here when person goes out of scope
    
    return 0;
}

/*
 * Expected Output:
 * Creating person...
 * Constructor called for Alice
 * Person info: Name: Alice, Age: 25
 * End of main function...
 * Destructor called for Alice
 */

/*
 * TASK: Create a Car class with constructor and destructor.
 * The constructor should print "Car created" and destructor "Car destroyed".
 * 
 * ANSWER:
 * #include <iostream>
 * #include <string>
 * using namespace std;
 * 
 * class Car {
 * private:
 *     string model;
 * 
 * public:
 *     Car(string m) {
 *         model = m;
 *         cout << "Car created: " << model << endl;
 *     }
 *     
 *     ~Car() {
 *         cout << "Car destroyed: " << model << endl;
 *     }
 * };
 * 
 * int main() {
 *     Car myCar("Toyota");
 *     cout << "Using the car..." << endl;
 *     return 0;
 * }
 */