#include<stdio.h>
int main() {
    int a,b, pow=1;

    printf("enter a and b");
    scanf("%d%d",&a,&b);
    while(b>0)
    {
        pow*=a;
        b--;
    }
    printf("a to the power of b is %d",pow);
    return 0;
}

