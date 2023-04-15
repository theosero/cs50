#include <stdio.h>

int main(void)
{
    int arr[] = {6, 3, 4, 2, 7, 1};
    int len = 6;

    //print unsorted array of integers
        //Print Existing array to std
    printf("The existing array is: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");


    //Find the least int in the usorted array, and swap with current position
    for (int i = 0; i < len - 1; i++)
    {
        int min = arr[i];
        int pos = i;

        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = min;
        arr[pos] = temp;
    }
    
    //Print sorted arrray
    printf("The sorted srray is: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}