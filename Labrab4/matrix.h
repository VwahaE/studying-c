// ��砫� header guard.
#ifndef MATRIX_H
#define MATRIX_H

// ���⥭� 䠩�� matrix.h, ��� ��室���� �� �।���⥫�� �������
// ���⨯� �㭪権

// ���⨯ �㭪樨 ࠧ����⥫� �������
void funcDesigner(bool valFl = 1);

// ���⨯ �㭪樨 �८�ࠧ������� ⨯�� C-style cast
void printCstyle(int x, float y, double z, unsigned short k);

// ���⨯ �㭪樨 �८�ࠧ������� ⨯�� static_cast
void printStaticCast(int x, float y, double z, unsigned short k);

// ���⨯ �㭪樨 ��� ���������� ������୮�� ���ᨢ� �����⬮� ����� ���ᥭ�
void funcVortexMersenne(int arrayM[10], int valN);

// ���⨯ �㭪樨 ������� ���������
int funcCreateMatrix(int array[][5], int elem, int valN, int valM);

// ���⨯ �㭪樨 �뢮�� � ���᮫�
void printDiagMatrix(int array[][5], int valN, int valM);

// ���⨯ �㭪樨 ᮧ����� � ���������� ������ ��砩�묨 �᫠��
int funcRandomValMatrix(int array[][8], int valN, int valM);

// ���⨯ �㭪樨 �뢮�� � ���᮫�
void printMatrix(int array[][8], int valN, int valM);

// ���⨯ �㭪樨 �뢮�� �㬬� ����⮢ ������ ��� ����. ����.
int funcSumAboveDiagonal(int array[][8], int valN, int valM);

// ���⨯ �㭪樨 �뢮�� ������᪮�� ��䠢�� �� a �� z
void funcLowercase();

// ���⨯ �㭪樨 �뢮�� 䠪�ਠ�� �᫠ � ������� ���権
long double funcIterFact(int valF);

// ���⨯ �㭪樨 �뢮�� 䠪�ਠ�� �᫠ � ������� ४��ᨨ
long double funcRecurFact(int valF);

// ���⨯ �㭪樨 �뢮�� �ᥫ �������� - ४��ᨢ��
int fibonacci1(int number);

// ���⨯ �㭪樨 �뢮�� �ᥫ �������� - ���⨢��
int fibonacci2(int number);

// ���⨯ �㭪樨 �뢮�� ��᫥����⥫쭮�� ������ ��ࠬ���
void printPyramid(int n);

// ���⨯ �㭪樨 �뢮�� ��᫥����⥫쭮�� ������ ��㣮�쭨�
void printTriangle(int n);

// ����� header guard
#endif // MATRIX_H
