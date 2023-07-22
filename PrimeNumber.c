/*************************************************************
***********Program to test number is Prime or not*************
**************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("Enter user input");
    scanf("%d", &a);

    for(int i = 2; i <=9; i++) {
        if(a%i == 0 && (a!=2)) {
            printf("Non prime number\n");
        }
        else {
        
            printf("Prime number\n");
            break;
        }
    }

    return 0;
}