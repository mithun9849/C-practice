#include <stdio.h>

// Function declaration
int sum(int n);

int main() {
    int n, result;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum of numbers from 1 to %d is %d\n", n, result);
    
    return 0;
}

// Recursive function definition
int sum(int n) {
    if (n != 0) {
        return n + sum(n - 1);
    } else {
        return 0;
    }
}

