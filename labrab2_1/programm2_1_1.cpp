/*
* Лабораторная работа No2.1
*“Константы. Побитовые операции, Логические операторы. Циклы” С++
* Типы данных
* Задачи № 1, 2, 3.
* Developer: Mochalov E.
*/
/*==========================================================================*/
/* INCLUDE LIBS */
/*==========================================================================*/
/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

/* Подключаем библиотеку для printf */
#include <stdio.h>


/* прямая инициализация переменных для объявления Macro-констант*/
bool value_bool5(0), value_bool6(1);

// Значение Macro-констант
#define VALUE_5 value_bool5
#define VALUE_6 value_bool6

// Объявляем новое перечисление
enum List_int_const{
    valInt1 = 1,
    valInt2 = 3,
    valInt3 = 6,
    valInt4 = 0,
    valInt5 = 7,
    valInt6 = 13
};

/*==========================================================================*/
/* main - главная функция с которой начинается исполнение программы
/*==========================================================================*/
int main(){
    /******************************* Задание 1 ***************************************/
    std::cout << "Задание 1\n\n";
    std::cout << "Предположите результат следующих выражений теоретически:\n";
    std::cout << "(true && true) || false;\n(false && true) || true;\n\
(false && true) || false || true;\
\n(5 > 6 || 4 > 3) && (7 > 8)\n!(7 > 6 || 3 > 4)\n";
    std::cout << "\nЛогическое true - это 1;\n";
    std::cout << "Логическое false - это 0;\n";
    std::cout << "Логическое && (И) - это умножение (*);\n";
    std::cout << "Логическое || (ИЛИ) - это сложение (+);\n\n";
    std::cout << "1) (true && true) || false => (1 * 1) + 0 => 1(true);\n";
    std::cout << "2) (false && true) || true => (0 * 1) + 1 => 1(true);\n";
    std::cout << "3) (false && true) || false || true => (0 * 1) + 0 + 1 =>\
1(true);\n";
    std::cout << "4) (5 > 6 || 4 > 3) && (7 > 8) => ((5 > 6 = 0) + (4 > 3 =\
1)) * (7 > 8 = 0) => 0(false);\n";
    std::cout << "5) !(7 > 6 || 3 > 4) => !((7 > 6 = 1) + ( 3 > 4= 0)) эквив\
алентно !(1) * !(0) => 0(false);\n";
    std::cout << "\nРешение:\n";
    std::cout << "Реализация вывода результатов логических выражений в программ\
е:\n";
    std::cout << "(true && true) || false = ";
    (true && true) || false ? std::cout << "true;\n" : std::cout << "false\n";

    std::cout << "(false && true) || true = ";
    (false && true) || true ? std::cout << "true;\n" : std::cout << "false\n";

    std::cout << "(false && true) || false || true = ";
    (false && true) || false || true ? std::cout << "true;\n" : std::cout << "false\n";

    std::cout << "(5 > 6 || 4 > 3) && (7 > 8) = ";
    (5 > 6 || 4 > 3) && (7 > 8)? std::cout << "true;\n" : std::cout << "false\n";

    std::cout << "!(7 > 6 || 3 > 4) = ";
    !(7 > 6 || 3 > 4) ? std::cout << "true;\n" : std::cout << "false\n";

    // задает ширину поля 80 символов
    std::cout.width(80);

    // устанавливает символ заполнитель тире
    std::cout.fill('-');
    std::cout << "\n\n";

/******************************* Задание 2 ***************************************/
    std::cout << "Задание 2\n";

    // прямая инициализация логических типов данных
    /* объявление константы
     * const — которая подразумевает,
     * что значение не будет изменяться.*/
    const bool valueBool1(true);
    const bool valueBool2(false);

    /* объявление константы
     * constexp - который подразумевает вычисление
     * константы во время компиляции.*/
    constexpr bool valueBool3(false);
    constexpr bool valueBool4(true);

    std::cout << "\nРеализация вывода результатов следующих выражений, подставив\
в них константы вместо пропусков:\n";

    std::cout << "(( _ && _ ) || ( !_) && (_||_));\n\
((_ &&_ ) || (_&&_) || (!_));\n\((_ || _) && (_ || _) && (_||_));\n\
((_ >_) && (_<_) && (_!=_));\n\n";

    std::cout << "(( valueBool1 && valueBool2 ) || ( !valueBool3) && (VALUE_5||VALUE_6)) = ";
    (( valueBool1 && valueBool2 ) || ( !valueBool3 ) && ( VALUE_5 || VALUE_6 )) ? std::cout << "true;\n" : std::cout << "false\n";
    std::cout << "((valueBool2 && valueBool3 ) || ( valueBool1 && VALUE_5 ) || (!valueBool4)) = ";
    ((valueBool2 && valueBool3 ) || ( valueBool1 && VALUE_5 ) || ( !valueBool4 )) ? std::cout << "true;\n" : std::cout << "false\n";
    std::cout << "((valueBool3 || valueBool4) && (VALUE_6 || valueBool1) && (VALUE_5 || valueBool2)) = ";

    ((valueBool3 || valueBool4) && (VALUE_6 || valueBool1) && (VALUE_5 || valueBool2)) ? std::cout << "true;\n" : std::cout << "false\n";
    std::cout << "((valInt2 > valInt4) && (valInt5 < valInt6) && (valInt3 != valInt1)) = ";
    ((valInt2 > valInt4) && (valInt5 < valInt6) && (valInt3 != valInt1)) ? std::cout << "true;\n" : std::cout << "false\n";

    // задает ширину поля 80 символов
    std::cout.width(80);

    // устанавливает символ заполнитель тире
    std::cout.fill('-');
    std::cout << "\n\n";

/******************************* Задание 3 ***************************************/

    std::cout << "Задание 3\n";

    std::cout << "Проверим правильность законов де Моргана на практике.\n";
    std::cout << "Законы де Моргана в текстовой записи имеют следующий вид:\n";

    // прямая инициализация логических типов данных 0 - false, 1 - true
    bool value_a(1);
    bool value_b(0);

    std::cout.width(35);
    std::cout.fill('-');
    std::cout << "\n";
    std::cout <<"| " << "не (a и b) = (не a) или (не b) |\n";
    std::cout <<"| " << "не (a или b) = (не a) и (не b) |\n";
    std::cout.width(35);
    std::cout.fill('-');
    std::cout << "\n\n";

    std::cout << "не (a и b) => !(a && b) = " << !(value_a && value_b) <<"\n";
    std::cout << "(не a) или (не b) => !(a) || !(b) = " << (!(value_a) || !(value_b)) <<"\n";
    std::cout << !(value_a && value_b) << " = " << (!(value_a) || !(value_b)) <<"\n\n";

    std::cout << "не (a или b) => !(a || b) = " << !(value_a || value_b) <<"\n";
    std::cout << "(не a) и (не b) => !(a) || !(b) = " << (!(value_a) && !(value_b)) <<"\n";
    std::cout << !(value_a || value_b) <<" = "<< (!(value_a) && !(value_b)) <<"\n";

    return 0; // Возвращаемое значение
} /* Закрытая скобка - окончание блока стейтмена, кода относящийся к функции main */
