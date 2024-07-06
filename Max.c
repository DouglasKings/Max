#include <stdio.h> // Include the standard input/output library

// Function prototype for the function Max, which takes two doubles as arguments and returns a double
double Max(double A, double B);

int main() {
    double A, B, Result; // Declare variables for storing the numbers and the result

    printf("Enter the first number: "); // Prompt the user to enter the first number
    scanf("%lf", &A); // Read the first number entered by the user
    printf("Enter the second number: "); // Prompt the user to enter the second number
    scanf("%lf", &B); // Read the second number entered by the user

    Result = Max(A, B); // Call the Max function with the two numbers and store the result

    printf("The first number: %.2lf \n", A); // Print the first number with two decimal places
    printf("The second number: %.2lf \n", B); // Print the second number with two decimal places
    printf("The result is %.2lf \n", Result); // Print the result with two decimal places

    return 0; // Return 0 to indicate successful execution of the program
}

// Function definition for Max, which compares two numbers and returns the larger one
double Max(double A, double B) {
    return (A > B) ? A : B; // Use the ternary operator to return the larger of the two numbers
}
