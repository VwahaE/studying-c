#include "head_lb5.h"

// Функция вывода обычных переменных
void ordinaryVariable(int value_1, double value_2, char value_3){
    /* Обычные переменные.
     Выводим значение переменных iValue, dValue, cValue */
    std::cout << "\tiValue = " << value_1 << '\n';

    // задает количество знаков
    std::cout.precision(10);
    std::cout << "\tdValue = " << value_2 << '\n';
    std::cout << "\tcValue = " << value_3 << '\n';
    outputTab();
}

// Функция вывода адреса памяти по переменной-ссылке
void outputAddress(int &value_1, double &value_2, char &value_3){
    std::cout << "\tИспользование & оператор:" << '\n';
    funcDesigner(1,35);

    // переменная-ссылка
    // Вывод адреса памяти ссылки, переменных iValue, dValue, cValue
    std::cout << "\tадрес iValue = " << &value_1 << '\n';
    std::cout << "\tадрес dValue = " << &value_2 << '\n';
    //std::cout << "\tадрес cValue = " << (void*)&value_3 << '\n';
    std::cout << "\tадрес cValue = " << static_cast<void*>(&value_3) << '\n';
    outputTab();
}

// Функция вывода значения по переменной-ссылке
void outputValueAddress(int &value_1, double &value_2, char &value_3){
    std::cout << "\tИспользуя оператор & и *:" << '\n';
    funcDesigner(1,48);

    // переменная-ссылка
    // Вывод значение по адресу, переменных iValue, dValue, cValue
    std::cout << "\tзначение по адресу iValue = " << *&value_1 << '\n';
    std::cout << "\tзначение по адресу dValue = " << *(&value_2) << '\n';
    std::cout << "\tзначение по адресу cValue = " << *&value_3 << '\n';
    outputTab();
}

// Функция вывода адреса памяти по переменной-указателю
void outputAddressPointer(int *value_1, double *value_2, char *value_3){
    std::cout << "\tИспользуя только переменную указателя:" << '\n';
    funcDesigner(1,46);

    // переменная-указатель
    // Вывод адреса памяти по указателю, переменных iValue, dValue, cValue
    std::cout << "\tзначение по адресу iValue = " << value_1 << '\n';
    std::cout << "\tзначение по адресу dValue = " << value_2 << '\n';
    std::cout << "\tзначение по адресу cValue = "
              << static_cast<void*>(value_3) << '\n';
    outputTab();
}

// Функция вывода значения по переменной-указателю
void outputValuePointer(int *value_1, double *value_2, char *value_3){
    std::cout << "\tИспользование только оператора указателя:" << '\n';
    funcDesigner(1,49);

    // переменная-указатель
    // Вывод значение по указателю, переменных iValue, dValue, cValue
    std::cout << "\tзначение по адресу iValue = " << *value_1 << '\n';
    std::cout << "\tзначение по адресу dValue = " << *value_2 << '\n';
    std::cout << "\tзначение по адресу cValue = " << *value_3 << '\n';
}

void outputTaskThree(){

    // Инициализация переменной iValue тип int
    int iValue = 1300;

    // Cсылка на переменную iValue
    int &ref_i = iValue;

    // Указатель на значение int
    int *piValue = &ref_i;

    // Инициализация переменной dValue тип double
    double dValue(100.500006);

    // Cсылка на переменную dValue
    double &ref_d = dValue;

    // Инициализация указателя pdValue значением dValue
    double *pdValue {&ref_d};

    char cValue {'R'};
    char &ref_c = cValue;
    char *pcValue = &ref_c;

    outputTab();
    std::cout << "\tУказатель: демонстрация использования операторов & и *:"
              << '\n';
    // Функция оформления подчёркивания
    funcDesigner(1,64);

    ordinaryVariable(iValue, dValue, cValue);

    outputAddress(ref_i, ref_d, ref_c);

    outputValueAddress(ref_i, ref_d, ref_c);

    outputAddressPointer(piValue, pdValue, pcValue);

    outputValuePointer(piValue, pdValue, pcValue);

    funcDesigner();


}
