/*
* Лабораторная работа No1
* Исследование ввода-вывода стандартной библиотеки С++
*
* Программа 2-2.
* "Вывод размеров типов данных".
* Типы данных
* Developer: Mochalov E.
*/
/*==========================================================================*/
/* INCLUDE LIBS */
/*==========================================================================*/
/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

/* Подключаем библиотеку для printf */
#include <stdio.h>

/* Подключаем библиотеку манипуляторов форматирования */
#include <iomanip>
//using namespace std; /* Пространство имен std */

/*==========================================================================*/
/* main - главная функция с которой начинается исполнение программы */
/*==========================================================================*/
int main(){

    // Прямая инициализация (операция объявления переменных)
    // Логический тип
    bool valueBool(false);

    // Целочисленные типы
    short valueShort(2);
    int valueInt(-3);
    long valueLong(2048);
    long long valueLongLong(-4096);

    // Символьные типы
    char valueChar(33);
    //wchar_t применяются префикс L
    wchar_t valueWcharT(L'A');
    // char16_t применяются префикс u
    char16_t valueChar16(u'l');
    // char32_t применяются префикс U
    char32_t valueChar32(U'o');

    //Числа с плавающей точкой
    // float применяется суффикс f/F
    float valueFloat(1.2f);
    // double
    double valueDouble(10.28);
    // long double применяется суффикс l/L:
    long double valueLongDouble(10.56l);

    std::cout << " Организация вывода размеров основных типов \
данных C++ в байтах.\n" << std::endl;
     std::cout << "\tОсновные типы данных в C++" << std::endl;
    // задает ширину поля 40 символов
    std::cout.width(40);
    // устанавливает символ заполнитель тире
    std::cout.fill('-');
    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;
    std::cout << "\tЛогический тип данных" << std::endl;

    // вывод длины в байтах типа bool
    std::cout << "\tbool:\t\t" << sizeof(valueBool) << " bytes" << std::endl;
    // задает ширину поля 40 символов
    std::cout.width(40);
    // устанавливает символ заполнитель тире
    std::cout.fill('-');
    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;
    std::cout << "\tЦелочисленный тип данных" << std::endl;

    // вывод длины в байтах типа short
    std::cout << "\tshort:\t\t" << sizeof(valueShort)
              << " bytes" << std::endl;
    std::cout << "\tint:\t\t" << sizeof(valueInt)
              << " bytes" << std::endl;
    std::cout << "\tlong:\t\t" << sizeof(valueLong)
              << " bytes" << std::endl;
    std::cout << "\tlong long:\t" << sizeof(valueLongLong)
              << " bytes" << std::endl;

    // задает ширину поля 40 символов
    std::cout.width(40);

    // устанавливает символ заполнитель тире
    std::cout.fill('-');

    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;
    std::cout << "\tСимвольный тип данных" << std::endl;

    // вывод длины в байтах типа char
    std::cout << "\tchar:\t\t" << sizeof(valueChar)
              << " bytes" << std::endl;
    std::cout << "\twchar_t\t\t" << sizeof(valueWcharT)
              << " bytes" << std::endl;
    std::cout << "\tvchar16_t\t" << sizeof(valueChar16)
              << " bytes" << std::endl;
    std::cout << "\tchar32_t\t" << sizeof(valueChar32)
              << " bytes" << std::endl;

    // задает ширину поля 40 символов
    std::cout.width(40);

    // устанавливает символ заполнитель тире
    std::cout.fill('-');

    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;

    std::cout << "\tТип данных с плавающей точкой" << std::endl;

    // вывод длины в байтах типа float
    std::cout << "\tfloat\t\t" << sizeof(valueFloat) << " bytes" << std::endl;

    // вывод длины в байтах типа double
    std::cout << "\tdouble\t\t" << sizeof(valueDouble) << " bytes" << std::endl;

    // вывод длины в байтах типа long double
    std::cout << "\tlong double\t" << sizeof(valueLongDouble) << " bytes" << std::endl;

    // задает ширину поля 40 символов
    std::cout.width(40);

    // устанавливает символ заполнитель тире
    std::cout.fill('-');

    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;

    std::cout << "\n Организация вывода размеров основных типов \
данных данных с использованием модификаторов длины и размера.\n" << std::endl;

    // Прямая инициализация (операция объявления переменных)
    // Целочисленные типы
    // Модификатор длины
    long int valueLongInt(24865);
    signed int valueSignedInt(-55);
    unsigned short valueUnsignedShort(-2);
    
    // UL - unsigned long
    unsigned long valueUnsignedLong(2048UL);
    
    // ULL - unsigned long long
    unsigned long long valueUnsignedLongLong(4096ULL);

    // Символьный тип данных
    signed char valueSignedChar(-65);
    unsigned char valueUnsignedChar(65);

    //Числа с плавающей точкой
    // Модификатор длины
    long double valueLongDouble1(10.561l);

    std::cout << "\tЦелочисленный тип данных" << std::endl;

    // вывод длины в байтах типа long int
    std::cout << "\tlong int:\t\t" << sizeof(valueLongInt)
              << " bytes" << std::endl;

    // вывод длины в байтах типа int
    std::cout << "\tsigned int:\t\t" << sizeof(valueSignedInt)
              << " bytes" << std::endl;
    std::cout << "\tunsigned short:\t\t" << sizeof(valueUnsignedShort)
              << " bytes" << std::endl;
    std::cout << "\tunsigned long:\t\t" << sizeof(valueUnsignedLong)
              << " bytes" << std::endl;
    std::cout << "\tunsigned long long:\t" << sizeof(valueUnsignedLongLong)
              << " bytes" << std::endl;
    
    // задает ширину поля 40 символов
     std::cout.width(40);
    
    // устанавливает символ заполнитель тире
    std::cout.fill('-');
    
    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;
    std::cout << "\tСимвольный тип данных" << std::endl;
    std::cout << "\tsigned char:\t\t" << sizeof(valueSignedChar)
              << " bytes" << std::endl;
    std::cout << "\tunsigned char:\t\t" << sizeof(valueUnsignedChar)
              << " bytes" << std::endl;
    
    // задает ширину поля 40 символов
    std::cout.width(40);
    
    // устанавливает символ заполнитель тире
    std::cout.fill('-');
    
    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;
    std::cout << "\tТип данных с плавающей точкой" << std::endl;
    std::cout << "\tlong double\t\t" << sizeof(valueLongDouble1) << " bytes" << std::endl;
    
    // задает ширину поля 40 символов
     std::cout.width(40);
    
     // устанавливает символ заполнитель тире
    std::cout.fill('-');
    
    // вывод пустой строки с заполнителем
    std::cout << "" << std::endl;

    return 0;
}
