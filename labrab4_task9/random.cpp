#include <cstdlib> // ��� �㭪権 rand() � srand()
#include <ctime> // ��� �㭪樨 time()

// �㭪�� ���������� ���ᨢ� ��砩�묨 �᫠��
int arrayRandomFilling(int array[], int length){

    // ��⠭�������� ���祭�� ��⥬��� �ᮢ � ����⢥ ���⮢��� �᫠
    srand(static_cast<unsigned int>(time(0)));
    for(int i = 0; i < length; i++){

        /* ��ᢠ����� ���ᨢ� ᣥ���񭭮� ᫥���饥
         * ��砩��� �᫮ � ��᫥����⥫쭮�� */
        array[i] = rand();
    }
    return *array;
}
