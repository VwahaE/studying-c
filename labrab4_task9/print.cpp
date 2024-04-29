/* Подключаем библиотеку для ввода/вывода */
#include  <iostream>

// Функция вывода массива в консоль
void printArray(int array[], int length ){
    std::cout << "\tВывод массива на экран:\n\t";
    for(int i = 0; i < length; i++){
        std::cout <<  array[i] << ' ';
    }
    std::cout << "\n";
}
