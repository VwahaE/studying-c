/* ������砥� ������⥪� ��� �����/�뢮�� */
#include  <iostream>

// �㭪�� �뢮�� ���ᨢ� � ���᮫�
void printArray(int array[], int length ){
    std::cout << "\t�뢮� ���ᨢ� �� �࠭:\n\t";
    for(int i = 0; i < length; i++){
        std::cout <<  array[i] << ' ';
    }
    std::cout << "\n";
}
