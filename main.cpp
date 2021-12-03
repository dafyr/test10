double my_pow(double inNum, int PowNum)
{
    double result = 1;

    while (PowNum)
    {
        if (PowNum % 2 == 0)
        {
            PowNum /= 2;
            inNum *= inNum;
        }
        else
        {
            PowNum--;
            result *= inNum;
        }
    }

    return result;
}