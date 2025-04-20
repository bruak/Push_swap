# Push_swap

A sorting algorithm project that sorts integers using two stacks and a limited set of operations, aiming for the lowest possible number of actions.

## Table of Contents
- [Push\_swap](#push_swap)
  - [Table of Contents](#table-of-contents)
  - [Overview](#overview)
  - [Project Objectives](#project-objectives)
  - [Requirements](#requirements)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Algorithm](#algorithm)
  - [Operations](#operations)
  - [Implementation Details](#implementation-details)
  - [Project Structure](#project-structure)
  - [Example](#example)

## Overview

Push_swap is a project that requires sorting data on a stack, with a limited set of instructions, and the smallest number of moves. It involves manipulating various sorting algorithms and choosing the most appropriate solution for optimized data sorting.

## Project Objectives

- Write a program that calculates and displays the smallest program, made of Push_swap language instructions, that sorts the integers received as arguments
- Understand and implement various sorting algorithms
- Learn about algorithm complexity and choose the most appropriate solution for a given input
- Work with stack data structures

## Requirements

- GCC compiler
- GNU Make
- C standard library
- The program should handle integer arguments

## Installation

1. Clone the repository (if applicable)
```bash
git clone <repository-url>
cd Push_swap
```

2. Compile the program
```bash
make
```

## Usage

Run the program with integers as arguments:

```bash
./push_swap 2 1 3 6 5 8
```

The output will be a list of operations that sort the given integers:
```
sa
pb
ra
...
```

To visualize the sorting process, you can use a visualizer tool (not included).

## Algorithm

The Push_swap sorting algorithm works with two stacks, A and B:
1. All integers are initially added to stack A
2. Stack B is empty
3. The goal is to sort all integers in ascending order on stack A using a limited set of operations
4. The algorithm aims to find the minimal sequence of operations to achieve this sorting

## Operations

The following operations are available:

- **sa**: Swap the first 2 elements at the top of stack A
- **sb**: Swap the first 2 elements at the top of stack B
- **ss**: sa and sb at the same time
- **pa**: Take the first element at the top of stack B and put it at the top of stack A
- **pb**: Take the first element at the top of stack A and put it at the top of stack B
- **ra**: Shift up all elements of stack A by 1 (the first element becomes the last one)
- **rb**: Shift up all elements of stack B by 1
- **rr**: ra and rb at the same time
- **rra**: Shift down all elements of stack A by 1 (the last element becomes the first one)
- **rrb**: Shift down all elements of stack B by 1
- **rrr**: rra and rrb at the same time

## Implementation Details

The project is implemented in C and uses a structure to represent the stacks:

```c
typedef struct s_stack
{
    int *arr;
    int top;
    int size;
} t_stack;
```

Key implementation features include:
- Input validation and error handling
- Stack operations implementation
- Sorting algorithm implementation
- Optimization to minimize the number of operations

## Project Structure

- **push_swap.h**: Header file containing function prototypes and struct definitions
- **push_swap_main.c**: Main program logic and entry point
- **swaps.c**: Implementation of swap operations (sa, sb, ss)
- **ft_split.c**: Helper function to split strings

## Example

Input:
```bash
./push_swap 3 1 2
```

Output:
```
sa
rra
```

---

*This project is part of the 42 School curriculum.*