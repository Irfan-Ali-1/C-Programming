#include<stdio.h>

int main()
{
    
    int arr[100];

    int n,i;

    //Ask for number of elements

    printf("enter number of elements:");
    scanf("%d",&n);

    // Take array elements from user
    printf("enter %d element:\n",n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // display array elements
    printf("array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}