#include<stdio.h>
int main() {
    char ch;
    printf("enter character: ");
    scanf("%c",ch);
    if((ch>='a' && ch<='z') || (ch>='A'&&ch<='Z'))
    {
        printf("",ch);
    }
    else
    {
        printf("other char",ch);
    }
    return 0;
}