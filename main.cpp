// main.cpp
// Created by Yana Utochkina

#include <iostream>
#include <thread>
#include "calculations.h"

void processing_args(int argc, const char * argv[]);

int main(int argc, const char * argv[]) {
    try {
        processing_args(argc, argv);
        std::ofstream output(argv[2]);

        Calculator calculator;
        output << "Обчислення розпочато." << std::endl;
        {
            std::jthread t1([&] () {calculator.run1(output);});
            std::jthread t2([&] () {calculator.run2(output);});
            std::jthread t3([&] () {calculator.run3(output);});
            std::jthread t4([&] () {calculator.run4(output);});
        }
        output << "Обчислення завершено." << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void processing_args(int argc, const char * argv[]) {
    if (argc != 3 && argv[1] != ">") {
        throw std::invalid_argument("usage: task-3.exe > results.txt");
    }
}