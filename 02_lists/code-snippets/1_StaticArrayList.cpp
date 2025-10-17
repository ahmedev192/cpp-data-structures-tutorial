#include <iostream>
using namespace std;

/*
 * ===============================
 *  STATIC ARRAY-BASED LIST
 * ===============================
 * This implementation uses a fixed-size array.
 * Students often confuse capacity vs current size.
 * - CAPACITY: how many elements can fit at most.
 * - size: how many elements are currently used.
 */


class StaticList {
private:
    const int CAPACITY = 10;       // Maximum allowed elements
    int data[CAPACITY];       // The array itself (fixed size 10)
    int size;           // How many elements currently in use

public:
    // Constructor
    StaticList() {
        size = 0;
    }

    // Check if the list is empty
    bool empty() {
        return size == 0;
    }

    // Insert a new element at a given position
    void insert(int pos, int value) {
        if (size >= CAPACITY) {
            cout << "Error: List is full!" << endl;
            return;
        }
        if (pos < 0 || pos > size) {
            cout << "Error: Invalid position!" << endl;
            return;
        }

        // Shift elements to the right
        for (int i = size; i > pos; i--) {
            data[i] = data[i - 1];
        }

        data[pos] = value;
        size++;
    }

    // Remove element at a given position
    void erase(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Error: Invalid position!" << endl;
            return;
        }

        // Shift elements to the left
        for (int i = pos; i < size - 1; i++) {
            data[i] = data[i + 1];
        }

        size--;
    }

    // Display list contents
    void display() {
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    StaticList list;
    list.insert(0, 10);
    list.insert(1, 20);
    list.insert(1, 15);
    cout << "After insertions: ";
    list.display();

    list.erase(1);
    cout << "After erase: ";
    list.display();

    return 0;
}
