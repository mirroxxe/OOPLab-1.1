#include "pch.h"
#include <iostream>
#include "IntRange.h"


IntRange makeIntRange(int f, int s) {
    IntRange range;
    range.Init(f, s);
    return range;
}

int main() {
    IntRange myRange;

    // Використання методів класу
    myRange.Read();
    myRange.Display();

    IntRange anotherRange = makeIntRange(10, 20);
    anotherRange.Display();

    // Перевірка числа на входження до діапазону
    int num;
    std::cout << "Enter a number to check: ";
    std::cin >> num;

    if (anotherRange.rangeCheck(num)) {
        std::cout << num << " is within the range." << std::endl;
    }
    else {
        std::cout << num << " is outside the range." << std::endl;
    }

    return 0;
}