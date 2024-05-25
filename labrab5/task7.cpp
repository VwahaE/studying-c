#include "head_lb5.h"

// Функция меняет буквы в нижнем на буквы в верхнем регистре.
void changeArray(char *pi, int size) {
    for (int index=0; index < size; ++index){

        // Переводим строчные буквы в заглавные char 'a' = 97 в 'A' = 65.
        pi[index] = static_cast<char> (pi[index] - 32);
    }
}

// Функция перестановки массива
void changeEventNoEvent(char *array, int size){
    // В цикле меняем местами каждый первый и второй символ в массиве
    for(int startIndex = 0; startIndex < size ; startIndex += 2){
        int newVal = array[startIndex];
        array[startIndex] = array[startIndex + 1];
        array[startIndex + 1] = newVal;
    }
}

// Функция выводит значения массива
void printArray(char *array, int size) {
    for (int index=0; index < size; ++index)
        std::cout << array[index] << " ";
    std::cout << '\n';
}

// Функция вывода задания № 7
void outputTaskSeven(){

    /* Инициализация константной переменной
     задаём размерность массива */
    const int sizeArray(12);

    // Массив типа char, размерность массива 12
    char array[sizeArray] = {'a','b','c','d','e','f','g','h','i','j','k','l'};

    std::cout <<"\toutput specified array: ";
    std::cout <<"\t\t";
    printArray(array, sizeArray);
    std::cout << '\n';
    std::cout <<"\toutput changes even/not even cells: ";
    std::cout <<"\t";
    changeEventNoEvent(array, sizeArray);
    printArray(array, sizeArray);
    std::cout << '\n';
    std::cout <<"\toutput to the console UPPER char: ";
    std::cout <<"\t";
    changeArray(array, sizeArray);
    printArray(array, sizeArray);
    std::cout << '\n';
    funcDesigner();
}
