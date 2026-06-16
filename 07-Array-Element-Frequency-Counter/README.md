# Array Element Frequency Counter

An optimization script that calculates the repetition metrics of distinct items within a 1D Array structure.

## 🧠 Logic & Algorithm
- **Visited Array Tracking:** Uses a secondary tracking array (`freq[]`) initialized to `-1`. 
- **Duplicate Prevention:** The outer loop selects an element, and the inner loop scans forward. If a duplicate is found, the counter increments, and the duplicate's index in `freq[]` is set to `0` so it isn't processed twice.

## 🛠️ Concepts Covered
- Frequency Distribution Math
- Array Flagging & Masking
- Nested Linear Searches
