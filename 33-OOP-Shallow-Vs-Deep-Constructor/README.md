# Deep Copy Constructors vs Shallow Copy Vulnerabilities

An elite pointer-management project demonstrating how to create custom Copy Constructors to prevent runtime segmentation faults and memory corruption.

## 🧠 Logic & Heap Separation
- **Shallow Copy Risk:** Default assignment copies the hexadecimal memory pointer directly. If Object 1 changes its data, Object 2's data changes implicitly because both map to the same address.
- **Deep Copy Solution:** A custom copy constructor intercepts the cloning event, allocates a completely distinct hardware block via `new`, and replicates the inside literal value rather than the address.

## 🛠️ Concepts Covered
- Heap Pointer Cloning
- Shallow Memory Corruption Mitigation
- Custom Reference Copy Constructors
