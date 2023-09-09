#include<stdio.h>
void maxmin(int *,int , int *, int *);
void read_array(int *,int );
void main()
{
    int size;
    printf("Enter number of students : ");
    scanf("%d", &size);
    int arr[size],max,min;
    read_array(arr,size);
    maxmin(arr,size,&max,&min);
    printf("Highest marks scored = %d\nLowest marks scored = %d\n", max,min);
}
void read_array(int *p,int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("Enter student [%d] : ",i+1);
        scanf("%d", (p+i));
    }
}
void maxmin(int *p,int size,int *max, int *min)
{
    int i,j;
    *max = *p;
    *min = *p;
    for ( i = 1; i < size; i++)
    {
        if (*max < *(p+i))
        {
            *max = *(p+i);
        }
        if (*(min) > *(p+i))
        {
            *min = *(p+i);
        }        
    }    
}