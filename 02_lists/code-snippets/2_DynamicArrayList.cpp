#include <iostream>
using namespace std;

/*
 * ==========================================
 *            DYNAMIC ARRAY-BASED LIST
 * ==========================================
 * Compared to the previous StaticList:
 * ------------------------------------------
 * 1. StaticList used a fixed-size array declared like:
 *        int data[10];
 *    → The capacity was hard-coded and could not change.
 *
 * 2. DynamicList allocates the array dynamically using 'new':
 *        data = new int[capacity];
 *    → The size of the list is now flexible (decided at runtime).
 *
 * 3. DynamicList includes a destructor (~DynamicList) and a
 *    copy constructor to manage dynamic memory safely.
 *
 * 4. All logical rules (insert, erase, valid positions) remain
 *    identical to StaticList — only memory management changes.
 */

class DynamicList {
private:
    int* data;      // Pointer to dynamically allocated array
    int size;       // Current number of elements in the list
    int capacity;   // Maximum number of elements that can fit

public:
    // ----------------------------
    // Constructor
    // ----------------------------
    // Takes a capacity as input and creates a new array on the heap.
    DynamicList(int cap) {
        capacity = cap;
        data = new int[capacity];  // Allocate memory dynamically
        size = 0;                  // Start empty
    }

    // ----------------------------
    // Destructor
    // ----------------------------
    // Frees the dynamically allocated memory when object is destroyed.
    ~DynamicList() {
        delete[] data;  // Must release memory to avoid leaks
    }

    // ----------------------------
    // Copy Constructor
    // ----------------------------
    // Allows creating a new DynamicList as a copy of another.
    // Performs a *deep copy* (allocates new memory and copies elements).
    DynamicList(const DynamicList& other) {
        capacity = other.capacity;
        size = other.size;

        // Allocate new memory and copy elements
        data = new int[capacity];
        for (int i = 0; i < size; i++)
            data[i] = other.data[i];
    }

    // ----------------------------
    // Insert a new element
    // ----------------------------
    // Similar logic as StaticList, but operates on dynamic memory.
    void insert(int pos, int value) {
        // Check if list is already full
        if (size >= capacity) {
            cout << "Error: List is full!" << endl;
            return;
        }

        // Check valid insertion position
        if (pos < 0 || pos > size) {
            cout << "Error: Invalid position!" << endl;
            return;
        }

        // Shift elements to make room for new value
        for (int i = size; i > pos; i--) {
            data[i] = data[i - 1];
        }

        // Place new element
        data[pos] = value;
        size++;
    }

    // ----------------------------
    // Remove an element at position
    // ----------------------------
    void erase(int pos) {
        // Check for valid position
        if (pos < 0 || pos >= size) {
            cout << "Error: Invalid position!" << endl;
            return;
        }

        // Shift elements left to fill the gap
        for (int i = pos; i < size - 1; i++) {
            data[i] = data[i + 1];
        }

        size--;
    }

    // ----------------------------
    // Display all elements
    // ----------------------------
    void display() const {
        cout << "[ ";
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << "]" << endl;
    }
};

// =============================
// Main function for testing
// =============================
int main() {
    // Create a DynamicList with capacity = 5
    DynamicList list(5);

    // Insert some values
    list.insert(0, 10);
    list.insert(1, 20);
    list.insert(2, 30);

    cout << "Dynamic list: ";
    list.display();

    // Remove element at position 1
    list.erase(1);

    cout << "After erase: ";
    list.display();

    return 0;
}
