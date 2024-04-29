/*
* ������ୠ� ࠡ�� No4
* ��᫥������� �㭪権 �++ � IDE
* (��⥣�஢����� �।� ࠧࠡ�⪨) Qt Creator
*
* ������� 9
* "��ப�. ���ᨢ�. �����ᨨ"
* ���� ������
* Developer: Mochalov E.
*/
/*==========================================================================*/
/* INCLUDE LIBS */
/*==========================================================================*/
/* ������砥� ������⥪� ��� �����/�뢮�� */
#include <iostream>

/* C���⢥��� ���������� 䠩� */
#include "task9.h"

int main() {

    std::cout << "\t������� 9\n";

    /* ������� ���ᨢ ��� ⨯� ������, ������⢮ ����⮢ � ���஬ ������
���짮��⥫�. �������� ��� � ������� ࠭���� rand() ᤥ���� ���஢�� ���ᨢ� ���
��⮤�� (����� ᠬ����⥫쭮 ������ ��⮤� ?��ॡ��?, ?����쪠?, ?����? �/���
?��ࠬ����쭮�? ���஢���). �ᯮ���� ��ࠤ���� �����-䠩����� �ணࠬ�; �
�⤥�쭮� ���㫥 �㤥� �⤥��� ��⮤ ���஢��.*/

    // ���樠�����㥬 ��६����� ���祭��� 0
    int length(0);
    std::cout << "������ 楫�� �᫮ ���-�� ����⮢ � ���ᨢ�: ";

    std::cin >> length;

    // ����� ���ᨢ ࠧ��஬ 㪠����� ���짮��⥫��
    int userArray[length];
    std::cout << "\n";

    // �襭�� //
    /*
     * �஡� ࠡ��� � 横��� for each
    srand(static_cast<unsigned int>(time(0))); // ��⠭�������� ���祭�� ��⥬��� �ᮢ � ����⢥ ���⮢��� �᫠
     for(int elem : userArray) {
         elem = rand();
     }
    */
    arrayRandomFilling(userArray, length);
    printArray(userArray, length);

    std::cout << "\n";
    sortBubble(userArray, length);
/*
    // ����஢�� ���ᨢ� ��⮤�� ?����쪠?
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - 1; j++){
            if(userArray[j] > userArray[j+1]){

                //int newVal = userArray[j];

                // ���塞 ���⠬� ��� ��砫쭮� �������襥 �᫮ � ⥬, ���஥ �� �����㦨��
                std::swap(userArray[j], userArray[j+1]);
                // userArray[j] = userArray[j+1];
                // userArray[j+1] = newVal;
            }
        }
    }
*/
    printArray(userArray, length);
    /*
     std::cout << "\n";
     for(int elem : userArray){
         std::cout <<  elem << ' ';
     }
*/
    std::cout << "\n\n";

    return 0;
}
