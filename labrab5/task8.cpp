#include "head_lb5.h"

/* Функция берет упакованную строчку и восстанавливает по ней
исходную строку.
*/
void restorPackedLine(std::string& text){

    //result - результат восстановленной строки
    std::string result ="";

    // счётчик повторяюшихся букв
    int counter(0);
    for(char i : text){
        // проверяем, является ли символ цифрой
        if(i >= '0' && i <='9'){
            counter = counter * 10 +  (i - '0');
        }
        else{ // если попалась не цифра
            if(counter == 0)

                // добавляем в строку 1 символ
                result += i;
            else{ // добавляем кол-во символов
                result += std::string(counter, i); //(counter, i);

                // обнуляем счётчик
                counter = 0;
            }
        }
    }
    // вывод в консоль результата
    std::cout <<"\tВосстановленная строка: ";
    for(int index = 0; index < result.size(); ++index){
        std::cout << result.substr(index, 1);
    }
    std::cout <<"\n";
}

// Функция вывода задания № 8
void outputTaskEight(){
    // std::string str = "4AB5C4D";
    // std::cout << " задано: " << str<<"\n";

    /* инициализация переменных для строк
      str - начальная строка */
    std::string str = "";
    std::cout << "\tВведите строку (пример: 4AB5C4D ): ";
    std::cin >> str;
    std::cout << "\tВы задали: " << str<<"\n";

    // счётчик повторяюшихся букв
    int counter(0);
    restorPackedLine(str);
    funcDesigner();
}
