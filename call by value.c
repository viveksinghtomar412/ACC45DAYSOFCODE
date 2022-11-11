#include  <studio.h>
#include<conio.h>
int square(int );
void main () //main function
{
    int a,b
    clrscr();
    printf("enter any value :\n")
    scanf ("%d", &a);
    b=square(a);  //calling by value 
    printf ("square of %d =%d ",a,b);
    getch();

}