#include <iostream>
using namespace std;

/*
 * ==========================================
 *           SINGLY LINKED LIST
 * ==========================================
 * Compared to StaticList and DynamicList:
 * ------------------------------------------
 * 1️⃣ Memory Management:
 *     - StaticList → Fixed array in stack memory.
 *     - DynamicList → Dynamic array on the heap.
 *     - SinglyLinkedList → Each element (Node) separately allocated on heap.
 *
 * 2️⃣ Structure:
 *     - Uses "Node" structures that hold (data + next pointer).
 *     - Elements are connected by pointers instead of contiguous memory.
 *
 * 3️⃣ Advantages:
 *     - Can grow/shrink freely (no fixed capacity).
 *     - Insertions and deletions are easier and faster (no shifting).
 *
 * 4️⃣ Disadvantages:
 *     - Cannot access elements by index (must traverse from head).
 *     - Requires extra memory for "next" pointers.
 *
 * 5️⃣ Core Idea:
 *     - The `head` pointer always points to the start of the list.
 *     - Each node points to the next node, forming a chain.
 */

struct Node {
    int data;     // Holds the actual value
    Node* next;   // Pointer to the next node in the list
};

class SinglyLinkedList {
private:
    Node* head;  // Points to the first node (nullptr if empty)

public:
    // ----------------------------
    // Constructor
    // ----------------------------
    // Initializes an empty list (head = nullptr)
    SinglyLinkedList() : head(nullptr) {}

    // ----------------------------
    // Insert at the FRONT of the list
    // ----------------------------
    // 1. Create a new node with given value.
    // 2. Link its "next" to the current head.
    // 3. Move head pointer to this new node.
    //
    // Example: If list = [10 → 20]
    // insertFront(5) → [5 → 10 → 20]
    void insertFront(int value) {
        Node* newNode = new Node{ value, head };  // Create node and point to old head
        head = newNode;                         // Update head to new node
    }

    // ----------------------------
    // Insert AFTER a given value
    // ----------------------------
    // 1. Traverse to find node with data == afterValue.
    // 2. Insert new node after it.
    //
    // Example: [10 → 20 → 30]
    // insertAfter(20, 25) → [10 → 20 → 25 → 30]
    void insertAfter(int afterValue, int newValue) {
        Node* ptr = head;

        // Find target node
        while (ptr && ptr->data != afterValue)
            ptr = ptr->next;

        if (!ptr) {
            cout << "Error: Value " << afterValue << " not found!\n";
            return;
        }

        // Insert new node after ptr
        Node* newNode = new Node{ newValue, ptr->next };
        ptr->next = newNode;
    }

    // ----------------------------
    // Delete a node by value
    // ----------------------------
    // 1. If list is empty → do nothing.
    // 2. If head node matches → delete it and move head.
    // 3. Otherwise traverse to find it and unlink it.
    void erase(int value) {
        if (!head) return;  // Empty list

        // If head itself is the node to delete
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Search for the node (keeping track of previous)
        Node* prev = head;
        Node* curr = head->next;

        while (curr && curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        // If found → unlink and delete
        if (curr) {
            prev->next = curr->next;
            delete curr;
        }
    }

    // ----------------------------
    // Display the list contents
    // ----------------------------
    // Traverses from head to end and prints each value.
    void display() const {
        for (Node* ptr = head; ptr; ptr = ptr->next)
            cout << ptr->data << " ";
        cout << endl;
    }

    // ----------------------------
    // Destructor
    // ----------------------------
    // Frees all dynamically allocated nodes one by one.
    ~SinglyLinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// =============================
// MAIN FUNCTION (Test)
// =============================
int main() {
    SinglyLinkedList list;

    // Insert 10, then 20 at front → 20 → 10
    list.insertFront(10);
    list.insertFront(20);

    // Insert 15 after 20 → 20 → 15 → 10
    list.insertAfter(20, 15);

    cout << "Singly Linked List: ";
    list.display();

    // Delete 15 → 20 → 10
    list.erase(15);

    cout << "After deletion: ";
    list.display();
}
