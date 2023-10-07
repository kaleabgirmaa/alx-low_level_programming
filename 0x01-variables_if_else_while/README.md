# C - Variables, if, else, while

This repository contains examples of using variables, if-else statements, and while loops in the C programming language.

## Table of Contents
- [Introduction](#introduction)
- [Variables](#variables)
- [If-Else Statements](#if-else-statements)
- [While Loops](#while-loops)
- [Conclusion](#conclusion)

## Introduction
In C programming, variables are used to store data values that can be manipulated and used in various operations. If-else statements are used to make decisions based on certain conditions, while loops are used to repeatedly execute a block of code until a specified condition is met.

## Variables
Variables in C are declared with a specific data type, such as `int`, `float`, `char`, etc. Here's an example of declaring and using variables:

```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 1.75;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}

