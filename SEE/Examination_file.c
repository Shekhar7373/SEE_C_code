/*
write a c program to open a file named EXAMINATION and store in it the following data. :
            STUDENT NAME            IA1     IA2     IA3     CTA
            AAA                     18      17      8       4
            BBB                     12      19      10      8
            CCC                     20      15      9       9
Extend the program to read the data from the file and display the examination table with the total marks of each student.
*/
#include<stdio.h>
struct students
{
    char name[20];
    int IA1,IA2,IA3,CTA,CIE;
};
int main()
{
    int i,size,small;
    FILE *fp;
    struct students data[20];
    fp = fopen("EXAMINATION.txt","a");
    if (fp == NULL)
    {
        printf("Failed to create file!\n");
        return 0;
    }
    
    printf("Enter number of students : ");
    scanf("%d", &size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter name of student %d :", i+1);
        scanf("%s", data[i].name);
        printf("Enter marks of IA1 :");
        scanf("%d", &data[i].IA1);
        printf("Enter marks of IA1 :");
        scanf("%d", &data[i].IA2);
        printf("Enter marks of IA1 :");
        scanf("%d", &data[i].IA3);
        printf("Enter CTA marks : ");
        scanf("%d", &data[i].CTA);

        if((data[i].IA1 < data[i].IA2) && (data[i].IA1 < data[i].IA3))
        small = data[i].IA1;
        else if ((data[i].IA2 < data[i].IA1) && (data[i].IA2 < data[i].IA3))
        small = data[i].IA2;
        else
        small = data[i].IA3;
        data[i].CIE = data[i].IA1 + data[i].IA2  + data[i].IA3 + data[i].CTA - small;
        fprintf(fp,"%s\t%d\t%d\t%d\t%d\t%d\n",data[i].name,data[i].IA1,data[i].IA2,data[i].IA3,data[i].CTA,data[i].CIE);
        printf("\n");
    }
    fclose(fp);
    size = 0;
    char c;
    fp = fopen("EXAMINATION.txt", "r");
    while ((c = getc(fp)) != EOF)
    {
        if( c == '\n')
        size++;
    }
    fclose(fp);
    
    fp = fopen("EXAMINATION.txt","r");
    printf("\n\nName\tIA1\tIA2\tIA3\tCTA\tCIE\n");
    for ( i = 0; i < size ; i++)
    {
        fscanf(fp,"%s%d%d%d%d%d", data[i].name, &data[i].IA1, &data[i].IA2, &data[i].IA3, &data[i].CTA, &data[i].CIE);
        printf("%-s\t%-d\t%-d\t%-d\t%-d\t%-d\n", data[i].name, data[i].IA1, data[i].IA2, data[i].IA3, data[i].CTA, data[i].CIE);
    }
    fclose(fp);

    return 0;
}