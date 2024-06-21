#include <iostream>
#include <fstream>  // для работы с файлами
#include <set>      // подключаем set
#include <cstdlib>  // для использования exit()

// Функция проверки на разрешенные символы алфавита
bool checkChar(const char a){
    // инициализация контейнера set
    std::set<char> alfa = {'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y'};
    // найти элемент "a" в контейнере
    return alfa.find(a) != alfa.end();

}

/* Функция проверки строки на разрешённые символы
 * и соответствия заданной длинны */
bool checkNum(const std::string &str){

    return str.length() == 6 // длинна рег. номера состоит из 6 символов
            && checkChar(str[0])
            // Проверка является ли аргумент десятичной цифрой
            && isdigit(str[1])
            && isdigit(str[2])
            && isdigit(str[3])
            && checkChar(str[4])
            && checkChar(str[5]);
}

int main()
{
    // Открываем файл input.txt в директории сборки проекта
    std::ifstream infile("input.txt");

    // Вызов метода isopen
    if(infile.is_open()){
        std::cout << "file input.txt isOpen" << '\n';
    }

    // Выводим сообщение об ошибке
    else std::cerr << "Error Open file" << '\n';
    int N;
    infile >> N;

    // Создаем файл output.txt
    std::ofstream outfile("output.txt");

    // Если мы не можем открыть этот файл для записи данных,
    if (!outfile)
    {
        // то выводим сообщение об ошибке и выполняем функцию exit()
        std::cerr << "Uh oh, output.txt could not be opened for writing!" << std::endl;
        exit(1);
    }
    std::string str;
    for(int i = 1; i <= N; ++i){
        infile >> str;
        std::cout << str << " " << (checkNum(str)? "Yes\n" : "No\n") <<"\n";
        // Записываем в файл output.txt
        outfile << i << " " << (checkNum(str)? "Yes\n" : "No\n");
    }

    // Закрываем файл input.txt
    infile.close();
    return 0;
}
