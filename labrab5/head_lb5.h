// Начало header guard.
#ifndef HEAD_LB5_H
#define HEAD_LB5_H
#include <iostream>

enum Animal{
    pig,
    chicken,
    goat,
    cat,
    dog,
    fish
};

// Прототип функции разделителя заданий
//void funcDesigner(bool valFl = 1);
void funcDesigner(bool valFl = 1, int valW = 80);
void outputTab();

// Прототип функции вывода задания 2
void outputTask2();

// Прототип функции вывода задания 3
void outputTaskThree();

#endif // HEAD_LB5_H
