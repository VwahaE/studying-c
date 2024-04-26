/*
* Лабораторная работа No4
* Исследование функций С++ в IDE
* (интегрированной среде разработки) Qt Creator
*
*
* "Строки. Массивы. Рекурсии"
* Типы данных
* Developer: Mochalov E.
*/
/*==========================================================================*/
/* INCLUDE LIBS */
/*==========================================================================*/
/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

/* Cобственный заголовочный файл */
#include "matrix.h"

int main(){
    /******************************* Задание 1 ***************************************/
    std::cout << "\tЗадание 1\n";
    int x(5);
    float y(2.1);
    double z(1.002);
    unsigned short k(65);
    std::cout << "\n";
    printCstyle(x, y, z, k);
    std::cout << "\n";
    printStaticCast(x, y, z, k);
    funcDesigner();
    /******************************* Задание 2 ***************************************/
    std::cout << "\tЗадание 2\n";
    const int valueN = 10;
    int arrayMers[valueN];

    funcVortexMersenne(arrayMers, valueN);

    std::cout << "\n";
    funcDesigner();
    /******************************* Задание 3 ***************************************/
    std::cout << "\tЗадание 3\n";
    // Переменная значение элементов массива типа int
    int elem(0);

    // Размер  матрицы
    const int N = 5;
    const int M = 5;

    //объявляем двумерный массив размером 5Х5
    // инициализируем все элементы массива значением 0
    int unitMatrix[N][M]{elem};

    // Вызов функции создания главно диагонали
    funcCreateMatrix(unitMatrix, elem, N, M);

    // Вызов функции вывода в консоль
    printDiagMatrix(unitMatrix, N, M);
    std::cout <<"\n";
    funcDesigner();
    /******************************* Задание 4 ***************************************/
    std::cout << "\tЗадание 4\n";
    std::cout <<"\n";
    //std::cout.fill(' ');
    funcDesigner(0);
    const int newN = 8;
    const int newM = 8;
    int newMatrix[newN][newM];

    funcRandomValMatrix(newMatrix, newN, newM);

    printMatrix(newMatrix, newN, newM);

    std::cout << "\n\tCумма элементов матрицы, лежащих выше главной диагонали: "
              << funcSumAboveDiagonal(newMatrix, newN, newM) <<"\n";
    std::cout <<"\n";
    funcDesigner();
    /******************************* Задание 5 ***************************************/

    std::cout << "\tЗадание 5\n";
    funcLowercase();
    std::cout <<"\n";
    funcDesigner();
    /******************************* Задание 6 ***************************************/

    std::cout << "\tЗадание 6\n";
    std::cout << "\n\tЗадайте целое число для нахождения факториала: ";
    int valueFact;
    std::cin >> valueFact;
    std::cout << "\tИтеративное вычисление: ";
    std::cout << "Факториал для числа " << valueFact << " = " << funcIterFact(valueFact) << "\n";
    std::cout << "\tРекурсивное вычисление: ";
    std::cout << "Факториал для числа " << valueFact << " = " << funcRecurFact(valueFact) << "\n";
    std::cout <<"\n";
    funcDesigner();
    /******************************* Задание 7 ***************************************/
    std::cout << "\tЗадание 7\n";

    // Пример из лекции о матрицах
    std::cout << "\tВывод примера рекурсии: \t";
    for (int count=0; count < 13; ++count)
        std::cout << fibonacci1(count) << " ";

    std::cout <<"\n";
    std::cout << "\tВывод примера итераций: \t";
    for (int count=0; count < 13; ++count)
        std::cout << fibonacci2(count) << " ";

    std::cout <<"\n";
    funcDesigner();
    /******************************* Задание 8 ***************************************/
    std::cout << "\tЗадание 8\n";
    std::cout <<"\n";
    int numValue(10);
    printPyramid(numValue);
    std::cout <<"\n";
    printTriangle(numValue);
    funcDesigner();
    std::cout <<"\n\n";

    return 0;
}
