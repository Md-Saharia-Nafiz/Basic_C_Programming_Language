

#include <stdio.h>

int main()
{
    int num1, num2, num3, sum;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate sum
    sum = num1 + num2 + num3;

    // Display the result
    printf("The sum of the three numbers is: %d\n", sum);

    return 0;
}
