#include <stdio.h>
#include <time.h>

long fibonacci_iterative(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        long a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

long fibonacci_recursive(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
    }
}

long fibonacci_dynamic(int n) {
    long fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

int main() {
    int n = 40;

    FILE *file = fopen("fibonacci_running_times_c.txt", "w");
    fprintf(file, "Running time table for Fibonacci series calculation\n\n");

    // Recursive approach
    fprintf(file, "Calculating the running time for the first %d Fibonacci numbers using recursive approach...\n", n+1);
    for (int i = 0; i <= n; i++) {
        clock_t start_time = clock();
        long result = fibonacci_recursive(i);
        clock_t end_time = clock();
        double running_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
        fprintf(file, "n = %d, Result = %ld, Running time = %f seconds\n", i, result, running_time);
    }
    fprintf(file, "\n");

    // Iterative approach
    fprintf(file, "Calculating the running time for the first %d Fibonacci numbers using iterative approach...\n", n+1);
    for (int i = 0; i <= n; i++) {
        clock_t start_time = clock();
        long result = fibonacci_iterative(i);
        clock_t end_time = clock();
        double running_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
        fprintf(file, "n = %d, Result = %ld, Running time = %f seconds\n", i, result, running_time);
    }
    fprintf(file, "\n");

    // Dynamic programming approach
    fprintf(file, "Calculating the running time for the first %d Fibonacci numbers using dynamic programming approach...\n", n+1);
    for (int i = 0; i <= n; i++) {
        clock_t start_time = clock();
        long result = fibonacci_dynamic(i);
        clock_t end_time = clock();
        double running_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
        fprintf(file, "n = %d, Result = %ld, Running time = %f seconds\n", i, result, running_time);
    }

    fclose(file);
    return 0;
}
