#include<stdio.h>
int main() {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='E' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch== 'E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("char is vowel");
    }
    else
    {
        printf("char is notvowel");
    }
    return 0;
}