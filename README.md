# Midterm p1: Report on Analysis of Fibonacci Series
* **Author**: Zhanpeng Tong
* **GitHub**: https://github.com/zhanpengtong/midterm.git
* **Semester** Spring 2023
* **Languages Used**: c, Python

## Overview
The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding numbers, starting from 0 and 1. It can be presented mathematically as:

F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2) for n > 1

So the first few numbers in the Fibonacci series would be: 

```TEXT
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on.
```

There are many ways to implement the Fibonacci sequence using code, and each method is discussed in more detail below. However, for the implementation I used in this report, the table below represents Big-O values.

![Big-O](https://user-images.githubusercontent.com/113164203/222501648-5cab10e5-9ebd-427e-b145-9f278e5a4468.PNG)

The iterative version has two nested for loops, developing O(n), while also requiring the previous row to be stored, resulting in increased space. There is a version that uses constant space for individual variables, but it fails on larger symbols. The recursive version is pseudocode:

```text
function fibonacciRecursive(n):
    if n <= 1:
        return n
    else:
        return fibonacciRecursive(n-1) + fibonacciRecursive(n-2)
```

Each number in the Fibonacci series is the sum of the two preceding numbers, meaning that to generate the nth number, the algorithm must calculate n-1 sums. This requires n-1 recursive calls in the naive recursive implementation. However, the only space required is to store the two previous numbers in the sequence, making the space used O(1).

The dynamic programming version stores the value of (n-1) for each call, making the second branch constant time, bringing the worst case back to O(n) time, but at the cost of O(n) space.

For this analysis, I selected Python for my second language. Python is a well-known language with built-in functions to assist with dynamic programming such as lru_cache and cache in the built-in functools library. This allows for experimentation with built-in tools while writing in a language designed for quick development and experimentation.


## Empirical Data & Discussion A
For all empirical results, I maximize n to n=40. This allows for timely code execution while still being able to run multiple iterations.

As a rule of thumb, the Dynamic programming versions of C and Python time out much faster than the other versions. As follows.

![Dynamic_Programming](https://user-images.githubusercontent.com/113164203/223064032-4d9e81ad-b566-49af-98ce-1a37cd394d3e.png)
the Dynamic programming was the faster one.

![Recursive](https://user-images.githubusercontent.com/113164203/223064169-d1189a87-9bbf-4655-bcb1-90d5045109bd.png)
we can see for the recursive version after 33 the running time will be growing veryfast.

![Iterative](https://user-images.githubusercontent.com/113164203/223064001-6f93c3a2-70a7-4266-8801-9a0eeb851509.png)
the Iterative  in c version was always be 0 running time that mean the running time was faster and not be calculate and the python was not very stable but was stil fast.

Overall, we can see the Dynamic programming was the best way when we calculate the Fibonacci Series. Also, when we look at the running time between python and c language, c language is more stable and faster than python.


## Language Analysis

You can find the code implementation in C and Python in the following files: "Fibonacci_series.c", "Fibonacci_series.py". Initially, I started coding in C because of the examples provided in my usual classes, but then I switched to Python and explored different implementations in it. After exploring the Python implementation, I updated the C version accordingly. Because compared to the C language, python can do more trial and error and continuous modification and experimentation. I think this has something to do with python's ability to better modify the code and its powerful IDE.

### Language 1: C

```text 
Fn = Fn-1 + Fn-2
F0 = 0 and F1 = 1.


 #include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
  
int main()
{
    int n = 9;
    printf("%d", fib(n));
    getchar();
    return 0;
}
```
For the C language, I imagined the problem too complicated at the beginning, so I didn't have any starting points. For this reason, I refer to [Geeksforgeeks](https://www.geeksforgeeks.org/c) for how to apply C language programming in Fibonacci_series The method in -program-for-fibonacci-numbers/ gave me a lot of inspiration and was able to complete it smoothly.


### Language 2: Python

When I finished writing C, I tried python and found it compared to C. python, it's easier in the process of experimenting, and I can quickly figure out how to do it, because I often only have to think about how to convert C code.
But because python has a more convenient IDE, I will first run in python when trying to try some new methods. It can better show me the location and cause of the error and also provide me with some directions and suggestions for modification.


### Comparison and Discussion Between Experiences


## Conclusions / Reflection
