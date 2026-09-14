#include<stdio.h>

void counter()
{
    static int a = 10;

    a = a + 20;

    printf("a = %d\n",a);
}

int main()


{
    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}