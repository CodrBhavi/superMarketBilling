# 🛒 Super Market Management System in C++

A **Super Market Management System** built using C++ to explore object-oriented programming and the fundamentals of retail management software.

The project is designed around a menu-driven interface with two primary roles: **Administrator** and **Buyer**. It uses a class-based structure to organize product management, shopping operations, and billing functionality.

## 📌 Project Overview

The Super Market Management System aims to simplify basic supermarket operations by providing separate options for administrators and buyers.

Administrators can manage product information, while buyers can browse available products and generate bills. The project is structured using a C++ class with member functions for product management, customer purchases, and receipt generation.

**Project status:** Initial implementation — class structure and main menu are defined; functionality is being developed.

## ✨ Planned Features

- **Administrator Panel:** Access product-management operations.
- **Buyer Panel:** Provide a shopping interface for customers.
- **Add Products:** Store product codes, names, prices, and discount information.
- **Remove Products:** Delete products from the inventory.
- **Edit Products:** Update existing product information.
- **Product Listing:** Display available products and their details.
- **Shopping and Billing:** Calculate purchase totals and applicable discounts.
- **Receipt Generation:** Generate a receipt containing purchase details.
- **File Handling:** Use file streams to support persistent product records.
- **Menu-Driven Interface:** Navigate through the system using a simple console menu.

*Note: These are intended features based on the current class design and need to be implemented before they are available in the application.*

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Standard Libraries:** `<iostream>`, `<fstream>`
- **Interface:** Command-Line Interface (CLI)
- **Core Concepts:** Classes, objects, encapsulation, member functions, input/output operations, and file handling.

## 🏗️ Project Structure

The project uses a `shopping` class to organize its operations.

| Member Function | Intended Purpose |
|---|---|
| `menu()` | Display the main menu |
| `administrator()` | Handle administrator operations |
| `buyer()` | Handle customer shopping |
| `add()` | Add a product |
| `rem()` | Remove a product |
| `edit()` | Edit product details |
| `list()` | Display product listings |
| `receipt()` | Generate a purchase receipt |

The private data members store the product code, price, discount, and product name.

## ⚙️ How to Compile and Run

### 1. Save the source code

Save your program as `supermarket.cpp`.

### 2. Compile using GCC/G++

```bash
g++ supermarket.cpp -o supermarket
```

### 3. Run the program

**Windows:**
```bash
supermarket.exe
```

**Linux/macOS:**
```bash
./supermarket
```

**Prerequisite:** Install a compatible C++ compiler, such as GCC/G++, before compiling.

*The current version displays no functional menu because the `main()` function is empty and the menu's `switch` statement has no implemented cases. Complete these parts to make the application operational.*

## 📚 Learning Objectives

This project provides an opportunity to practice:

- Designing classes and member functions in C++.
- Applying encapsulation through private and public access specifiers.
- Organizing code into declarations and function definitions.
- Building interactive console applications.
- Performing product and price calculations.
- Working with file streams for data storage.
- Developing structured business logic for shopping and billing.

## 🔮 Future Improvements

- Implement all administrator and buyer menu operations.
- Add secure administrator authentication.
- Store and retrieve inventory using file handling.
- Add input validation and error handling.
- Calculate discounts, taxes, and final bills.
- Generate itemized customer receipts.
- Track stock quantities and prevent purchases beyond available inventory.
- Refactor the program into smaller, reusable functions.
- Add a graphical interface and database integration in future versions.

## 👨‍💻 About This Project

This project is part of my journey in learning C++ and object-oriented programming. By developing a supermarket management application, I aim to apply programming fundamentals to a practical retail scenario while improving my logical thinking and software development skills.

⭐ If you find this project useful, consider starring the repository!

---

### 🏷️ Tags

`C++` `Object-Oriented Programming` `Super Market Management System` `File Handling` `Inventory Management` `Billing System` `Beginner Project` `Student Developer`
