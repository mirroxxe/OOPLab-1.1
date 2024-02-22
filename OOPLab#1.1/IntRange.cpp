#include <iostream>
#include "IntRange.h"

IntRange::IntRange() : first(0), second(0) {}

void IntRange::Init(int f, int s) {
    if (f < s) {
        first = f;
        second = s;
    }
    else {
        std::cerr << "Error: Invalid range. 'first' must be less than 'second'." << std::endl;
        exit(1);
    }
}

void IntRange::Read() {
    std::cout << "Enter the values for the range (first and second): ";
    std::cin >> first >> second;
    if (first >= second) {
        std::cerr << "Error: Invalid range. 'first' must be less than 'second'." << std::endl;
        exit(1);
    }
}

void IntRange::Display() const {
    std::cout << "[" << first << ", " << second << ")" << std::endl;
}

bool IntRange::rangeCheck(int num) const {
    return (num >= first && num < second);
}

int IntRange::getFirst() const {
    return first;
}

void IntRange::setFirst(int f) {
    first = f;
}

int IntRange::getSecond() const {
    return second;
}

void IntRange::setSecond(int s) {
    second = s;
}
