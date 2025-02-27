#include <stdio.h>

int g(int n);
int f(int n) { return (n<=1) ? 1 : f(n-1) + g(n-2); }
int g(int n) { return (n<=1) ? 1 : f(n+1) + g(n-1); }

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("f(%d) = %d\n", i, f(i));
    }
    return 0;
}