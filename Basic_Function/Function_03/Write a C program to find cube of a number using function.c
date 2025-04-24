
// {no para , return} This condition has been used in the program



#include <stdio.h>

// Function to calculate cube
int cube() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num * num * num;
}

int main() {
    int result = cube();  // Calling the function and storing the returned value
    printf("Cube of the number is: %d\n", result);
    return 0;
}

