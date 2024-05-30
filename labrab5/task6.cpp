#include "head_lb5.h"

/*
Разработайте программу, которая работает с логическими функциями: И, ИЛИ, ОR и
принимает два целых числа в качестве аргументов и возвращает результат операции.
Вместо того, чтобы писать эти функции каждый раз, определите их как Callback
функции и передать их в другую функцию, которая участвует в вычислении.
Используйте через условную компиляцию для выбора заголовка функции в которую
передается callback через std::function и обычный указатель.
*/

// Логическая функция И
bool func_1(int x, int y){
    int valBool(0);
    (( x + y > 10 ) && (x - y > 0 )) ? valBool=1 : valBool =0;
        return valBool;
}

// Логическая функция ИЛИ
bool func_2(int x, int y){
    return (( x + y > 10 ) || (x - y) * (-20));
}

// Логическая функция НЕ
bool func_3(int x, int y){
    if(!y || !x) { return 1 ;}
    else{
        return 0;
    }
}

// третьим параметром является пользовательский 
// выбор логической функции: И, ИЛИ, XОR
void printFunc(bool (*comparisonFcn)(int, int), int x, int y){
   std::cout.setf(std::ios::boolalpha);
   std::cout.width(20);
   std::cout << "result: " << comparisonFcn(x,y)<<"\n";

}

// Функция вывода задания № 6
void outpuSix(){
    // инициализация переменных
    int a{10};
    int b{6};
    
    // вызов функции
    printFunc(func_1, a, b);
    printFunc(func_2, a, b);
    printFunc(func_3, a, b);
    funcDesigner();
}
