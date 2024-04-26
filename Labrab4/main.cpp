/*
* ������ୠ� ࠡ�� No4
* ��᫥������� �㭪権 �++ � IDE
* (��⥣�஢����� �।� ࠧࠡ�⪨) Qt Creator
*
*
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
#include "matrix.h"

int main(){
    /******************************* ������� 1 ***************************************/
    std::cout << "\t������� 1\n";
    int x(5);
    float y(2.1);
    double z(1.002);
    unsigned short k(65);
    std::cout << "\n";
    printCstyle(x, y, z, k);
    std::cout << "\n";
    printStaticCast(x, y, z, k);
    funcDesigner();
    /******************************* ������� 2 ***************************************/
    std::cout << "\t������� 2\n";
    const int valueN = 10;
    int arrayMers[valueN];

    funcVortexMersenne(arrayMers, valueN);

    std::cout << "\n";
    funcDesigner();
    /******************************* ������� 3 ***************************************/
    std::cout << "\t������� 3\n";
    // ��६����� ���祭�� ����⮢ ���ᨢ� ⨯� int
    int elem(0);

    // ������  ������
    const int N = 5;
    const int M = 5;

    //���塞 ��㬥�� ���ᨢ ࠧ��஬ 5�5
    // ���樠�����㥬 �� ������ ���ᨢ� ���祭��� 0
    int unitMatrix[N][M]{elem};

    // �맮� �㭪樨 ᮧ����� ������ ���������
    funcCreateMatrix(unitMatrix, elem, N, M);

    // �맮� �㭪樨 �뢮�� � ���᮫�
    printDiagMatrix(unitMatrix, N, M);
    std::cout <<"\n";
    funcDesigner();
    /******************************* ������� 4 ***************************************/
    std::cout << "\t������� 4\n";
    std::cout <<"\n";
    //std::cout.fill(' ');
    funcDesigner(0);
    const int newN = 8;
    const int newM = 8;
    int newMatrix[newN][newM];

    funcRandomValMatrix(newMatrix, newN, newM);

    printMatrix(newMatrix, newN, newM);

    std::cout << "\n\tC㬬� ����⮢ ������, ������ ��� ������� ���������: "
              << funcSumAboveDiagonal(newMatrix, newN, newM) <<"\n";
    std::cout <<"\n";
    funcDesigner();
    /******************************* ������� 5 ***************************************/

    std::cout << "\t������� 5\n";
    funcLowercase();
    std::cout <<"\n";
    funcDesigner();
    /******************************* ������� 6 ***************************************/

    std::cout << "\t������� 6\n";
    std::cout << "\n\t������ 楫�� �᫮ ��� ��宦����� 䠪�ਠ��: ";
    int valueFact;
    std::cin >> valueFact;
    std::cout << "\t���⨢��� ���᫥���: ";
    std::cout << "����ਠ� ��� �᫠ " << valueFact << " = " << funcIterFact(valueFact) << "\n";
    std::cout << "\t�����ᨢ��� ���᫥���: ";
    std::cout << "����ਠ� ��� �᫠ " << valueFact << " = " << funcRecurFact(valueFact) << "\n";
    std::cout <<"\n";
    funcDesigner();
    /******************************* ������� 7 ***************************************/
    std::cout << "\t������� 7\n";

    // �ਬ�� �� ���樨 � ������
    std::cout << "\t�뢮� �ਬ�� ४��ᨨ: \t";
    for (int count=0; count < 13; ++count)
        std::cout << fibonacci1(count) << " ";

    std::cout <<"\n";
    std::cout << "\t�뢮� �ਬ�� ���権: \t";
    for (int count=0; count < 13; ++count)
        std::cout << fibonacci2(count) << " ";

    std::cout <<"\n";
    funcDesigner();
    /******************************* ������� 8 ***************************************/
    std::cout << "\t������� 8\n";
    std::cout <<"\n";
    int numValue(10);
    printPyramid(numValue);
    std::cout <<"\n";
    printTriangle(numValue);
    funcDesigner();
    std::cout <<"\n\n";

    return 0;
}
