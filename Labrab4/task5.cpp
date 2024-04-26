/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

// Вспомогательная функция оформления
void funcInsertingDesign(bool delim = 0){
    if(!delim){
        std::cout.fill(' ');
        std::cout.width(4);
        std::cout << "" ;
    }else{
        std::cout.fill('-');
        std::cout.width(22);
        std::cout << "" << " \n";
    }
}

/* Функция вывода английского алфавита
* от a до z вместе с десятичными кодами с таблицы ASCII
*/
void funcLowercase(){
    funcInsertingDesign(0);
    funcInsertingDesign(1);
    funcInsertingDesign(0);
    std::cout << "Символ" << ' '<< "Код буквы (Dec)" << "\n";
    funcInsertingDesign();
    funcInsertingDesign(1);
    std::cout.fill(' ');
    /* Вывод в цикле букв английского алфавита от a до z вместе
     * с десятичными кодами таблицы ASCII
    */
    for(char a = 'a'; a <= 'z'; a++){
        funcInsertingDesign(0);
        std::cout.width(3);
        std::cout << a ;
        std::cout.width(4);
        std::cout << '|';
        std::cout.width(8);
        std::cout << static_cast<int>(a) << "\n";
    }
    funcInsertingDesign(0);
    funcInsertingDesign(1);
}
