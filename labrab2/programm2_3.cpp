/*
* Лабораторная работа No1
* Исследование ввода-вывода стандартной библиотеки С++
*
* Программа 2-3.
* "Вывод на экран их среднее арифметическое, используя числа с плавающей точкой."
* Типы данных
* Developer: Mochalov E.
*/
/*==========================================================================*/
/* INCLUDE LIBS */
/*==========================================================================*/
/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

/* Подключаем библиотеку для printf */
#include <stdio.h>

/* Подключаем библиотеку манипуляторов форматирования */
#include <iomanip>

/* Пространство имен std */
using namespace std;

/*==========================================================================*/
/* main - главная функция с которой начинается исполнение программы */
/*==========================================================================*/
int main(){
    //Используется формат кода snake_case

    cout << " Введите десять чисел десятичной дроби в \
качестве разделителя дроби используйте точку.\n";

    // setw(20) - определяет ширину поля вывода в 20 символов
    cout << setw(20) << "Первое число: \t";

    // Объявление переменной val_number0 типа double.
    double val_number0;

    // Ввод значения переменной типа double.
    cin >> val_number0;
    cout << setw(20) << "Второе число: \t";
    double val_number1;
    cin >> val_number1;
    cout << setw(20) << "Третье число: \t";
    double val_number2;
    cin >> val_number2;
    cout << setw(20) << "Четвертое число: \t";
    double val_number3;
    cin >> val_number3;
    cout << setw(20) << "Пятое число: \t";
    double val_number4;
    cin >> val_number4;
    cout << setw(20) << "Шестое число: \t";
    double val_number5;
    cin >> val_number5;
    cout << setw(20) << "Седьмое число: \t";
    double val_number6;
    cin >> val_number6;
    cout << setw(20) << "Восьмое число: \t";
    double val_number7;
    cin >> val_number7;
    cout << setw(20) << "Девятое число: \t";
    double val_number8;
    cin >> val_number8;
    cout << setw(20) << "Десятое число: \t";
    double val_number9;
    cin >> val_number9;

    // Прямая инициализация переменной val_total типа double.
    double val_total(10.0);

    // Объявляем переменную val_arithmetic_mean типа double
    double val_arithmetic_mean;

    // Расчет среднее арифметическое
    val_arithmetic_mean = (val_number0 + val_number1 + val_number2 + val_number3
                           + val_number4 + val_number5 + val_number6 + val_number7
                           + val_number8 + val_number9) / val_total;
    // Задает ширину поля 60 символов
    cout.width(60);

    // Устанавливает символ заполнитель тире
    cout.fill('-');

    // Вывод пустой строки с заполнителем
    cout << "" << endl;

    // Вывод ответа на экран
    cout << " Среднее арифметическое = sum(value_1 ... value_N)/conut_N\n";
    cout << " Среднее арифметическое = " << val_arithmetic_mean <<"\n";

    return 0;
}
