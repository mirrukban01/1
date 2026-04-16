#include <stdio.h>
int main() {
    // n factorial
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        fact *=i;
    }
    printf("%d", fact);
}