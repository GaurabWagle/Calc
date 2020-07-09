//  It is a program to create a simple calculator
// BY Gxaurab
#include <stdio.h>
#include <conio.h>

int main() {
    char operator;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operator)
    {
        case '+':
            printf("%lf + %lf = %lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%lf - %lf = %lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%lf * %lf = %lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%lf / %lf = %lf",n1, n2, n1/n2);
            break;

        default:
            printf("What tha Fwack man It is error!!");
    }

    return 0;
}
