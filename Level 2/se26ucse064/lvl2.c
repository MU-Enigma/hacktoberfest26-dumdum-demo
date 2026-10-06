#include <stdio.h>
int main() {
    int a=0, b=0;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    return 0;
} 