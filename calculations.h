// calculations.h
// Created by Yana Utochkina

#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <fstream>
#include <barrier>
#include <latch>

class Calculator {
private:
    const int NT = 4;
    std::barrier<> barrier = std::barrier<>(NT);
    std::latch latch = std::latch(NT);
public:
    void run1(std::ofstream& output);
    void run2(std::ofstream& output);
    void run3(std::ofstream& output);
    void run4(std::ofstream& output);
};


#endif //CALCULATIONS_H
