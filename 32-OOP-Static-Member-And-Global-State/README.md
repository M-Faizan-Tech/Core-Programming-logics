# OOP Static Members and Global State Tracking

This module demonstrates how to implement shared memory segments across multiple independent object layers using the `static` keyword.

## 🧠 Logic & Shared State
- **Class-Level Scope:** Standard fields allocate new memory for every object instance. A `static` variable belongs to the class architecture itself, creating exactly *one* shared memory instance.
- **Global Counters:** Useful for tracking real-time configurations, global system flags, or total instance numbers without utilizing dangerous global variables.

## 🛠️ Concepts Covered
- Static Attribute Declarations
- Scope Resolution Operators (`::`)
- Centralized State Engineering
