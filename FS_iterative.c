#include <stdio.h>
#include <time.h>

void fibonacciIterative(int n) {
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (int i = 0; i <= n; i++) {
        printf("The %d Fibonacci number is: %d \n", i, fib[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    clock_t start = clock();
    fibonacciIterative(n);
    clock_t end = clock();
    
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to compute Fibonacci numbers: %f seconds\n", time_taken);
    return 0;
}
