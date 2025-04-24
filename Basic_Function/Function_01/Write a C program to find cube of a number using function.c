
// {no para , no return} This condition has been used in the program



#include <stdio.h>

// Function declaration
void findCube();

int main() {
    // Call the function
    findCube();

    return 0;
}

// Function definition with no parameters and no return value
void findCube() {
    int num, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;

    printf("Cube of %d is %d\n", num, cube);
}

