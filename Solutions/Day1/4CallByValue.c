#include <stdio.h>

// Function to increase the value of a number by a fixed amount (call by value)
void increaseByValue(int num, int amount)
{
    num += amount; // Increase the value of num by the specified amount
    printf("Inside function: num = %d\n", num);
}

int main()
{
    int num1 = 10;
    int num2 = 5;
    int amount = 3;

    printf("Before function call: num1 = %d, num2 = %d\n", num1, num2);

    // Call the increaseByValue function for num1 and num2
    increaseByValue(num1, amount);
    increaseByValue(num2, amount);

    printf("After function call: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
