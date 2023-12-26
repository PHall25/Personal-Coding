#include <iostream>

// Function declaration
std::string greet(const std::string& name) {
    return "Hello, " + name + "!";
}

int main() {
    // Function call
    std::string result = greet("Alice");
    std::cout << result << std::endl;

    return 0;
}