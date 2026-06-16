# Class Composition and Complex Object Wrapping

The grand finale project of this repository, demonstrating structural object reusability through Class Composition ("HAS-A" Architecture).

## 🧠 Logic & Composition Graphs
- **The HAS-A Model:** Instead of using vertical inheritance structures, composition creates horizontal object relationships. The `HighEndComputer` class directly hosts an instance of `CPUProcessor` as a data member.
- **Lifetime Binding:** In pure composition, the lifecycle of the component object is strictly bound to the lifetime of the container object; if the computer instance is deleted, the processor instance dies with it.

## 🛠️ Concepts Covered
- Class Aggregation & Composition
- Component Lifecycle Lifetime Binding
- Object-Oriented Software Modular Design
