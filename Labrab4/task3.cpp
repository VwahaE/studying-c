/* ������砥� ������⥪� ��� �����/�뢮�� */
#include <iostream>

/* �㭪�� ᮧ����� ������� ��������� ������ */
int funcCreateMatrix(int array[][5], int elem, int valN, int valM){

    //����᪠�� 横� for ��� ᮧ����� ��ப ������� ���������
    for(int i = 0; i < valN; i++){

        //����᪠�� 横� for ��� ᮧ����� �⮫�殢 ������� ���������
        for(int j = 0; j < valM; j++){

            // �᫮��� ��� ᮧ����� ������� ������﫨
            if(i == j){

                // ��ᢠ����� ��६����� 1
                elem=1;

                // ��ᢠ����� ������ �����
                array[i][j] = elem;
            }
        }
    }
    return *array[valN];
}

void printDiagMatrix(int array[][5], int valN, int valM){
    std::cout <<"\n\t�뢮� �����筮� ������:\n" ;

    //横� for �뢮�� ��ப ������
    for(int i = 0; i < valN; i++){
        std::cout << "\t";

        //横� for �뢮�� �⮫�殢 ������
        for(int j = 0; j < valM; j++){

            // �뢮� ���祭�� ����� ������
            std::cout <<array[i][j] << ' ';
        }
        std::cout << "\n";
    }
}

