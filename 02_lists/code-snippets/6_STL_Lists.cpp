#include <iostream>
#include <vector>
#include <list>
using namespace std;

/*
 * ============================================================
 *      BUILT-IN DATA STRUCTURES (STL CONTAINERS) IN C++
 * ============================================================
 * After manually building:
 *  - StaticList          → fixed-size array
 *  - DynamicList         → resizable array (heap)
 *  - SinglyLinkedList    → forward-only chain
 *  - DoublyLinkedList    → forward & backward chain
 *  - CircularLinkedList  → looping chain (no null)
 *
 * Now we move to STL (Standard Template Library),
 * where C++ provides *ready-made containers* for these ideas.
 *
 * ------------------------------------------------------------
 * 1️⃣ vector<T>
 *     → Built-in equivalent of our DynamicList
 *     → Implemented as a *dynamic array* that auto-resizes.
 *
 *     ✅ Fast random access (O(1))
 *     ✅ Automatically grows
 *     ❌ Inserting/removing in the middle is O(n)
 *     ❌ May reallocate (move all elements)
 *
 *     ➤ Use it when:
 *       - You need index-based access (arr[i])
 *       - Data grows/shrinks at the END frequently
 *
 * ------------------------------------------------------------
 * 2️⃣ list<T>
 *     → Built-in equivalent of our DoublyLinkedList
 *     → Implemented as a doubly linked list.
 *
 *     ✅ Fast insert/erase anywhere (O(1))
 *     ✅ No reallocations
 *     ❌ No random access (must use iterators)
 *
 *     ➤ Use it when:
 *       - You frequently insert/remove in the middle
 *       - You need bidirectional traversal
 *
 * ------------------------------------------------------------
 * ⚙️ STL manages:
 *   - Memory allocation/deallocation automatically.
 *   - Copying and resizing efficiently.
 *   - Iterators to traverse (like smart pointers).
 * 
 * ------------------------------------------------------------
 * 🚀 When to use manual (custom) lists:
 *   - For learning and understanding memory/pointer concepts.
 *   - When you need full control over node layout or memory management.
 *   - When implementing special data structures not provided by STL,
 *     e.g. Circular Doubly Linked List, Skip List, Graph structures, etc.
 */

int main() {
    // =========================================================
    // VECTOR — Dynamic Array (like DynamicList)
    // =========================================================
    cout << "=== Using vector (Dynamic Array) ===\n";

    vector<int> vec; // initially empty dynamic array
    vec.push_back(10); // add element at the end
    vec.push_back(20);
    vec.insert(vec.begin() + 1, 15); // insert before position 1 (O(n))

    cout << "Vector contents: ";
    for (int x : vec)
        cout << x << " ";
    cout << "\n";

    // Erase element at index 1
    vec.erase(vec.begin() + 1); // shifts elements left (O(n))

    cout << "After erase: ";
    for (int x : vec)
        cout << x << " ";
    cout << "\n\n";

    // =========================================================
    // LIST — Doubly Linked List (like DoublyLinkedList)
    // =========================================================
    cout << "=== Using list (Doubly Linked List) ===\n";

    list<int> linkedList;
    linkedList.push_back(10);  // insert at end
    linkedList.push_front(5);  // insert at front
    linkedList.insert(next(linkedList.begin()), 7); // insert after first element

    cout << "List contents: ";
    for (int x : linkedList)
        cout << x << " ";
    cout << "\n";

    // Remove element by value (all matching elements removed)
    linkedList.remove(7);

    cout << "After removing 7: ";
    for (int x : linkedList)
        cout << x << " ";
    cout << "\n";

    /*
     * =========================================================
     * Summary — When to use which
     * =========================================================
     *
     *  ┌──────────────────────────────┬───────────────────────────────┐
     *  │ Structure                    │ Best for                      │
     *  ├──────────────────────────────┼───────────────────────────────┤
     *  │ array<T, N> (STL)           │ Fixed-size data               │
     *  │ vector<T>                   │ Dynamic random-access storage │
     *  │ list<T>                     │ Frequent middle insert/delete │
     *  └──────────────────────────────┴───────────────────────────────┘
     *
     *  ➤ Custom (manual) structures:
     *     - Useful for special topologies:
     *         • Circular doubly linked lists
     *         • Custom graphs
     *         • Trees or heaps with special behavior
     *         • Memory-optimized or embedded systems
     */
}
