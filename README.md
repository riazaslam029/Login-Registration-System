# Login & Registration System

A lightweight C++ console application that demonstrates the fundamentals of user registration and credential-based login. User records are stored locally in a plain-text file for educational purposes.

## Features

- Register new users with a username and password
- Prevent duplicate usernames
- Authenticate existing users
- Persist user records in `users.txt`
- Simple menu-driven console interface

## Technology

- C++
- Visual Studio 2022
- MSVC v143 toolset
- Windows console application

## Getting Started

### Prerequisites

- Windows
- Visual Studio 2022 with the **Desktop development with C++** workload

### Build and run

1. Clone the repository:

   ```bash
   git clone https://github.com/riazaslam029/Login-Registration-System.git
   cd Login-Registration-System
   ```

2. Open `Project4.sln` in Visual Studio.
3. Select the `Debug` or `Release` configuration and the appropriate platform (`Win32` or `x64`).
4. Build the solution with **Build > Build Solution**.
5. Run the application with **Debug > Start Without Debugging** (`Ctrl+F5`).

The application creates `users.txt` in its working directory when the first user is registered.

## Usage

When the program starts, choose one of the available actions:

```text
--- Login & Registration System ---
1. Register
2. Login
3. Exit
```

Follow the prompts to register a new account or authenticate an existing one.

## Project Structure

```text
.
├── Project4.sln
├── Project4/
│   ├── Login & Registration system.cpp
│   ├── Project4.vcxproj
│   └── Project4.vcxproj.filters
├── .gitignore
└── README.md
```

## Security Notice

This project is intended for learning and demonstration only. Passwords are stored in plain text and are not suitable for production use. A production authentication system should use a vetted password-hashing algorithm, secure secret handling, input validation, access controls, and a protected database.

## Contributing

Contributions are welcome. Please open an issue to discuss a significant change before submitting a pull request.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
