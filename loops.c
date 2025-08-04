#include <stdio.h>
int main() {
    printf("For loop:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    
    printf("\nWhile loop:\n");
    int j = 1;
    while(j <= 5) {
        printf("%d ", j);
        j++;
    }

    printf("\nDo-While loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while(k <= 5);

    return 0;
}
