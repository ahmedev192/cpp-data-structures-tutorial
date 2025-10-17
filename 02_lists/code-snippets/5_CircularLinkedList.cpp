#include <iostream>
using namespace std;

/*
 * ==========================================
 *           CIRCULAR LINKED LIST
 * ==========================================
 * Compared to previous list types:
 * ------------------------------------------
 * 1️⃣ StaticList:
 *     - Fixed-size array (on stack).
 *     - Simple but limited.
 *
 * 2️⃣ DynamicList:
 *     - Dynamic array (on heap).
 *     - Still limited by capacity, contiguous memory.
 *
 * 3️⃣ SinglyLinkedList:
 *     - Each node has a `next` pointer.
 *     - Ends with nullptr (last node → nullptr).
 *
 * 4️⃣ DoublyLinkedList:
 *     - Each node has `prev` and `next`.
 *     - Traversal in both directions.
 *
 * 5️⃣ CircularLinkedList (this one):
 *     - **Last node links back to first node**.
 *     - Forms a circle (no nullptr at all).
 *     - Usually keeps a pointer to `tail` (last node) for easy insertion.
 *
 * Advantages:
 * ✅ Can traverse the list endlessly in a loop.
 * ✅ Efficient insertion at end (O(1)).
 * ✅ Commonly used for queues, round-robin schedulers, playlists, etc.
 *
 * Disadvantages:
 * ❌ Slightly more complex logic (must detect when we looped back).
 * ❌ No natural "end" node.
 */

 // A circular singly linked list node
struct CNode {
    int data;      // Holds the node value
    CNode* next;   // Pointer to the next node (points to first node if it's the last)
};

class CircularLinkedList {
private:
    CNode* tail;   // Points to the last node; tail->next points to the first node

public:
    // ----------------------------
    // Constructor
    // ----------------------------
    // Initializes an empty circular list (tail = nullptr)
    CircularLinkedList() : tail(nullptr) {}

    // ----------------------------
    // Insert at the END of the list
    // ----------------------------
    // 1. Create a new node.
    // 2. If list empty:
    //      - Point node’s next to itself.
    //      - Set tail = new node.
    // 3. Else:
    //      - Point new node’s next to head (tail->next).
    //      - Link old tail’s next to new node.
    //      - Move tail pointer to new node.
    //
    // Example:
    // Insert 10 → [10 → (points back to itself)]
    // Insert 20 → [10 → 20 → 10]
    // Insert 30 → [10 → 20 → 30 → 10]
    void insertEnd(int value) {
        CNode* newNode = new CNode{ value, nullptr };

        if (!tail) {
            // Empty list case
            tail = newNode;
            tail->next = tail;  // Points to itself
        }
        else {
            // Insert after tail
            newNode->next = tail->next;  // newNode->next = head
            tail->next = newNode;        // old tail points to new node
            tail = newNode;              // move tail pointer forward
        }
    }

    // ----------------------------
    // Display all nodes in list
    // ----------------------------
    // Start from head (tail->next) and loop
    // until we reach the starting node again.
    void display() const {
        if (!tail) {
            cout << "List is empty!" << endl;
            return;
        }

        CNode* ptr = tail->next;  // Start from head

        cout << "Circular Linked List: ";
        do {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != tail->next);  // Stop when we complete the circle
        cout << endl;
    }

    // ----------------------------
    // Destructor
    // ----------------------------
    // Loops through the circle and deletes each node.
    ~CircularLinkedList() {
        if (!tail) return;  // Empty list

        CNode* start = tail->next;  // Head node
        CNode* ptr = start;

        // Delete each node until we return to start
        do {
            CNode* temp = ptr;
            ptr = ptr->next;
            delete temp;
        } while (ptr != start);

        tail = nullptr;
    }
};

// =============================
// MAIN FUNCTION (Test)
// =============================
int main() {
    CircularLinkedList list;

    // Insert nodes (each added at end)
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);

    // Display list
    list.display();  // Output: 10 20 30
}
