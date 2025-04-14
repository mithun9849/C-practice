#include <stdio.h>

int main() {
    int i, value;
    int age[100];  // Set a max limit for simplicity

    printf("How many values do you want to enter? ");
    scanf("%d", &value);

    printf("Enter the values:\n");
    for (i = 0; i < value; i++) {
        scanf("%d", &age[i]);
    }

    printf("You entered: ");
    for (i = 0; i < value; i++) {
        printf("%d ", age[i]);
    }

    return 0;
}

