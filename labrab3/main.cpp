/*
* Лабораторная работа No3
* Исследование функций С++ в IDE
* (интегрированной среде разработки) Qt Creator
*
* Программа 1.
* "Функции, область видимости."
* Типы данных
* Developer: Mochalov E.
*/
/*==========================================================================*/
/* INCLUDE LIBS */
/*==========================================================================*/
/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

/* Подключаем библиотеку набора математических функций */
#include <cmath>

/* подключаем библиотеку для numeric_limits */
#include <limits>

// task 7
/* Макросы-функции */
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

/* task 4
 * Объявление глобальной переменной типа int
 */
int valueVariable(4);

/* task 1
 * Функция с возвращаемым значением типа double
 */
double functionCube(double valNumCube){
    return pow(valNumCube, 3);
}

/* task 2
 * Функция с аргументом char
 */
void functionPrint(char symboChar){
    std::cout << "в результате выведется "
              << static_cast<int>(symboChar)
              << " а не "
              << symboChar
              << "\n";
}

// task 3
// Использование в объявлении прототипа функций trailing.
auto intMinMax() -> int;
auto charMinMax()-> int;
auto longMinMax()-> int;
auto boolMinMax()-> int;

// trailing-синтаксис в C++ 11
// Функция для переменной типа int
auto intMinMax() -> int{

    // Объявление переменной
    // Сopy initialization (копирующая инициализация)
    int iValue = -2;

    // Считаем по формуле -(2^n-1) до (2^n-1)-1 для signed.
    int min = -(pow(2,8*sizeof(iValue)-1));
    int max = (pow(2,8*sizeof(iValue)-1))-1;
    std::cout << "Переменная типа int диапазон:\n от"
              << "\tmin = " << min
              << "\tдо"
              << "\tmax = "<< max <<" \n\n";
}

// trailing-синтаксис в C++ 11
// Функция для переменной типа char
auto charMinMax()-> int{

    // Объявление переменной
    //Direct initialization (прямая инициализация)
    char cValue('a');
    int min = -(pow(2,8*sizeof(cValue)-1));
    int max = (pow(2,8*sizeof(cValue)-1))-1;
    std::cout << "Переменная типа char диапазон:\n от"
              << "\tmin = " << min
              << "\tдо"
              << "\tmax = "<< max <<" \n\n";
}

// trailing-синтаксис в C++ 11
// Функция для переменной типа long long int
auto longMinMax()-> int{

    // Объявление переменной
    // Uniform initialization
    long long int lValue{2563};
    //std::cout << "lValue sizeof: " << sizeof(lValue) << "\n";
    long long int min = -(pow(2,8*sizeof(lValue)-1));
    long long int max = (pow(2,8*sizeof(lValue)-1))-1;
    std::cout << "Переменная типа long long диапазон от:\n от"
              << "\tmin = " << min
              << "\tдо"
              << "\tmax = "<< max <<" \n\n";
}

// trailing-синтаксис в C++ 11
// Функция для переменной типа bool
auto boolMinMax()-> int{

    // Объявление переменной
    // Сopy initialization (копирующая инициализация)
    bool bValue = 0;
    //std::cout << "bValue sizeof: " << sizeof(bValue) << "\n";

    // Посчитаем по формуле 0 до (2n)-1 для unsigned
    int min = 0;
    int max = (pow(2,8*sizeof(bValue)))-1;
    std::cout << "Переменная типа bool диапазон:\n от"
              << "\tmin = " << min
              << "\tдо"
              << "\tmax = "<< max <<" \n";
}

// task 5
// Вызов функции printChar со значениями по умолчанию
void printChar(int c='a', char b='b', char cC='c', char d='d'){

    std::cout << "\n\tint c = " << c
              << "\n\tchar b = " << b
              << "\n\tchar c = " << cC
              << "\n\tchar d = " << d << "\n";

}

/* task 6
 * перегруженные функции
6. Выполните перегрузку функций с двумя параметрами (float, int) которые делают
вывод: типа данных: int, размер буте.
*/
int functAreaRectangle(int val_a, int val_b){
    return val_a*val_b;
}
double functAreaRectangle(double val_a, double val_b){
    return val_a*val_b;
}

// task 7
// Функция присваивания переменной значения int
int funcValueIn(){
    int inValue1;
    std::cin >> inValue1;
    return inValue1;
}

