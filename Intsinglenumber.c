// Get a number from user & print it on console
#include<stdio.h>
void main ()
{
    int number = getANumberFromUser ();
    printf("Number is :%d", number);
}
int getANumberFromUser()
{
    int i;
    printf("Enter the user number :");
    scanf("%d",&i);
    return i;
}
