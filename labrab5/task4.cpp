#include "head_lb5.h"

// печать массива параметры: указатель *ptr, длинна массива arrLeng
void printArray(int *ptr, int arrLeng){
    std::cout << '\n';
    // вывод массива
    for(int i = 0; i < arrLeng; i++)
        std::cout << "\tprt ["<< i <<"] -> " << ptr + i
                  << ";\t*ptr ["<< i <<"] -> " << *ptr + i << '\n';
}
// вывод задания 4
void outputTaskFour(){
    // инициализация массива
    int array[] = {5, 7, 2, 9, 8};
    int array_length = std::end(array) - std::begin(array);
    //std::cout << "Length of array: " << array_length << std::endl;

    // вывод массива
    printArray(array, array_length);
    std::cout << '\n';
    funcDesigner();
}
