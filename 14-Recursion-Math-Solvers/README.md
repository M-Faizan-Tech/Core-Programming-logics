# Mathematical Logic Formulation via Recursion

A core algorithmic project focused on designing self-referential functions to compute the mathematical Fibonacci sequence without traditional iterative loops.

## 🧠 Logic & Function Stack
- **The Base Case:** Halts the stack processing immediately when the scale decreases to `n <= 1`, protecting the memory from infinite loop crashing.
- **The Recursive Case:** Splitting calculation forks into two structural functions: `fibonacci(n - 1) + fibonacci(n - 2)`. This builds a dynamic call tree over the program runtime stack.

## 🛠️ Concepts Covered
- Functional Self-Invocation
- Base Case Memory Shields
- Stack Trace Mapping & Tree Splits
