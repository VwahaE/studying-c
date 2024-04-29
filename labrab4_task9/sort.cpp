/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

// Функция сортировки массива метод "Пузырька"
void sortBubble(int array[], int length){
    // Сортировка массива методом ?Пузырька?
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - 1; j++){
            if(array[j] > array[j+1]){

                //int newVal = userArray[j];

                // Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
                std::swap(array[j], array[j+1]);
                // userArray[j] = userArray[j+1];
                // userArray[j+1] = newVal;
            }
        }
    }
}