// Функция вывода на экран тип void
void funcShift(bool shiftDirect, int byte ){
    std::cout << "Введите одно целое число от которого будет сдвиг:\t";
    int startValue = funcValueIn();

    std::cout << "Заданные значения:\n"
              << "Вы ввели число:\t" << startValue << "\n"
              << "сдвиг:\t" << shiftDirect << "\n"
              << "сдвиг количества бит:\t" << byte << "\n";
    int result;

    // тернарный оператор
    (shiftDirect)? result = startValue << byte : result = startValue >> byte ;
    std::cout << " Результат сдвига = " << result << "\n";
    std::cout << " min = " << MIN(startValue, result) << "\n";
    std::cout << " max = " << MAX(startValue, result) << "\n";
}

/*==========================================================================*/
/* main - главная функция с которой начинается исполнение программы
/*==========================================================================*/
int main(){

    /******************************* Задание 1 ***************************************/
    // вывод сообщения для пользователя в терминале
    std::cout << "\n\tЗадание 1\n";
    std::cout << "Введите одно любое число для возведения в числа в куб: ";

    // объявление переменной типа double
    double userValue;

    // ввод значения переменной
    std::cin >> userValue;

    // вывод сообщения с функцией, с переданным на вход параметром
    std::cout << "\nВозведение введённого числа в куб = "
              << functionCube(userValue) << "\n";
    // задает ширину поля 80 символов
    std::cout.width(80);

    // устанавливает символ заполнитель тире
    std::cout.fill('-');

    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;

    /******************************* Задание 2 ***************************************/
    std::cout << "\n\tЗадание 2\n";
    std::cout << "\nВведите символ любой: ";

    // объявление переменной типа char
    char userSymbol;
    std::cin >> userSymbol;

    //вызов функции с параметром userSymbol
    functionPrint(userSymbol);
    std::cout.width(80);
    std::cout.fill('-');
    std::cout << "" << std::endl;

    /******************************* Задание 3 ***************************************/
    std::cout << "\n\tЗадание 3\n\n";

    /* Вызов функций с выводом min-max диапазон в десятичном виде
     * для переменных: int iValue, bool cValue, char cValue, long lValue
     */
    intMinMax();
    charMinMax();
    longMinMax();
    boolMinMax();
    std::cout.width(80);
    std::cout.fill('-');
    std::cout << "" << std::endl;

    /******************************* Задание 4 ***************************************/
    std::cout << "\n\tЗадание 4\n";

    // Объявление локальной переменной
    int valueVariable(4);

    std::cout << "\nВывод значения глобальной переменной: " << ::valueVariable << "\n";
    std::cout << "Вывод значения локальной переменной: " << valueVariable << "\n";
    std::cout.width(80);
    std::cout.fill('-');
    std::cout << "" << std::endl;

    /******************************* Задание 5 ***************************************/
    std::cout << "\n\tЗадание 5\n";
    // Вывод значений вызова функции printChar
    std::cout << "Значения вызова функции printChar:\n";
    printChar('a', 'a', 'b', 'c');
    printChar(1, 'a', 'b', 'c');
    printChar(1, 's', 'b', 'c');
    printChar(1, 's', 'X', 'c');
    printChar(1, 's', 'X', 'n');

    std::cout.width(80);
    std::cout.fill('-');
    std::cout << "" << std::endl;

    /******************************* Задание 6 ***************************************/
    std::cout << "\n\tЗадание 6\n";
    std::cout << "\nВывод с использованием перегруженных функций:\n";

    // выбирается версия int
    int iResult{functAreaRectangle(10, 30)};
    std::cout << "Площадь прямоугольника:"
              << iResult << "\n";

    // выбирается версия double
    double dResult{functAreaRectangle(10.2, 30.5)};
    std::cout << "Площадь прямоугольника:"
              << dResult << "\n";

    std::cout.width(80);
    std::cout.fill('-');
    std::cout << "" << std::endl;

    /******************************* Задание 7 ***************************************/
    std::cout << "\n\tЗадание 7\n";
    std::cout << "Введите параметр для сдвига 0 влево, 1 вправо:\t";
    bool valShift;
    std::cin >> valShift;
    std::cout << "Введите целое число на сколько вы хотите осущесвить сдвиг:\t";
    int valueY;
    std::cin >> valueY;

    // вызов функции с двумя параметрами
    funcShift(valShift, valueY);
    std::cout << "\n\n";

    return 0;
}
