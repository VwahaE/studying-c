int fibonacci2(int number)
{
    int x = 0, y = 1, z;
    if( number == 0)
        return x;// ������ ��砩 (�᫮��� �����襭��)
    if (number == 1)
        return y;// ������ ��砩 (�᫮��� �����襭��)

    for(int i = 2; i <= number; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return y;
}

int fibonacci1(int number) {
    if (number == 0)
        return 0; // ������ ��砩 (�᫮��� �����襭��)
    if (number == 1)
        return 1; // ������ ��砩 (�᫮��� �����襭��)
    return fibonacci1(number-1) + fibonacci1(number-2);
}
