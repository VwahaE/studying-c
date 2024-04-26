/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

/* Функция создания главной диагонали матрицы */
int funcCreateMatrix(int array[][5], int elem, int valN, int valM){

    //запускаем цикл for для создания строк главной диагонали
    for(int i = 0; i < valN; i++){

        //запускаем цикл for для создания столбцов главной диагонали
        for(int j = 0; j < valM; j++){

            // условие для создания главной диагоняли
            if(i == j){

                // присваиваем переменной 1
                elem=1;

                // присваиваем индекс элемента
                array[i][j] = elem;
            }
        }
    }
    return *array[valN];
}

void printDiagMatrix(int array[][5], int valN, int valM){
    std::cout <<"\n\tВывод единичной матрицы:\n" ;

    //цикл for вывода строк матрицы
    for(int i = 0; i < valN; i++){
        std::cout << "\t";

        //цикл for вывода столбцов матрицы
        for(int j = 0; j < valM; j++){

            // вывод значения элемента матрицы
            std::cout <<array[i][j] << ' ';
        }
        std::cout << "\n";
    }
}

