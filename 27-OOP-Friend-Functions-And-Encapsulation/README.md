# Friend Functions and Encapsulation Overrides

An isolated system utility showing how C++ allows controlled encapsulation bypasses using explicit friendship definitions.

## 🧠 Logic & Access Grants
- **The Friend Mechanism:** A global non-member function (`passwordBypassUtility`) is explicitly registered inside the class body using the `friend` prefix keyword.
- **Data Interception:** This strategic authorization gives the declared function full structural permissions to read and manipulate internal hidden variables like `adminPassword` from outside standard scopes.

## 🛠️ Concepts Covered
- Encapsulation Override Handling
- Global Non-Member Interventions
- Friend Access Mapping (`friend`)
