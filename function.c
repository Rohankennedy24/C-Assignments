#include <stdio.h>
void greet() {
    printf("Hello from a function!\n");
}
int add(int a, int b) {
    return a + b;
}
int main() {
    greet();
    int result = add(10, 5);
    printf("Sum: %d\n", result);
    return 0;
}
