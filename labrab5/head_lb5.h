// Начало header guard.
#ifndef HEAD_LB5_H
#define HEAD_LB5_H

/* Заголовочный файл для работы с функциями операционной системы Windows */
#include <Windows.h>

/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

/* Перечисление цвета (константу) в качестве индекса*/
enum ConsoleColor
{
    Black         = 0,
    Blue          = 1,
    Green         = 2,
    Cyan          = 3,
    Red           = 4,
    Magenta       = 5,
    Brown         = 6,
    LightGray     = 7,
    DarkGray      = 8,
    LightBlue     = 9,
    LightGreen    = 10,
    LightCyan     = 11,
    LightRed      = 12,
    LightMagenta  = 13,
    Yellow        = 14,
    White         = 15
};

enum Level{
    ZERO = 0,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN
};

/* используем перечислитель для определения животных */
enum Animal{
    pig,
    chicken,
    goat,
    cat,
    dog,
    fish
};

// Прототип функции вывода задания 1
void outputTaskOne();

// Прототип функции разделителя заданий
//void funcDesigner(bool valFl = 1);
void funcDesigner(bool valFl = 1, int valW = 80);
void outputTab();

// Прототип функции вывода задания 2
void outputTask2();

// Прототип функции вывода задания 3
void outputTaskThree();

// Прототип функции вывода задания 4
void outputTaskFour();
#endif // HEAD_LB5_H
