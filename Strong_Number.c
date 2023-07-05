#include <stdio.h>
void main()
{
    int i, j, dv, fac = 1, sum = 0, num, temp;
    printf("\n\nPROGRAM TO FIND STRONG NUMBER::\n\n");
    printf("Enter Your Number::");
    scanf("%d", &num);
    temp = num;
    while (num)
    {
        dv = num % 10;
        for (j = dv; j > 0; j--)
        {
            fac = fac * j;
        }
        sum = sum + fac;
        num = num / 10;
        fac = 1;
    }
    if (sum == temp)
    {
        printf("\nThe number  is a strong number::\n");
    }
    else
    {
        printf("\nThe number is not a strong number::\n\n");
    }
}
