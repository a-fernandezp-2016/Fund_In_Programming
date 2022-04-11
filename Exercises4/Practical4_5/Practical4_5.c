/* 4.5. Program about making a program that calculates the solutions to a quadratic equation:
• Program prompts for parameters to the equation ax2 + bx + c = 0
• Program prints out the number of solutions
* Rational or irrational
• And then prints out the solutions (x1, x2). */
#include <stdio.h>
#include <math.h>

void main()
{
    //To declare the parameters a, b and c of the quadratic equation: ax2 + bx + c = 0.
    float a, b, c;
    //To declare the two solutions of the quadratic equation.
    float x1, x2;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ RESOLVE THE QUADRATIC EQUATION $$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce a number for the parameter a: ");
    scanf("%f", &a);
    printf("Please, introduce a number for the parameter b: ");
    scanf("%f", &b);
    printf("Please, introduce a number for the parameter c: ");
    scanf("%f", &c);

    //Doing the conditions and print the results.
    x1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
    x2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a;

    if(a == 0 || b == 0 || c == 0)
    {
        printf("\n\nIn this case, it is not a quadratic equation.\n\n");
    }
    else
    {
        if(pow(b,2)-4*a*c < 0)
        {
            printf("\n\nThe solution of the quadratic equation is going to be as a complex number => (realPart) + i(imaginayPart).\n\n");
        }
        else
        {
            if(x1 == x2)
            {
                printf("\n\nThe solution of the quadratic equation is going to be unique => 1 solution => x1 = x2 = %g\n\n", x1);
            }
            else
            {
                printf("\n\nThe solution of the quadratic equation is going to be multiple => 2 solutions => x1 = %g and x2 = %g\n\n", x1, x2);
            }
        }
    }
}
