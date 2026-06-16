# Hybrid Inheritance and the Diamond Problem Resolution

An advanced compilation layer that builds a complex hybrid graph and resolves structural reference ambiguity using Virtual Base classes.

## 🧠 Logic & The Diamond Problem
- **The Issue:** In hybrid paths, a child class inherits from two parent classes that share a common grandparent. This causes duplicate memory copies of the grandparent class to cascade down, resulting in ambiguous compiler errors.
- **The Fix:** Using the `virtual` access modifier (`virtual public University`) forces the C++ compiler to generate exactly *one* shared layout instance of the grandparent scope, resolving conflicting memory copies.

## 🛠️ Concepts Covered
- Hybrid Inheritance Graphs
- The Diamond Problem Ambiguity
- Virtual Base Class Optimization (`virtual`)
