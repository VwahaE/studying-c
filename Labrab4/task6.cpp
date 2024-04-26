// �㭪�� ���᫥��� 䠪�ਠ�� ���⨢��
long double funcIterFact(int valF){
    // �஢�ઠ
    // �᫨ ���짮��⥫� ��� ����⥫쭮� �᫮ �뢥��� 0
    if(valF < 0) return 0;
    // �᫨ ���짮��⥫� ��� 0 䠪�ਠ� 1
    if(valF == 0) return 1;

    long double fact = 1;

    // � 横�� ���⨢�� ��⠥� 䠪�ਠ� ��������� �᫠
    for(int i = 1; i <= valF; i++){
        fact *=i;
    }
    return fact;
}

// �㭪�� ���᫥��� 䠪�ਠ�� ४��ᨢ��
long double funcRecurFact(int valF){
    // �஢�ઠ
    // �᫨ ���짮��⥫� ��� ����⥫쭮� �᫮ �뢥��� 0
    if(valF < 0) return 0;
    // �᫨ ���짮��⥫� ��� 0 䠪�ਠ� 1
    if(valF == 0) return 1;
    // � �� ��㣮� ��砥 ४��ᨢ�� ��⠥� 䠪�ਠ� ��������� �᫠
    else return valF * funcRecurFact(valF - 1);
}
