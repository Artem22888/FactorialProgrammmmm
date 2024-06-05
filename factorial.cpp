#include <iostream>
#include <stdexcept>

// Функция для вычисления факториала
unsigned long long factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers");
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    try {
        unsigned long long fact = factorial(number);
        std::cout << "Factorial of " << number << " is " << fact << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
