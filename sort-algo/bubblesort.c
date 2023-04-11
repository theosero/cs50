#include <stdio.h>

int main(void)
{
    //Array of ints to be sorted in ascending order
    int array[] = {9, 6, 3, 1, 2, 5, 8, 4, 7};
    int arraylen = 9;

    int counter = -1;

    //Loop to sort the array
    while (counter != 0)
    {
        counter = 0;

        for (int i = 0; i < arraylen - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                counter++;
            }
        }
    }

    //Print the sorted array
    printf("Sorted array is: ");

    for (int i = 0; i < arraylen; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
