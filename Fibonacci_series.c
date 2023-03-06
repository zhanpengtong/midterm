#include <stdio.h>

int fibonacci_iterative(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int fibonacci_recursive(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
    }
}

int fibonacci_dynamic(int n) {
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

int main() {
    int n = 10;
    printf("The %dth Fibonacci number using iterative approach is: %d\n", n, fibonacci_iterative(n));
    printf("The %dth Fibonacci number using recursive approach is: %d\n", n, fibonacci_recursive(n));
    printf("The %dth Fibonacci number using dynamic programming approach is: %d\n", n, fibonacci_dynamic(n));
    return 0;
}
