#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to check if username already exists
bool userExists(const string& username) {
    ifstream file("users.txt");
    string u, p;
    while (file >> u >> p) {
        if (u == username) {
            return true;
        }
    }
    return false;
}

// Registration function
void registerUser() {
    string username, password;
    cout << "Enter a new username: ";
    cin >> username;

    if (userExists(username)) {
        cout << "❌ Username already exists. Try again.\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    ofstream file("users.txt", ios::app); // append mode
    file << username << " " << password << endl;
    file.close();

    cout << "✅ Registration successful!\n";
}

// Login function
void loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");
    string u, p;
    bool success = false;
    while (file >> u >> p) {
        if (u == username && p == password) {
            success = true;
            break;
        }
    }

    if (success)
        cout << "✅ Login successful! Welcome, " << username << ".\n";
    else
        cout << "❌ Invalid username or password.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Login & Registration System ---\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: registerUser(); break;
        case 2: loginUser(); break;
        case 3: cout << "Exiting program...\n"; break;
        default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}