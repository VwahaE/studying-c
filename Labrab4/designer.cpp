#include <iostream>

void funcDesigner(bool valFl = 1){
    if(valFl){
        std::cout.fill('-');
        std::cout.width(80);
        std::cout << "" << " \n";
    }
    std::cout.fill(' ');
}
