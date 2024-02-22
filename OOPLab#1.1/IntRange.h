#pragma once
#ifndef INTRANGE_H
#define INTRANGE_H

class IntRange {
private:
    int first;
    int second;

public:
    IntRange();
    void Init(int f, int s);
    void Read();
    void Display() const;
    bool rangeCheck(int num) const;

    int getFirst() const;
    void setFirst(int f);
    int getSecond() const;
    void setSecond(int s);
};

#endif 
