# Dynamic Memory Allocation on Heap

A crucial system-level script demonstrating how to allocate memory dynamically during program execution and prevent severe memory leaks.

## 🧠 Logic & RAM Allocation
- **Heap Allocation (`new`):** Unlike stack memory which has a fixed size at compile time, the `new` operator requests raw dynamic blocks directly from the Heap based on user runtime input.
- **Memory Cleanup (`delete[]`):** Dynamic memory does not auto-delete. This project uses `delete[]` to explicitly free the allocated block back to the system, avoiding memory leaks, and sets the pointer to `NULL` to eliminate dangling references.

## 🛠️ Concepts Covered
- Heap vs Stack Memory Arch
- Dynamic Array Instantiation
- Memory Leak Prevention (`delete[]`)
