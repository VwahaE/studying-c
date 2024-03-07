/*
* Лабораторная работа No1
* Исследование комментариев С++:
*
* Программа 3.
* Вычислить скорость прямолинейного движения
* Developer: Mochalov E.
*/

/* Подключаем библиотеку для ввода/вывода */
#include <iostream>
/* Подключаем библиотеку манипуляторов форматирования */
#include <iomanip>

/* подключаем пространство имен */
using namespace std;

int main()
{
    cout << "Поезд проехал \n";
    cout << " Введите расстояние пройденного пути поездом (км): ";

    /* объявляем переменную пути 
     используем формат Pascal case для имен переменных */
    double ValueDistance;

    /* стандартный входной поток */
    cin >> ValueDistance;
    cout << "за \n";
    cout << " Введите время пути поезда (ч.): ";

    /* объявляем переменную времени */
    double TimeSpent;
    cin >> TimeSpent;

    cout << "Чему равна скорость поезда?\n\n";

    /* объявляем переменную скорости */
    double ValueSpeed;

     /* производим расчёт */
    ValueSpeed = ValueDistance / TimeSpent;

    /* используем флаг форматирования (Выравнивание по левой границе) */
    cout.setf( ios::left);

    // использование манипуляторов форматирования
    cout << setw(34)<< "Дано:" ;
    cout << setw(5) << "|";
    cout << setw(20) << "Решение:" << endl;

    cout << "Расстояние S = " << ValueDistance << setw(16) << " (км.)" << "|";
    cout  << setw(20) << " v = S/t ;" << endl;

    cout << "Время в пути t = " << TimeSpent << setw(16) << " (ч.)" << "|";
    cout << " v = " << ValueDistance << "/" << TimeSpent << ";\n";

    cout.fill('-');
    cout.width(34);
    cout << "" << "|" ;
    cout << " v = " << ValueSpeed <<  " км/ч." << endl;
    cout << "Найти скорость поезда - v (км/ч)? " << "|\n";
    cout << "\nОтвет: Скорость поезда равна " << ValueSpeed << " км/ч." <<  endl;

    return 0;
}
