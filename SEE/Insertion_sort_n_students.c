#include<stdio.h>
void main()
{
    int size,arr[20];
    void Readarray(int *,int);
    void insertionsort(int *,int);
    void displayresult(int *,int);
    printf("Enter the number of elements to store : ");
    scanf("%d", &size);
    Readarray(arr,size);
    insertionsort(arr,size);
    displayresult(arr,size);
}
void Readarray(int *p, int size)
{
    int i;
    printf("Enter %d elements :\n", size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",(p+i));
    }
}
void insertionsort(int *p,int size)
{
    int i,j,temp;
    for ( i = 1; i < size; i++)
    {
        j = i-1;
        temp = *(p+i);
        while ((j>=0) && (*(p+j) > temp))
        {
            *(p+j+1) = *(p+j);
            j--;
        }
        *(p+j+1) = temp;
    }
    
}
void displayresult(int *p, int size)
{
    int i;
    printf("Sorted list\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t", *(p+i));
    }
    
}