#include <iostream>

#include <vector>
#include <random>
#include <ctime>

#include <algorithm>

int main() {
    int task(1);
    /******************************* Задание 2 ***************************************/
    std::cout << "\tЗадание "<< ++task <<"\n\n";
    std::cout << "Введите целое число N (значение должно быть от 1 до 1000): ";
    unsigned int N;
    std::cin >> N;
    bool isRightNumber = false;
    while(isRightNumber == false){

        if(std::cin.fail() || (N < 1 || N > 1000) || (N != (int)N)){
            std::cin.clear();
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
    std::uniform_int_distribution<int> dist(1,10);
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

    return 0;
}

