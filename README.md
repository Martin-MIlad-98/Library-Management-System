# 📚 Library Management System (C++)

## 📌 Project Overview
Welcome to the **Library Management System** — a console-based application developed in **C++**, designed to manage basic library operations using **manual implementations of core data structures**.

The system allows users to **add, search, borrow, return, and display books**, while demonstrating the use of **Linked List, Queue, and Stack** in a real-world scenario.

---

## 🎯 Features
- ✅ Add and manage books in a dynamic catalog  
- ✅ Search books by ID  
- ✅ Borrow books using **Queue (FIFO)**  
- ✅ Return books using **Stack (LIFO)**  
- ✅ Display catalog, borrowed books, and returned books  
- ✅ Clean and modular C++ implementation  
- ✅ Console-based interactive menu system  

---

## 📂 File Structure

| File | Description |
|------|------------|
| `Catalog.h / Catalog.cpp` | Linked List implementation for book catalog |
| `Queue.h / Queue.cpp` | Queue implementation for borrowed books |
| `Stack.h / Stack.cpp` | Stack implementation for returned books |
| `main.cpp` | Main program with user interface and system logic |

---

## 🛠️ Implementation Details

### 📖 Linked List – Catalog
- Stores all books dynamically  
- Each node contains:
  - `id`
  - `title`
  - pointer to next book  
- Operations:
  - `addBook()` → Add new book  
  - `searchBook()` → Find book by ID  
  - `display()` → Show all books  

---

### 📥 Queue – Borrowed Books (FIFO)
- Tracks borrowed books in order  
- First borrowed → First returned  
- Operations:
  - `enqueue()` → Borrow a book  
  - `dequeue()` → Remove oldest borrow  
  - `isBookBorrowed()` → Check status  
  - `remove()` → Remove specific book  
  - `display()` → Show borrowed list  

---

### 📤 Stack – Returned Books (LIFO)
- Tracks most recently returned books  
- Last returned → First displayed  
- Operations:
  - `push()` → Return a book  
  - `pop()` → Remove latest return  
  - `display()` → Show returned books  

---

## 🔄 System Workflow
1. Add books to the catalog  
2. Search for a book by ID  
3. Borrow a book → added to Queue  
4. Return a book → moved to Stack  
5. Display:
   - Catalog  
   - Borrow Queue  
   - Return Stack  

---

## 🧪 Sample Outputs

### ➕ Add Book
```
Added book: [101] Data Structure
```

### 🔍 Search Book
```
Found: [102] Software Engineering
```

### 📥 Borrow Book
```
Borrow request for Book ID 102 added.
```

### 📤 Return Book
```
Book ID 102 has been successfully returned.
```

---

## 📊 Results Summary
- ✔️ Linked List correctly manages catalog  
- ✔️ Queue ensures proper borrow order (FIFO)  
- ✔️ Stack tracks returned books (LIFO)  
- ✔️ All core functionalities are working correctly  
- ✔️ Clean and modular code structure  

---

## 🚀 Suggested Improvements
- 🔹 Use dynamic memory for Queue & Stack instead of fixed arrays  
- 🔹 Store full book objects (not just IDs) in Queue/Stack  
- 🔹 Add file handling for persistent storage  
- 🔹 Implement user roles (Admin / User)  
- 🔹 Build a GUI or Web Interface  

---

## 🏁 Conclusion
This project demonstrates how fundamental data structures — **Linked List, Queue, and Stack** — can be used to build a complete and functional system.

It strengthens understanding of:
- Data structure behavior  
- Memory management  
- Modular programming in C++  

The system serves as a strong foundation for more advanced applications.

---

## 🧑‍💻 Team Members
- Seif Elden Waleed  
- Martin Milad  
- Mina Ehab  
- David Alber  
- Nour Romany  
- Nicole Aziz  
- David Gerges  

---

## 👨‍🏫 Supervision
- Dr. Fatma Sakr  
- Assistant Lecturer: Doaa Mabrouk  
- T.A: Hussen Mohamed  

---

## ⭐ Final Note
If you found this project useful, don’t forget to ⭐ star the repository!  
Feedback and suggestions are always welcome 💡
