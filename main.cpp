double my_pow(double inNum, unsigned int PowNum)
{
    for (int i = 0; i < PowNum; i++)
    {
        inNum *= inNum;
    }

    return inNum;
}