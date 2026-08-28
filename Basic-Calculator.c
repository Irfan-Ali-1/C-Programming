#include <stdio.h>
int main(){
int n1,n2;
char opd;

printf("Enter the value first- ");
scanf("%d",&n1);

printf("Enter the operator(+,-,*,/): ");
scanf("%s",&opd);

printf("Enter the value second- ");
scanf("%d",&n2);

if(opd =='+'){
    printf("Addition is- %d",n1+n2);
}
else if (opd =='-'){
    printf("Subtraction is- %d",n1-n2);
}
else if (opd=='*') {
    printf("Multiplication is- %d",n1*n2);
}
else if(opd=='/') {
    printf("Division is- %d",n1/n2);
}
else 
    printf("Invalid !");
return 0;

}