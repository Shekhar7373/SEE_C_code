#include<stdio.h>
int fib_n(int);
main()
{
    int n;
    printf("Enter nth term to find fibonocci term : ");
    scanf("%d", &n);
    printf("%d term = %d\n", n,fib_n(n+1));
}
int fib_n(int n)
{
    if (n <= 0)
    {
        return -1;
    }
    if (n == 1 || n==2)
    {
        return n-1;
    }
    return fib_n(n-1)+fib_n(n-2);
}