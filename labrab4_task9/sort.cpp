/* ������砥� ������⥪� ��� �����/�뢮�� */
#include <iostream>

// �㭪�� ���஢�� ���ᨢ� ��⮤ "����쪠"
void sortBubble(int array[], int length){
    // ����஢�� ���ᨢ� ��⮤�� ?����쪠?
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - 1; j++){
            if(array[j] > array[j+1]){

                //int newVal = userArray[j];

                // ���塞 ���⠬� ��� ��砫쭮� �������襥 �᫮ � ⥬, ���஥ �� �����㦨��
                std::swap(array[j], array[j+1]);
                // userArray[j] = userArray[j+1];
                // userArray[j+1] = newVal;
            }
        }
    }
}
