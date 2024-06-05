#include <iostream>

int main() {
    int num1, num2;
    
    // Запрос ввода двух чисел
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    
    // Вычисление и вывод суммы
    int sum = num1 + num2;
    std::cout << "Сумма чисел: " << sum << std::endl;
    
    // Вычисление и вывод произведения
    int product = num1 * num2;
    std::cout << "Произведение чисел: " << product << std::endl;
    
    return 0;
}