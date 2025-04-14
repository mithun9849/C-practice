#include <stdio.h>

int main() {
    char str[] = "mithun";
    char* ptr = &str[0]; 
    printf("%p\n",&str[0]); 
    printf("%s\n",&str[0]);
    return 0;
}

