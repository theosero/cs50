#include <stdio.h>

int main (void)
{
    //Array to search
    int arr[10] = {0, 11, 9, 4, 2, 7, 3, 5, 8, 6};
    int len = 10;       //array length

    //Int to search in array above
    int n;
    int conunt = 0;

    //Print Existing array to std
    printf("The existing array is: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    
    printf("Enter number to search for: ");     //integer to search in array
    scanf("%d", &n);

    //coumter variable to keep track of search
    int counter = 0;

    //Loop to perform linear search on the array
    for (int i = 0; i < len; i++)
    {
        if (n == arr[i])
        {
            printf("\n%d has been fount at index %i\n", n, i + 1);
            counter++;
            
            break;      //Exit loop if int is found
        }
    }

    //Print error if counter is zero
    if (counter == 0)
    {
        printf("\nNumber %d not found in the array\n", n);
    }

    return 0;
}