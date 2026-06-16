# Runtime Polymorphism and Virtual Functions

An advanced architectural design demonstrating Late Binding where method resolution is determined at runtime based on the actual object type, not the pointer type.

## 🧠 Logic & Late Binding (V-Tables)
- **The `virtual` Keyword:** Declaring a base function as `virtual` tells the compiler to look at the actual object pointed to, rather than the type of the pointer itself.
- **The V-Table Mechanism:** Behind the scenes, the compiler creates a Virtual Table (V-Table) for the class hierarchy. At runtime, the application checks this table to dynamically trigger the overriden method (`override`).

## 🛠️ Concepts Covered
- Runtime Polymorphism / Late Binding
- Base Class Pointers to Child Objects
- Virtual Table (V-Table) Lookups & `override` Assertions
