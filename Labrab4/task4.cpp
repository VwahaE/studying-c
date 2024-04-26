#include <iostream>
#include <random> // ��� std::random_device � std::mt19937
#include <ctime>
#include <iomanip>
#include <cstdlib> // ��� �㭪権 rand() � srand()

// �㭪�� ᮧ����� � ���������� ������ ��砩�묨 �᫠��
int funcRandomValMatrix(int array[][8], int valN, int valM){

    srand(time(0));

    int min(-15);
    int max(15);

    for (int i = 0; i < valN; i++){
        for (int j = 0; j < valM; j++){
            array[i][j] = min + rand() % (max - min + 1);
        }
    }
    return *array[valN];
}

// �㭪�� �뢮�� � ���᮫� � �ᯮ�짮������ �ଠ�஢������ �뢮��
void printMatrix(int array[][8], int valN, int valM){
    for (int i = 0; i < valN; i++){
        std::cout <<"\t";
        for (int j = 0; j < valM; j++){
            std::cout << std::setw(3)<< std::right << array[i][j] << std::setw(1) << ' ';
        }
        std::cout << "\n";
    }
}

// �㭪�� �뢮�� �㬬� ����⮢ ������ ��� ����. ����.
int funcSumAboveDiagonal(int array[][8], int valN, int valM){

    int sumAboveDiagonal(0);
    for (int i = 0; i < valN; i++){
        for (int j = 0; j < valM; j++){

            /* �᫮��� �⡮� ���祭�� ����⮢
             * i > j - ���, �� ��� ������� ���������;
             * i == j - ���, �� �� ������� ���������;
             * i < j - ���, �� ���� ������� ���������;
            */
            if (i > j)
                // �������� � ��ᢠ�������
                sumAboveDiagonal += array[i][j];
        }
    }
    // �뮤 ���祭��
    return sumAboveDiagonal;
}
