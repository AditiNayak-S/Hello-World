#include <iostream>
#include <ctime> // For getting current date/time

int main() {
    // Get current time
    std::time_t now = std::time(nullptr);
    char* dt = std::ctime(&now); // Converts time to a readable format

    std::cout << "\n===============================" << std::endl;
    std::cout << "|   Hello, World from C++!   |" << std::endl;
    std::cout << "===============================" << std::endl;

    std::cout << ">> Current Date & Time: " << dt;
    std::cout << ">> Execution complete. 🚀\n" << std::endl;

    return 0;
}

