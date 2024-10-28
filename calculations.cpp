// calculations.cpp
// Created by Yana Utochkina

#include "calculations.h"
#include  <syncstream>

void f(std::ofstream& output, const char set, const int action) {
    std::osyncstream syncStream(output);
    syncStream << "З набору " << set << " виконано дію " << action << "." << std::endl;
}

void Calculator::run1(std::ofstream& output) {
    f(output, 'a', 1);
    f(output, 'a', 2);
    f(output, 'a', 3);
    barrier.arrive_and_wait();
    f(output, 'a', 4);
    barrier.arrive_and_wait();
    f(output, 'd', 1);
    f(output, 'd', 3);
    f(output, 'd', 5);
    f(output, 'd', 7);
    barrier.arrive_and_wait();
    f(output, 'e', 4);
    f(output, 'e', 5);
    barrier.arrive_and_wait();
    f(output, 'h', 1);
    f(output, 'h', 2);
    f(output, 'h', 3);
    f(output, 'h', 4);
    f(output, 'i', 5);
    f(output, 'i', 7);
    f(output, 'i', 9);
    latch.count_down();
}

void Calculator::run2(std::ofstream& output) {
    f(output, 'b', 1);
    f(output, 'b', 4);
    f(output, 'b', 7);
    barrier.arrive_and_wait();
    f(output, 'a', 5);
    barrier.arrive_and_wait();
    f(output, 'd', 2);
    f(output, 'd', 4);
    f(output, 'd', 6);
    f(output, 'f', 6);
    barrier.arrive_and_wait();
    f(output, 'g', 1);
    f(output, 'g', 4);
    barrier.arrive_and_wait();
    f(output, 'i', 1);
    f(output, 'i', 2);
    f(output, 'i', 3);
    f(output, 'i', 4);
    f(output, 'i', 6);
    f(output, 'i', 8);
    latch.count_down();
}

void Calculator::run3(std::ofstream& output) {
    f(output, 'b', 2);
    f(output, 'b', 5);
    f(output, 'b', 8);
    barrier.arrive_and_wait();
    f(output, 'a', 6);
    barrier.arrive_and_wait();
    f(output, 'f', 2);
    f(output, 'e', 1);
    f(output, 'e', 2);
    f(output, 'e', 3);
    barrier.arrive_and_wait();
    f(output, 'g', 2);
    f(output, 'g', 5);
    barrier.arrive_and_wait();
    f(output, 'j', 1);
    f(output, 'j', 2);
    f(output, 'j', 3);
    f(output, 'j', 4);
    f(output, 'j', 5);
    f(output, 'j', 6);
    f(output, 'j', 7);
    latch.count_down();
}

void Calculator::run4(std::ofstream& output) {
    f(output, 'b', 3);
    f(output, 'b', 6);
    f(output, 'b', 9);
    barrier.arrive_and_wait();
    f(output, 'f', 1);
    barrier.arrive_and_wait();
    f(output, 'f', 3);
    f(output, 'f', 4);
    f(output, 'f', 5);
    f(output, 'f', 7);
    barrier.arrive_and_wait();
    f(output, 'g', 3);
    f(output, 'c', 1);
    barrier.arrive_and_wait();
    f(output, 'c', 2);
    f(output, 'c', 3);
    f(output, 'c', 4);
    f(output, 'c', 5);
    f(output, 'c', 6);
    f(output, 'c', 7);
    f(output, 'c', 8);
    latch.count_down();
}