#include<stdio.h>
int main()
{
    int a,b,sum ;
    int *p=&a,*q;
    q=&b;
    printf("enter two no\n");
    scanf("%d%d",p,q);
    sum=*p+*q;
    printf("sum of %d and %d is %d\n",*p,*q,sum);
}