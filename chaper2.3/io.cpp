//
// Created by liaoxingyu on 1/19/18.
//

#include <iostream>

double readNumber() {
    std::cout << "please input a double number: ";
    double x;
    std::cin >> x;
    return x;
}


char readOp() {
    std::cout << "please input the operation, +, -, *, /: ";
    char x;
    std::cin >> x;
    return x;
}

void writeAnswer(int ans) {
    std::cout << "Result is: " << ans << std::endl;
}

void computeAnswer(double x, double y, char op) {
    if (op == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (op == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (op == '*')
        std::cout << x << " * " << y << " is " <<  x * y << '\n';
    else if (op == '/')
        std::cout << x << " / " << y << " is " <<  x / y << '\n';
    else
        std::cout << "Invalid operation";
}

bool isPrime(int x) {
    if (x == 2)
        return true;
    if (x == 3)
        return true;
    if (x == 5)
        return true;
    if (x == 7)
        return true;
    return false;
}