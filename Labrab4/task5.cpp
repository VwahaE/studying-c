/* ������砥� ������⥪� ��� �����/�뢮�� */
#include <iostream>

// �ᯮ����⥫쭠� �㭪�� ��ଫ����
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

/* �㭪�� �뢮�� ������᪮�� ��䠢��
* �� a �� z ����� � ������묨 ������ � ⠡���� ASCII
*/
void funcLowercase(){
    funcInsertingDesign(0);
    funcInsertingDesign(1);
    funcInsertingDesign(0);
    std::cout << "������" << ' '<< "��� �㪢� (Dec)" << "\n";
    funcInsertingDesign();
    funcInsertingDesign(1);
    std::cout.fill(' ');
    /* �뢮� � 横�� �㪢 ������᪮�� ��䠢�� �� a �� z �����
     * � ������묨 ������ ⠡���� ASCII
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
