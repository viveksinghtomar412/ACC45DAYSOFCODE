#include<stdio.h>
int power (int,int);
int main ()
{
    int x,y,f=o;
    printf("enter two value\n");
    scanf("%d%d",&x,&y);
    f=power (x,y);
    printf("power of %d to %d is %d",x,y,f);
    return 0;
}int power (int a,int b)
{
    if(b==1)
    {
        return a;
    }
    else
    {
        return a*power(a,b,-1);

    }
}