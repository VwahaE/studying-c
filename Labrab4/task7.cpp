int fibonacci2(int number)
{
    int x = 0, y = 1, z;
    if( number == 0)
        return x;// базовый случай (условие завершения)
    if (number == 1)
        return y;// базовый случай (условие завершения)

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
        return 0; // базовый случай (условие завершения)
    if (number == 1)
        return 1; // базовый случай (условие завершения)
    return fibonacci1(number-1) + fibonacci1(number-2);
}
