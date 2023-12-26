#include <iostream>

// Class definition
class Person {
public:
    std::string name;
    int age;
};

int main() {
    // Object instantiation
    Person person;
    person.name = "John";
    person.age = 25;

    // Accessing object properties
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;

    return 0;
}