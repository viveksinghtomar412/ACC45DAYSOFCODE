#include<sdtdio.h>
void printnatural(int,int);
int main()
{
    int x,y;
    printf("enter the range\n");
    scanf("%d%d",&x,&y);
    printnatural(x,y);
    retrun 0;

}

void printnatural(int a,int b)
{
    if(a>b)
    retrun a;
    printf("%d\n",a);
    printnatural(a+1,b);
}