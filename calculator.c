#include <stdio.h>
#include <ctype.h>

int mode(char x[100], int a)
{

    if (x == "Addition")
    {
        int s, d, r;
        if (a == 2)
        {
            printf("Enter the two numbers:\n");
            scanf("%d\n%d", &s, &d);
            printf("The sum of two numbers is %d", s + d);
        }
        else
        {
            printf("The total number you want to compare are:\n");
            scanf("%d", &r);
            // I COULDN'T THINK ABOUT HOW TO INCULCATE BODMAS IN MY CODE.
        }
    }
}

// HELLO

int main()
{
    char input1[100];
    printf("Enter which calculator function you want to use?\nAddition\nSubtraction\nMultiplication\nDivision\nModulus\n");
    scanf("%s", &input1);
    for (int i = 0; input1[i]; i++)
    {
        input1[i] = tolower(input1[i]);
    }

    int a;

    printf("Enter the number of numbers you want to use in this \n");
    scanf("%d", &a);

    mode(input1, a);

    return 0;
}