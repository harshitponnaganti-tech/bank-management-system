# bank-management-system
Bank Management System  The Bank Management System is a C++ project that simulates basic banking operations through a simple, menu-driven interface C++ programming skills by implementing essential banking operations
# Bank Management Application (C++)

## Project Overview

The Bank Management Application is a simple C++ console-based project that simulates basic banking operations. It uses Object-Oriented Programming (OOP) concepts and file handling to manage customer account information and maintain records between program executions.

## Features

* Create a bank account
* Deposit money
* Withdraw money
* Check account balance
* Store account details in a file
* Load previously saved account information
* Validate deposit and withdrawal amounts

## Technologies Used

* **Programming Language:** C++
* **Concepts:** Classes, Objects, Encapsulation, File Handling
* **File Storage:** Text file (`bank_data.txt`)

## How to Run

1. Clone or download this repository.

2. Open the project in a C++ compiler or IDE.

3. Save the source code as `main.cpp`.

4. Compile the program using a C++ compiler:

   ```bash
   g++ main.cpp -o bank
   ```

5. Run the application:

   **Windows:**

   ```bash
   bank.exe
   ```

   **Linux/macOS:**

   ```bash
   ./bank
   ```

## Menu Options

| Option | Operation      |
| ------ | -------------- |
| 1      | Create Account |
| 2      | Deposit Money  |
| 3      | Withdraw Money |
| 4      | Check Balance  |
| 5      | Exit           |

## File Handling

The application uses `bank_data.txt` to store the account number, customer name, and account balance. Previously saved information is loaded when the application starts, allowing account data to persist between executions.

## Learning Outcomes

* Understanding Object-Oriented Programming in C++
* Implementing classes and objects
* Using file streams for data storage
* Applying conditional statements and loops
* Implementing basic banking operations

## Limitations

* The current version supports only one account.
* Data is stored in a plain-text file and is not encrypted.
* Authentication and transaction history are not implemented.
* This project is intended for educational purposes and is not suitable for real banking operations.

## Author

Developed as a C++ programming project to demonstrate basic banking operations, OOP concepts, and file handling.
