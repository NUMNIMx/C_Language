#include<stdio.h>
int main ()
{   int a,b;
    printf("Enter integer 1: ") ;
    scanf("%d",&a);
    printf("Enter integer 2: ") ;
    scanf("%d",&b);
    if(a>b)
            printf("%d is greater than %d\n",a,b);
    else if (a==b)
            printf("%d is equal to %d\n",a,b);
    else
            printf("%d is less than %d\n",a,b);
}
