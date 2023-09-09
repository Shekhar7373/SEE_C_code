#include<stdio.h>
#include<math.h>
#define PI 3.14159
float y(float);
// float my_cos(float);
void table(float(*f)(float),float,float,float);
int main()
{
    printf("Table of y(x) = 2*x*x - x+1\n\n");
    table(y,0.0,2.0,0.5);
    printf("\nTable of cos(x)\n\n");
    table(cos,0.0,PI,0.5);
    return 0;
}
void table(float (*f)(float), float min, float max, float step)
{
    float i, value;
    for ( i = 0; i <= max; i+= step)
    {
        value = (*f)(i);
        printf("%5.2f  %10.4F\n", i,value);
    }
    
}
float y(float x)
{
    return (2*x*x-x+1);
}