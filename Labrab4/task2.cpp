/* ������砥� ������⥪� ��� �����/�뢮�� */
#include <iostream>

/* ������⥪� ��� ࠡ��� � ��砩�묨 �᫠�� */
#include <random> // ��� std::random_device � std::mt19937

/* ������⥪� ��� ࠡ��� � �६���� � ��⮩ */
#include <ctime> //��� �㭪樨 time()

void funcVortexMersenne(int arrayM[10], int valN){

    // ���樠�����㥬 ����� ���ᥭ�� ��砩�� ���⮢� �᫮�
    std::mt19937 mersenne(static_cast<unsigned int>(time(0)));

    // � 横�� for ������塞 ���ᨢ ��砩�묨 �᫠��
    for (int i = 0; i < valN; i++){
        arrayM[i] = mersenne();
    }
    std::cout << "\n\t�������� ���ᨢ�:\n";

    // �뢮��� ᮤ�ন��� ���ᨢ� � ���᮫�
    for (int i = 0; i < valN; ++i){

        std::cout << "\t" << arrayM[i] << ' ';
        // �᫨ �뢥�� 5 �ᥫ, � ��⠢�塞 ᨬ��� ����� ��ப�
        if ((i + 1) % 5 == 0)
            std::cout << "\n";
    }

    // ���� �������쭮�� � ���ᨬ��쭮�� ���祭��
    int Max = arrayM[0], Min = arrayM[0];

    //� 横�� �ࠢ������, �㫥��� ����� ���ᨢ�, � ����� ᫥���騬
    for (int i = 0; i < valN; i++){
        if(Max < arrayM[i])
            Max = arrayM[i];

        if(Min > arrayM[i])
            Min = arrayM[i];
    }

    //�뢮� १���� � ���᮫�
    std::cout << "\n\tMin value = " << Min << "\n";
    std::cout << "\tMax value = " << Max << "\n";
}
