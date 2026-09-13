#include<stdio.h>
int main()
{

    int n,i;
    int a[5];
    
    printf("enter the number:");
    scanf("%d",&n);

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
       printf("output:");

    for(i=0;i<=n;i++)
    {
     printf("%d",a[i]);
    }

  return 0;
}
