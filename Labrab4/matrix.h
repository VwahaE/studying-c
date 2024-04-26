// Начало header guard.
#ifndef MATRIX_H
#define MATRIX_H

// Контент файла matrix.h, где находятся все предварительные объявления
// Прототипы функций

// Прототип функции разделителя заданий
void funcDesigner(bool valFl = 1);

// Прототип функции преобразованием типов C-style cast
void printCstyle(int x, float y, double z, unsigned short k);

// Прототип функции преобразованием типов static_cast
void printStaticCast(int x, float y, double z, unsigned short k);

// Прототип функции для заполнения одномерного массива алгоритмом Вихрь Мэрсена
void funcVortexMersenne(int arrayM[10], int valN);

// Прототип функции главной диагонали
int funcCreateMatrix(int array[][5], int elem, int valN, int valM);

// Прототип функции вывода в консоль
void printDiagMatrix(int array[][5], int valN, int valM);

// Прототип функции создание и заполнение матрицы случайными числами
int funcRandomValMatrix(int array[][8], int valN, int valM);

// Прототип функции вывода в консоль
void printMatrix(int array[][8], int valN, int valM);

// Прототип функции вывода суммы элементов матрицы выше глав. диаг.
int funcSumAboveDiagonal(int array[][8], int valN, int valM);

// Прототип функции вывода английского алфавита от a до z
void funcLowercase();

// Прототип функции вывода факториала числа с помощью итераций
long double funcIterFact(int valF);

// Прототип функции вывода факториала числа с помощью рекурсии
long double funcRecurFact(int valF);

// Прототип функции вывода чисел Фибоначчи - рекурсивно
int fibonacci1(int number);

// Прототип функции вывода чисел Фибоначчи - итеративно
int fibonacci2(int number);

// Прототип функции вывода последовательности данных пирамида
void printPyramid(int n);

// Прототип функции вывода последовательности данных треугольник
void printTriangle(int n);

// Конец header guard
#endif // MATRIX_H
