#include<stdio.h>

int main()
{

      int a = 10;

    {
         auto int a = 20;
         printf("inside block:%d\n",a);
        
       {
           auto int a = 30;
           printf("inside inner block:%d\n",a);
        }
    }
    
    printf("outside block:%d\n",a);

    return 0;
}
 