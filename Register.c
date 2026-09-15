#include<stdio.h>

int main()
{
    register int a = 1;

    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",a);
         a++;
    }
     return 0;
}