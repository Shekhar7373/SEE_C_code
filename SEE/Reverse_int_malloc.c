#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *list;
    int size;

    // Ask the user to specify the size of the list
    printf("Enter the size of the list: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the list
    list = (int *)calloc(size, sizeof(int));

    // Check if memory allocation was successful
    if (list == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Read integers into the list
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }

    // Reverse the list in place
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        // Swap elements at start and end
        int temp = list[start];
        list[start] = list[end];
        list[end] = temp;

        // Move the start and end pointers
        start++;
        end--;
    }

    // Print the reversed list
    printf("Reversed List:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(list);

    return 0;
}
