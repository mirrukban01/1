#include <stdio.h>
int main() {
    // reversing a given number
    int n,rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n>0) {
        int lastDigit = n%10;
        rev = rev*10 + lastDigit;
        n/=10;
    }
    printf("%d", rev);

}