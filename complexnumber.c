#include<stdio.h>
#include<math.h>
void complexnumber()
{
    float a1,b1,a2,b2,a,b;
    int ch;
    char again='Y';
    while(again=='Y'){
    printf("\tPlease select Operation you want to perform for Complex number: \n\t\t1.Arithmetic Operation \n\t\t2.Conversion between Polar and Cartesian Form: \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\nReal part of number - a1 , a2.");
        printf("\nImaginary part of number - b1 , b2.");
                printf("\nPlease enter the values of a1 and b1: \n");
                printf("a1 = ");
                scanf("%f",&a1);
                printf("b1 = ");
                scanf("%f",&b1);
                printf("Please enter the values of a2 and b2: \n");
                printf("a2 = ");
                scanf("%f",&a2);
                printf("b2 = ");
                scanf("%f",&b2);
                printf("Please enter the choice 1.Addition 2.Subtraction 3.Multiplication 4.Division: \n");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1:printf("Their addition is %f + i(%f)",a1+a2,b1+b2);
                            break;
                    case 2:printf("their subtraction is %f + i(%f)",a1-a2,b1-b2);
                            break;
                    case 3:printf("Their multiplication is %f + i(%f)",(a1*a2)-(b1*b2),(a1*b2)+(b1*a2));
                            break;
                    case 4:printf("Their division is %f + i(%f)",(a1*a2+b1*b2)/(a2*a2+b2*b2),(a2*b1-a1*b2)/(a2*a2+b2*b2));
                            break;
                    default:printf("Enter valid Code.");
                }
                break;
        case 2: printf("For Ordered pair (a,b)");
            printf("Please enter the value of a: ");
                scanf(" %f",&a);
                printf("Enter the value of b: ");
                scanf(" %f",&b);
                printf("Select the conversion 1.cartesian to polar 2.polar to cartesian: ");
                scanf(" %d",&ch);
                switch(ch)
                {
                    case 1:printf("The coordinates in polar form is %f and angle is %f",sqrt(a*a+b*b),atan(b/a));
                            break;
                    case 2:printf("The coordinates in rectangle form is %f+i(%f)",a*cos(b),a*sin(b));
                            break;
                    default:printf("Enter valid Code.");
                }
                break;
        default:printf("you have entered a wrong choice");
        break;
    }
        printf("\n\nTo Calculate again in same mode Press Y\nTo go to Main Menu Press M\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
}
