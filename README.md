# Midterm p1: Report on Analysis of Fibonacci  Series
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

As a rule of thumb, the recursive versions of C and Python time out much faster than the other versions. As follows.

## Language Analysis


### Language 1: C



### Language 2: Java



### Comparison and Discussion Between Experiences


## Conclusions / Reflection
