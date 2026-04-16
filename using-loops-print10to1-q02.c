#include <stdio.h>
int main() {
    // print number 10-1 
    //using do while
    int i=10;
    do {
        printf("%d\t", i);
        i--;
    } while (i>0);
    printf("\n");
    // using while 
    i=10;
    while (i>0) {
        printf("%d\t", i);
        i--;  
    }
    printf("\n");
    // using for 
    for (i=10; i>0; i--) {
        printf("%d\t", i);
    }
    return 0;
}