/*
program(3) write a program to calculate the area of a circle
Solution(1) Predifined Values
*/
#include <stdio.h>
int main()
{
    float radius=1.1;
    float area;

    area=(3.14*radius*radius);
    printf("\n Area of Circle=%f",area);

    return 0;
}

//alternative program using math library function
#include <stdio.h>
#include <math.h>
int main()
{
    float radius=1.1;
    float area;

    area=(3.14*(pow(radius, 2)));
    printf("\n Area of Circle=%f",area);

    return 0;
}
