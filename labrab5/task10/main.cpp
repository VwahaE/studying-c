#include <iostream>
#include <string>

//функция сортировки пузырьком
void bubbleSort(std::string* array, int size)
{
  std::string tmp;
  int i, j;
  for(i = 0; i < size-1; ++i){
    for (j = 0; j < size-1; ++j){
      if(array[j + 1] < array[j]){
        tmp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = tmp;
      }
    }
  }
}

// Функция вывод в консоль
void printArrayStr(std::string* array, int count){
    for(int i = 0; i < count; ++i){
        std::cout << "\t";
        std::cout << array[i] << "\n";
    }
    std::cout << "\n";
}

int main()
{
    const int arraSize(80);
    std::string str[arraSize];

    //счётчик
    int counter = 0;
    std::cout << "\tВведите строку, конец ввода завершения ввода \-\ ввод пустой строки.\n";

    //Ввод данных для строки в цикле
    for(int i = 0; i < arraSize; ++i){
        std::cout << "\t";

        // Метод getline принимает два объекта - std::cin и переменную.
        getline(std::cin, str[i]);

        //условие выхода из ввода пустое значение
        if(str[i] == "") break;
        else ++counter;
    }
    std::cout << "\tВы ввели массив до сортировки:\n";
    printArrayStr(str, counter);
    std::cout << "\tРезультат выполнения программы после сортировки:\n";
    bubbleSort(str, counter);
    printArrayStr(str, counter);

    return 0;
}
