# Generic Programming via Templates

This module introduces Generic Programming in C++, showing how to write single logic files that dynamically adapt to any standard data type.

## 🧠 Logic & Code Generalization
- **The Blueprint Placeholder (`T`):** Instead of locking a function into a primitive type like `int` or `float`, `template <typename T>` creates a general placeholder code frame.
- **Compile-Time Generation:** When `findMax<int>` or `findMax<float>` is executed, the compiler intercepts the layout and compiles a specialized version behind the scenes. This strictly follows the DRY (Don't Repeat Yourself) principle.

## 🛠️ Concepts Covered
- Generic System Templates
- Compile-Time Instance Extraction
- Datatype Independent Optimization
