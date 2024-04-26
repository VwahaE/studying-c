/* Подключаем библиотеку для ввода/вывода */
#include <iostream>

// Функция преобразования типов C-style cast
void printCstyle(int x, float y, double z, unsigned short k){
    std::cout <<"\tЯвное преобразование\tC-style cast:\n\n";
    int i = (int)(x+y)*z+k;
    std::cout <<"\tint i = (int)(x+y)*z+k = " << i << "\n";
    k = (unsigned short)x-y/z;
    std::cout <<"\tk = (unsigned short)x-y/z = " << k << "\n";
    z = (double)x*y+z/x;
    std::cout <<"\tz = (double)x*y+z/x = " << z << "\n";
    unsigned int ui = (unsigned int)x/y+k;
    std::cout <<"\tui = (unsigned int)x/y+k = " << ui << "\n";
    short s = x%(short)(x/y);
    std::cout <<"\ts = x%(short)(x/y) = " << s << "\n";

}

// Функция преобразования типов static_cast
void printStaticCast(int x, float y, double z, unsigned short k){
    std::cout <<"\tЯвное преобразование\tstatic_cast:\n\n";
    int i = static_cast<int>((x+y)*z+k);
    std::cout <<"\tint i = static_cast<int>((x+y)*z+k) = " << i << "\n";
    k = static_cast<int>(x-y/z);
    std::cout <<"\tk = static_cast<int>(x-y/z) = " << k << "\n";
    z = static_cast<double>(x*y+z/x);
    std::cout <<"\tz = static_cast<double>(x*y+z/x) = " << z << "\n";
    unsigned int ui = static_cast<unsigned int>(x/y+k);
    std::cout <<"\tui = static_cast<unsigned int>(x/y+k) = " << ui << "\n";
    short s = x% static_cast<short>(x/y);
    std::cout <<"\ts = x% static_cast<short>(x/y) = " << s << "\n";
}
