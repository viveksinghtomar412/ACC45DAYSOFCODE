#include <stdio.h>
int main() {
    int age;
    printf("enter two no");
    scanf("%d",&age);
    (age>18)?printf("18<vote"):printf("18>not vote");
    printf("%d",age);
    return 0;
}