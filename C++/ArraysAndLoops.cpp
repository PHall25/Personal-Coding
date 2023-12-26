#include <iostream>

int main() {
    // Arrays
    std::string fruits[] = { "apple", "banana", "orange" };

    // Loop through the array
    for (const auto& fruit : fruits) {
        std::cout << fruit << std::endl;
    }

    // Loop using for loop
    for (int i = 0; i < 5; i++) {
        std::cout << i << std::endl;
    }

    return 0;
}