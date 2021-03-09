//cpp
int factorial(int num)
{
    auto sum = 1;

    for(int i = 1; i <= num; i++)
    {
        sum = sum * (i);
    }

    return sum;
}