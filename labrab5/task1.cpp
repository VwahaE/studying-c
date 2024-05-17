#include "head_lb5.h"

//функция - возвращает дескриптор стандартного выходного потока
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// функция вывода что на этаже ТРЦ принимает INT номер этажа
void printInfoLevel(int floor){
    switch (floor) {
    case 0:
        std::cout << "\a\a\a\a\t| Парковка * Автомойка |" << '\n';
        break;
    case 1:
        std::cout << "\t| Продуктовый супермаркет * Химчистка * Аптека |" << '\n';
        break;
    case 2:
        std::cout <<"\t| Магазин одежды * Часы и украшения |" << '\n';
        break;
    case 3:
        std::cout<<"\t| Парфюмерия и косметика * Оптика * Обувь |" << '\n';
        break;
    case 4:
        std::cout<<"\t| Сумки, чемоданы и аксессуары  * \
                   Пространство локальных дизайнеров |" << '\n';
        break;
    case 5:
        std::cout<<"\t| Товары для детей * Магазин для будущий мам |" << '\n';
        break;
    case 6:
        std::cout<<"\t| Кинотеатр * Фитнесс зал * Интерактивная комната для детей |" << '\n';
        break;
    case 7:
        std::cout<<"\a\a\a\t| Лентий сад  * Смотровая площадка |" << '\n';
        break;
    default:
        break;
    }

}
// функция вывода задания Лифт
void outputEventsElevator(){
    int choice = ZERO;

    // выйти или нет
    int exitOrNot = 1;

    std::cout << "\tВыберите этаж" << '\n';
    std::cout << "\t+------+" <<'\n';
    std::cout << "\t| этаж |" <<'\n';
    std::cout << "\t+------+" <<'\n';

    // список инициализаторов автоматически задает длину массива
    int arr_lev[] = {0, 1, 2, 3, 4, 5, 6, 7};

    // используем для вывода значений массива цикл for-each
    for(int val: arr_lev){
        std::cout << "\t|  " << val << "   |" <<'\n';
    }

    std::cout << "\t+------+" <<'\n';

    // условие выхода из цикла
    while (exitOrNot == 1 ) {

        std::cout << "\tВведите номер этажа: ";
        std::cin >> choice;
        std::cout << '\n';

        // "Подкрашиваем" вывод информации о этаже
        SetConsoleTextAttribute(hConsole, Green);

        // использование оператора ветвления switch-case.
        // вывод информации о этаже
        switch (choice) {
        case ZERO:
            printInfoLevel(0); break;
        case ONE:
            printInfoLevel(1); break;
        case TWO :
            printInfoLevel(2); break;
        case THREE :
            printInfoLevel(3); break;
        case FOUR :
            printInfoLevel(4); break;
        case FIVE :
            printInfoLevel(5); break;
        case SIX:
            printInfoLevel(6); break;
        case SEVEN:
            printInfoLevel(7); break;

            // значение по умолчанию
        default: std::cout << "\t\a\aЭтаж " << choice << " не существует!" << '\n'; break;
        }
        SetConsoleTextAttribute(hConsole, 7);

        std::cout <<'\n';
        std::cout << "\t+------+" <<'\n';
        std::cout << "\t| этаж |" <<'\n';
        std::cout << "\t+------+" <<'\n';

        for(int val: arr_lev){
            if (val == choice){
               SetConsoleTextAttribute(hConsole, Red);
               std::cout << "\t|  " << val <<"   |" <<'\n';
               SetConsoleTextAttribute(hConsole, 7);
            }else{
                        std::cout << "\t|  " << val << "   |" <<'\n';
            }
        }

        std::cout << "\t+------+" <<'\n';
        std::cout <<'\n';


        std::cout << "\tПокинуть из лифта - нажмите 0.\n";
        std::cout << "\tВыбрать другой этаж - нажмите 1: ";

        // условие выхода из цикла
        do{
           std::cin >> exitOrNot;
        } while (exitOrNot != 0 && exitOrNot != 1);
        std::cout <<'\n';

    }
}

void outputTaskOne(){
    outputEventsElevator();
    funcDesigner();
}
