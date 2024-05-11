#include "head_lb5.h"

void funcDesigner(bool valFl, int valW){
    if(valFl){
        std::cout.fill('-');
        std::cout.width(valW);
        std::cout << "" << " \n";
    }
    std::cout.fill(' ');
}

void outputTab(){
    std::cout << "\n";
}
