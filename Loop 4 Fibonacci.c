#include <stdio.h>
//Write a program which prints the first n Fibonacci numbers.
int main()
{
    int a, b, c, i, terms;

    /*
     * Read a number from user
     */
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    // Fibonacci magic initialization
    a = 1;
    b = 0;
    c = 1;

    printf("Fibonacci terms: \n");

    // Iterate through n terms
    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b; // Copy n-1 to n-2
        b = c; // Copy current to n-1
        c = a + b; // New term
    }

    return 0;
}
