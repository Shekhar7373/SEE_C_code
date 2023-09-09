/* C program to add two complex numbers and multiply */
#include<stdio.h>
struct Complex
{
    float real,img;
};

void main()
{
    struct Complex complex_add(struct Complex,struct Complex);
    struct Complex complex_mult(struct Complex,struct Complex);
    struct Complex c1,c2,c3,c4;
    printf("Enter 1st complex number (real part and img part): ");
    scanf("%f%f", &c1.real,&c1.img);
    printf("Enter 2nd complex number (real & img part) : ");
    scanf("%f%f", &c2.real,&c2.img);
    c3 = complex_add(c1,c2);
    c4 = complex_mult(c1,c2);
    printf("Addition of two complex numbers : %f + i%f\n",c3.real,c3.img );
    printf("Multiply of two complex numbers : %f + i%f\n",c4.real,c4.img );
}
struct Complex complex_add(struct Complex c1,struct Complex c2)
{
    struct Complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}
struct Complex complex_mult(struct Complex c1, struct Complex c2)
{
    struct Complex c3;
    c3.real = c1.real*c2.real - c1.img*c1.img;
    c3.img = c1.real*c2.real + c1.img*c2.img;
    return c3;
}