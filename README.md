# Login & Registration System

<p align="center">
  <strong>A beginner-friendly C++ console application for learning the fundamentals of registration and credential-based login.</strong>
</p>

<p align="center">
  <a href="https://github.com/riazaslam029/Login-Registration-System">Repository</a>
  ·
  <a href="https://github.com/riazaslam029/Login-Registration-System/issues">Issues</a>
  ·
  <a href="https://github.com/riazaslam029/Login-Registration-System/blob/master/LICENSE">MIT License</a>
</p>

<p align="center">
  <a href="https://isocpp.org/"><img src="https://img.shields.io/badge/C%2B%2B-17-00599C?logo=cplusplus&logoColor=white" alt="C++17"></a>
  <a href="https://visualstudio.microsoft.com/"><img src="https://img.shields.io/badge/Visual%20Studio-2022-5C2D91?logo=visualstudio&logoColor=white" alt="Visual Studio 2022"></a>
  <a href="https://github.com/riazaslam029/Login-Registration-System/blob/master/LICENSE"><img src="https://img.shields.io/github/license/riazaslam029/Login-Registration-System" alt="MIT License"></a>
  <a href="https://github.com/riazaslam029/Login-Registration-System/stargazers"><img src="https://img.shields.io/github/stars/riazaslam029/Login-Registration-System" alt="GitHub stars"></a>
</p>

## Overview

Login & Registration System is a small Windows console program that demonstrates how a menu-driven C++ application can register users, prevent duplicate usernames, authenticate credentials, and persist records locally.

The project is intended for students and beginners practicing:

- Functions and control flow
- File input/output with `fstream`
- String handling
- Basic validation and program structure
- Visual Studio C++ project configuration

## Features

- Register a new username and password
- Detect duplicate usernames
- Log in with stored credentials
- Persist records in a local `users.txt` file
- Simple menu-driven console interface
- Win32 and x64 Debug/Release configurations

## Important Security Notice

This is an educational example, **not a production authentication system**. Passwords are stored in plain text and credentials are separated using whitespace. Do not use this project to protect real accounts or sensitive information.

A production system should use a vetted password-hashing algorithm with a unique salt, secure secret handling, robust input validation, rate limiting, access controls, and a protected database.

## Requirements

- Windows
- Visual Studio 2022
- **Desktop development with C++** workload
- MSVC v143 toolset

## Build and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/riazaslam029/Login-Registration-System.git
   cd Login-Registration-System
   ```

2. Open `Project4.sln` in Visual Studio.
3. Select `Debug` or `Release` and choose `Win32` or `x64`.
4. Build the solution with **Build > Build Solution**.
5. Run with **Debug > Start Without Debugging** (`Ctrl+F5`).

The application creates `users.txt` in its working directory after the first successful registration. This generated file is intentionally ignored by Git.

## Usage

When the program starts, select an action:

```text
--- Login & Registration System ---
1. Register
2. Login
3. Exit
```

Choose **Register** to create a local account, or **Login** to verify an existing username and password.

## Project Structure

```text
.
├── Project4.sln
├── Project4/
│   ├── Login & Registration system.cpp
│   ├── Project4.vcxproj
│   └── Project4.vcxproj.filters
├── .github/
│   ├── ISSUE_TEMPLATE/
│   └── PULL_REQUEST_TEMPLATE.md
├── .gitignore
├── CONTRIBUTING.md
├── LICENSE
└── README.md
```

## Roadmap

- Validate menu and credential input more robustly
- Replace plain-text passwords with secure password hashing
- Store users in a structured database
- Improve console usability and error messages
- Add automated tests
- Add account management and password reset flows

## Contributing

Contributions and learning-focused improvements are welcome. Read [CONTRIBUTING.md](CONTRIBUTING.md) before opening an issue or pull request.

## License

This project is available under the [MIT License](LICENSE).

## Author

**Riaz Aslam** — [GitHub](https://github.com/riazaslam029)

If this project helped you learn C++, consider giving it a star.
