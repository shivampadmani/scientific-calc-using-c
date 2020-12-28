#include<stdio.h>
#include<math.h>
int  simpleArithmetic()
{
    int operator;
    float a,b;
    char again='Y';
    while(again == 'Y'){
            printf("\nEnter the code for the Operation you want to perform.\n");
    printf("\t1.Addition of two numbers\n");
    printf("\t2.Subtraction of two numbers\n");
    printf("\t3.Multiplication of two numbers\n");
    printf("\t4.Division of two numbers\n");
    printf("\t5.Remainder of division of two numbers %% \n");

    scanf(" %d", &operator);
    printf("Enter two values: ");
    scanf("%f %f", &a, &b);

    switch (operator)
    {
    case 1:
            printf("%f + %f = %f", a, b, a + b);
            break;
    case 2:
            printf("%f - %f = %f", a, b, a - b);
            break;
    case 3:
            printf("%f * %f = %f", a, b, a * b);
            break;
    case 4:
            printf("%f / %f = %f", a, b, a / b);
            break;
    case 5:
            printf("%d %% %d = %d", (int)a,(int)b,(int) a % (int)b);
            break;
    default:printf("Enter valid code");
    }
     printf("\n\nTo Calculate again in this Mode Press Y\nTo go to Main Menu Press M\n");
    scanf(" %c",&again);
    again=toupper(again);
    }
}

