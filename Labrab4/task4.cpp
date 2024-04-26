#include <iostream>
#include <random> // для std::random_device и std::mt19937
#include <ctime>
#include <iomanip>
#include <cstdlib> // для функций rand() и srand()

// Функция создания и заполнение матрицы случайными числами
int funcRandomValMatrix(int array[][8], int valN, int valM){

    srand(time(0));

    int min(-15);
    int max(15);

    for (int i = 0; i < valN; i++){
        for (int j = 0; j < valM; j++){
            array[i][j] = min + rand() % (max - min + 1);
        }
    }
    return *array[valN];
}

// Функция вывода в консоль с использованием форматированного вывода
void printMatrix(int array[][8], int valN, int valM){
    for (int i = 0; i < valN; i++){
        std::cout <<"\t";
        for (int j = 0; j < valM; j++){
            std::cout << std::setw(3)<< std::right << array[i][j] << std::setw(1) << ' ';
        }
        std::cout << "\n";
    }
}

// Функция вывода суммы элементов матрицы выше глав. диаг.
int funcSumAboveDiagonal(int array[][8], int valN, int valM){

    int sumAboveDiagonal(0);
    for (int i = 0; i < valN; i++){
        for (int j = 0; j < valM; j++){

            /* Условие отбора значения элементов
             * i > j - всё, что выше главной диагонали;
             * i == j - всё, что на главной диагонали;
             * i < j - всё, что ниже главной диагонали;
            */
            if (i > j)
                // Сложение с присваиванием
                sumAboveDiagonal += array[i][j];
        }
    }
    // Выод значения
    return sumAboveDiagonal;
}
