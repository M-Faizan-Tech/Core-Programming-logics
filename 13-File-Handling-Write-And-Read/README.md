# File Handling (Persistent Data Storage)

A vital backend script that bypasses volatile RAM storage by reading and writing structured records directly onto the hard disk.

## 🧠 Logic & Stream Architecture
- **Output File Stream (`ofstream`):** Creates an external stream pipeline to write and commit text data into a persistent local file (`database.txt`).
- **Input File Stream (`ifstream`):** Re-opens the text pipeline to extract strings from the storage buffer.
- **Dynamic Reading Loop (`getline`):** Iterates over individual lines until the End-Of-File (EOF) flag is raised, ensuring complete data recovery.

## 🛠️ Concepts Covered
- File Stream Pipelines (`<fstream>`)
- Persistent Data Ingestion
- Stream Verification & Safe Closure
