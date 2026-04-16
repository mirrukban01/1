#include<stdio.h>
int main() {
    // sum of N natural numbers 
    int n, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++) {
        sum+=i;
    }
    printf("Sum is %d\n", sum);

 return 0;
 }