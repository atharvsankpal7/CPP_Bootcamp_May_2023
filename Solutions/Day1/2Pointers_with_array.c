#include <stdio.h>
/*

The sizeof operator in C is used to determine the size, in bytes, of a data type or a variable.
It returns the number of bytes occupied by the object or type specified within parentheses.

*/

// Function to calculate the sum of an integer array
int sumArray(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array using sizeof operator
    /*
    `sizeof(numbers)` returns the total size in bytes of the `numbers` array, while `sizeof(numbers[0])` returns the size in bytes of a single element in the `numbers` array.

    By dividing the total size of the array by the size of a single element, the result stored in the `size` variable represents the number of elements in the array.
    */
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the sumArray function and pass the array and its size
    int result = sumArray(numbers, size);

    printf("Sum of the array: %d\n", result);

    return 0;
}
