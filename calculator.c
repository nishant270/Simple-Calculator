#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int try(char x, int a)
{

    return 0;
}    

int main()
{
    // abc:
    int a,c;char b,t;
    printf("This calculator is only for 2 numbers and one operator\n");
    sleep(2);
    printf("Give the equation you want to calculate:\n");
    scanf("%d%c%d", &a, &b, &c);
    printf("The result is .........\n");
    sleep(2);
    switch (b)
    {
    case '+':
        printf("%d", a+c);
        break;

    case '-':
        printf("%d", a-c);
        break;

    case '*':
        printf("%d", a*c);
        break;

    case '/':
        printf("%d", a/c);
        break;

    default:
        printf("Oops!, The arithmetic operator you want to use isn't availabe right now");
        break;
    }

    // printf("Do you want to again use the calculator\nY for Yes\n N for No\n");
    // scanf("%c", &t);
    // int tolower(int t);
    // if (t=='y')
    // {
    //     goto abc;
    // }

    

    return 0;
}