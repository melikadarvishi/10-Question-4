#include <iostream>

int main() {
    int num;
    std::cout << "enter number: ";
    std::cin >> num;

    std::cout << "Multiplier of the number" << num << " up to a hundred:" << std::endl;

    for (int i = 1; i <= 100; i++) {
        std::cout << num << " * " << i << " = " << num * i << std::endl;
    }

    return 0;
}