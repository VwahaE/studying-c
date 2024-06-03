#include <iostream>

#include <vector>
#include <random>
#include <ctime>

#include <algorithm>

// прямой порядок вывода контейнера типа vector
void printRevers(std::vector<int> &stack,
                 std::vector<int>::reverse_iterator beg,
                 std::vector<int>::reverse_iterator end){
    for (auto p{ beg };  p != end; ++p)
        std::cout << *p << ' ';
}

// обратный порядок вывода контейнера типа vector
void printForward(std::vector<int> &stack,
                  std::vector<int>::iterator beg,
                  std::vector<int>::iterator end){
    
    for (auto p{ beg };  p != end; ++p)
        std::cout << *p << ' ';
}

int main() {
    int task(1);
    /******************************* Задание 2 ***************************************/
    std::cout << "\tЗадание "<< ++task <<"\n\n";
    std::cout << "Введите целое число N (значение должно быть от 1 до 1000): ";
    unsigned int N;
    std::cin >> N;
    bool isRightNumber = false;
    while(isRightNumber == false){
        
        if(std::cin.fail() || (N < 1 || N > 1000) || (!(int)N)){
            
            // Очищаем ввод пользователя
            std::cin.clear();
            
            // Ввод должен игнорироваться предел равен максимуму 
            // основным условием, которое следует учитывать, является только '\n'
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Чило N введено не верно! Введите заново: ";
            std::cin >> N;
        }
        else {
            // std::cout << "Чило N = "<< N <<" введено верно!";
            // std::array<int, N> mas {};
            
            isRightNumber = true;
        }
    }
    std::default_random_engine gen(time(NULL));
    std::uniform_int_distribution<int> dist(-10,10);
    std::vector<int> myVector;
    //заполняем в цикле контейнер vector случайными числами
    for (int i = 0; i < N; ++i){
        myVector.push_back(dist(gen));
    }
    
    std::cout << "Содержимое контейнера:\n";
    for(int &ar : myVector){
        std::cout << ar << " ";
    }
    std::cout << "\n\n";
    std::sort(myVector.begin(), myVector.end());
    
    // объявляем итератор
    std::vector<int>::iterator newVec;
    
    // Удаляем все последовательно повторяющиеся элементы из диапазона
    // [myVector.begin(), myVector.end()]
    newVec = std::unique(myVector.begin(), myVector.end());
    
    // удаляем промежуток элементов с итераторами newVec и end.
    myVector.erase(newVec, myVector.end());
    
    std::cout << "Уникальных чисел: " << myVector.size() <<"\n";
    
    /******************************* Задание 3 ***************************************/
    std::cout << "\tЗадание "<< ++task <<"\n\n";
    
    // инициализация контейнера типа vector
    std::vector<int> data;
    
    // Заполнение в цикле for от 0 до 10
    for(int i = 0; i < 10; ++i){
        data.push_back(i);
    }
    
    // вывод в консоль
    std::cout << "\n";
    std::cout << "Содержимое контейнера Forward:\n";
    printForward(data, data.begin(), data.end());
    std::cout << "\n";
    std::cout << "Содержимое контейнера Revers:\n";
    printRevers(data, data.rbegin(), data.rend());
    std::cout << "\n";
    std::cout << "\n";
    /******************************* Задание 4 ***************************************/
    std::cout << "\tЗадание "<< ++task <<"\n\n";
    
    return 0

