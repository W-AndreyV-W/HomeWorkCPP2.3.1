#include <iostream>
#include <locale.h>

class Calculator {
public:
    double num1;
    double num2;
    bool set_num1();
    bool set_num2();
    double add();
    double multiply();
    double subtract_1_2();
    double subtract_2_1();
    double divide_1_2();
    double divide_2_1();
};

bool Calculator::set_num1() {
    if (num1 != 0) {
        this->num1 = num1;
        return true;
    }
    else {
        return false;
    }
}

bool Calculator::set_num2() {
    if (num2 != 0) {
        this->num2 = num2;
        return true;
    }
    else {
        return false;
    }
}

double Calculator::add() { 
    return num1 + num2; 
}

double Calculator::multiply() {
    return num1 * num2;
}

double Calculator::subtract_1_2() {
    return num1 - num2;
}

double Calculator::subtract_2_1() {
    return num2 - num1;
}

double Calculator::divide_1_2() {
    return num1 / num2;
}

double Calculator::divide_2_1() {
    return num2 / num1;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator num;
    while (true) {
        while (true) {
            std::cout << "Введите num1: ";
            std::cin >> num.num1;
            if (num.set_num1()) {
                break;
            } else {
                std::cout << "Неверный ввод!" << std::endl;
            }
        }
        while (true) {
            std::cout << "Введите num2: ";
            std::cin >> num.num2;
            if (num.set_num2()) {
                break;
            } else {
                std::cout << "Неверный ввод!" << std::endl;
            }
        }
        std::cout << "num1 + num2 = " << num.add() << std::endl;
        std::cout << "num1 - num2 = " << num.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << num.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << num.multiply() << std::endl;
        std::cout << "num1 / num2 = " << num.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << num.divide_2_1() << std::endl;
    }
}