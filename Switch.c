#include<stdio.h>

int main()
{
    int age;
    printf("enter your age:");
    scanf("%d", &age);

    switch (age)
    {
        case 16:
          printf("the age is 16\n");
         
        
          case 18:
          printf("the age is 18\n");
         
        
          case 20:
          printf("the age is 20\n");
         
    
       
       default:
          printf(" age is not 16, 18, or 20\n");
          break;
    }


    return 0;

}