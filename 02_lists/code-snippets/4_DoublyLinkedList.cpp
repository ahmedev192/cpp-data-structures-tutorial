#include <iostream>
using namespace std;

/*
 * ==========================================
 *          DOUBLY LINKED LIST
 * ==========================================
 * Compared to previous list types:
 * ------------------------------------------
 * 1️⃣ StaticList:
 *     - Fixed-size array on stack.
 *     - No pointers, fast access, limited space.
 *
 * 2️⃣ DynamicList:
 *     - Dynamic array on heap.
 *     - Can choose size at runtime, still fixed afterward.
 *
 * 3️⃣ SinglyLinkedList:
 *     - Each element (Node) allocated separately.
 *     - Each node has ONE pointer (next).
 *     - Can traverse only forward.
 *
 * 4️⃣ DoublyLinkedList (this one):
 *     - Each node has TWO pointers: `prev` and `next`.
 *     - Can traverse both forward and backward.
 *     - Easier deletion and insertion (no need to find previous node).
 *
 * 5️⃣ Trade-offs:
 *     ✅ Easier bidirectional navigation.
 *     ✅ Deletion is simpler and faster.
 *     ❌ Requires more memory per node (two pointers).
 */

 // A doubly linked list node
struct DNode {
    int data;      // Data value
    DNode* prev;   // Pointer to previous node
    DNode* next;   // Pointer to next node
};

class DoublyLinkedList {
private:
    DNode* head;   // Pointer to the first node

public:
    // ----------------------------
    // Constructor
    // ----------------------------
    // Initialize empty list (head = nullptr)
    DoublyLinkedList() : head(nullptr) {}

    // ----------------------------
    // Insert at the FRONT of the list
    // ----------------------------
    // 1. Create new node.
    // 2. Set its next pointer to current head.
    // 3. Set its prev pointer to nullptr.
    // 4. Update old head’s prev pointer.
    // 5. Move head to new node.
    //
    // Example:
    // [10 <-> 20] → insertFront(5)
    // Result: [5 <-> 10 <-> 20]
    void insertFront(int value) {
        DNode* newNode = new DNode{ value, nullptr, head }; // newNode.prev=nullptr, newNode.next=head

        if (head)                    // if list not empty
            head->prev = newNode;    // old head points back to new node

        head = newNode;              // move head to the new node
    }

    // ----------------------------
    // Display from head → tail
    // ----------------------------
    // Traverse forward using next pointers.
    void displayForward() const {
        cout << "Forward: ";
        for (DNode* ptr = head; ptr; ptr = ptr->next)
            cout << ptr->data << " ";
        cout << endl;
    }

    // ----------------------------
    // Display from tail → head
    // ----------------------------
    // Traverse forward to reach the end,
    // then print backward using prev pointers.
    void displayBackward() const {
        if (!head) return;               // empty list check
        DNode* ptr = head;

        // Move to the last node
        while (ptr->next)
            ptr = ptr->next;

        cout << "Backward: ";
        for (; ptr; ptr = ptr->prev)
            cout << ptr->data << " ";
        cout << endl;
    }

    // ----------------------------
    // Destructor
    // ----------------------------
    // Frees all dynamically allocated nodes.
    ~DoublyLinkedList() {
        while (head) {
            DNode* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// =============================
// MAIN FUNCTION (Test)
// =============================
int main() {
    DoublyLinkedList list;

    // Insert 10, 20, 30 at front
    // List builds like this:
    // insertFront(10) → [10]
    // insertFront(20) → [20 <-> 10]
    // insertFront(30) → [30 <-> 20 <-> 10]
    list.insertFront(10);
    list.insertFront(20);
    list.insertFront(30);

    // Show forward and backward traversals
    list.displayForward();   // Forward: 30 20 10
    list.displayBackward();  // Backward: 10 20 30
}
