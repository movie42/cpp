#include <iostream>
#include <string>

int main() {
    std::cout << "Hello C++" << std::endl;
    int age = {21};
    std::cout << "Age" << age << std::endl;
    std::clog << "log" << std::endl;

    int age1;
    std::string name;
    std::cout << "please type your name and age : " << std::endl;
    std::cin >> age1;
    std::cin >> name;
    std::cout << name << age1 << std::endl;
    return 0;
}