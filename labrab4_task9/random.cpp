#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

// Функция заполнения массива случайными числами
int arrayRandomFilling(int array[], int length){

    // устанавливаем значение системных часов в качестве стартового числа
    srand(static_cast<unsigned int>(time(0)));
    for(int i = 0; i < length; i++){

        /* Присваиваем массиву сгенерённое следующее
         * случайное число в последовательности */
        array[i] = rand();
    }
    return *array;
}
