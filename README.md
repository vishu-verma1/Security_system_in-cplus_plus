# Basic Security System

This is a simple security system application developed in C++. It allows users to register, login, and change their passwords. The application uses file operations to store user credentials and provides basic functionalities for user authentication and password management.

## Features

- **User Registration:** Users can register by providing a username, password, and age.
- **User Login:** Registered users can log in with their username and password.
- **Change Password:** Users can change their password by providing the old password and setting a new one.

## Prerequisites

- A C++ compiler (e.g., g++).
- Basic knowledge of C++ and file operations.

## Installation

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/vishu-verma1/Basic-Security-System.git
    ```

2. **Navigate to the Project Directory:**

    ```bash
    cd Basic-Security-System
    ```

3. **Compile the Code:**

    ```bash
    g++ -o security_system main.cpp
    ```

4. **Run the Executable:**

    ```bash
    ./security_system
    ```

## Usage

Upon running the application, you will be presented with a menu to choose from the following options:

1. **Register:** Register a new user by entering a username, password, and age.
2. **Login:** Login with a registered username and password.
3. **Change Password:** Change the password by providing the old password and setting a new one.
4. **End Program:** Exit the application.

## Code Explanation

Here's a brief overview of the code structure:

- **main.cpp:** Contains the main logic for user registration, login, and password change functionalities.
- **File Operations:** Uses `fstream` for reading and writing user credentials to a file (`file.txt`).
- **String Manipulations:** Uses `sstream` for handling string inputs and outputs.

## Contributing

Contributions are welcome! Please follow these steps to contribute:

1. Fork the repository.
2. Create a new branch.
3. Make your changes.
4. Submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions or suggestions, feel free to contact me at vishal.93165095@gmail.com.

## Acknowledgements

- [C++ Documentation](https://en.cppreference.com/)
- [GitHub](https://github.com/)
