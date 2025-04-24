
// {para , no return} This condition has been used in the program



#include <stdio.h>

// Function declaration (parameter, no return)
void findCube(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function with argument
    findCube(number);

    return 0;
}

// Function definition
void findCube(int num) {
    int cube = num * num * num;
    printf("Cube of %d is: %d\n", num, cube);
}

