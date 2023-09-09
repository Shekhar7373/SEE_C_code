#include <stdio.h>
#include <string.h>


struct Census
{
    char city[20];
    long int population;
    float literacy_level;
};

int main()
{
    int size, i, j;
    struct Census data[5], temp, *p = data;
    printf("\nEnter Number of city information to store : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("\n\nEnter the name of city : ");
        scanf("%s", data[i].city);
        printf("Enter population of %s city : ", data[i].city);
        scanf("%ld", &data[i].population);
        printf("Enter Literacy level : ");
        scanf("%f", &data[i].literacy_level);
    }


    printf("\n\n-----------------------------------------------------------------\n\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)  
        {
            if (strcmp(data[j].city, data[j + 1].city) > 0)
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    
    printf("\nDETAILS SORTED BASED ON CITY NAME \n\n");

    for (i = 0; i < size; i++)
    {
        printf("\n\nCity name: %s", data[i].city);
        printf("\nPopulation: %ld", data[i].population);
        printf("\nLiteracy level: %.4f", data[i].literacy_level);
    }
    printf("\n\n------------------------------------------------------------------\n\n");

    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size - i- 1; j++)
        {
            if (((p+j)->literacy_level) > ((p+j+1)->literacy_level))     /* To sort based on population change literacy_level variable to population variable */
            {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
            
        }
        
    }
    printf("DETAILS SORTED BASED ON LITERACY LEVEL\n\n");
    for (i = 0; i < size; i++)
    {
        printf("\n\nCity name: %s", data[i].city);
        printf("\nPopulation: %ld", data[i].population);
        printf("\nLiteracy level: %.4f", data[i].literacy_level);
    }
    printf("\n\n------------------------------------------------------------------\n\n");
    return 0;
}