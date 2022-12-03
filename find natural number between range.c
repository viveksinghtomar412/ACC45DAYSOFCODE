#include<stdio.h>
int sumofprintnatural(int,int);
int main()
{
    int x,y,s=0;
    printf("enter the range\n");
    scanf("%d%d",&x,&y);
    s=sumofprintnatural(x,y);
    printf("sum of natural no within range %d to %d is %d " ,x,y,s);
    return 0;
}
    int sumofprintnatural(int a ,int b)

    {
        if (a>b)
        return 0;
        return a+sumofprintnatural(a+1,b);
    }