/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

/* Библиотека для работы со случайными числами */
#include <random> // для std::random_device и std::mt19937

/* Библиотека для работы со временем и датой */
#include <ctime> //для функции time()

void funcVortexMersenne(int arrayM[10], int valN){

    // инициализируем Вихрь Мерсенна случайным стартовым числом
    std::mt19937 mersenne(static_cast<unsigned int>(time(0)));

    // В цикле for заполняем массив случайными числами
    for (int i = 0; i < valN; i++){
        arrayM[i] = mersenne();
    }
    std::cout << "\n\tЭлементы массива:\n";

    // Выводим содержимое массива в консоль
    for (int i = 0; i < valN; ++i){

        std::cout << "\t" << arrayM[i] << ' ';
        // Если вывели 5 чисел, то вставляем символ новой строки
        if ((i + 1) % 5 == 0)
            std::cout << "\n";
    }

    // Поиск минимального и максимального значения
    int Max = arrayM[0], Min = arrayM[0];

    //В цикле сравниваем, нулевой элемент массива, с каждым следующим
    for (int i = 0; i < valN; i++){
        if(Max < arrayM[i])
            Max = arrayM[i];

        if(Min > arrayM[i])
            Min = arrayM[i];
    }

    //Вывод результата в консоль
    std::cout << "\n\tMin value = " << Min << "\n";
    std::cout << "\tMax value = " << Max << "\n";
}
