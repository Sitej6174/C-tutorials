#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "My name is Sitej Maharana" << std::endl;
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << " Welcome to Python!" << std::endl;
    int count = 1;
    while (count <= 5) {
        std::cout << "Hi " << count << std::endl;
        count = count + 1;
    }
    int x = 3;
    while (x <= 12) {
        std::cout << x << std::endl;
        x = x + 3;
    }
    int n = 20;
    while (n > 10) {
        std::cout << n << std::endl;
        n = n - 2;
    }
    x = 5;
    while (x < 30) {
        std::cout << x << std::endl;
        x = x * 2;
    }
    x = 1;
    while (x < 50) {
        std::cout << x << std::endl;
        x = x + 7;
    }
    std::vector <int> nums = {5, 10, 15, 20, 25};
    std::cout << nums[2] << std::endl;
    return 0;
}
