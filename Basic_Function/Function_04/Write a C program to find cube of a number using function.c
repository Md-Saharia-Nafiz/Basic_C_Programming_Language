
// {para , return} This condition has been used in the program



#include <stdio.h>

// Function declaration
int cube(int num);

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = cube(number);  // Function call

    printf("Cube of %d is %d\n", number, result);

    return 0;
}

// Function definition
int cube(int num) {
    return num * num * num;
}

