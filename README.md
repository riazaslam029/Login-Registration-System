# 🔐 Login & Registration System (C++)

This is a simple **Login & Registration System** written in **C++** that stores user credentials in a text file (`users.txt`).  
It allows new users to register and existing users to log in with their credentials.

---

## 📌 Features
- Register new users with a **username & password**
- Prevents duplicate usernames
- Stores credentials in a **text file**
- Allows existing users to **login**
- Simple **menu-driven interface**

---

## 🖥️ Example Run
--- Login & Registration System ---

Register

Login

Exit
Enter your choice: 1
Enter a new username: alice
Enter password: 1234
✅ Registration successful!

--- Login & Registration System ---

Register

Login

Exit
Enter your choice: 2
Enter username: alice
Enter password: 1234
✅ Login successful! Welcome, alice.

yaml
Copy code

---

## 🚀 How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/login-system-cpp.git
Navigate into the project folder:

bash
Copy code
cd login-system-cpp
Compile the program:

bash
Copy code
g++ login.cpp -o login
Run the program:

bash
Copy code
./login
📂 Files
login.cpp → Main C++ source code

users.txt → File to store usernames & passwords (created automatically if it doesn’t exist)

README.md → Documentation

⚡ Requirements
C++ compiler (e.g., g++, clang++, or MSVC)

File handling support enabled

📜 License
This project is open-source and available under the MIT License.
