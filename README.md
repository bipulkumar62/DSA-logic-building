# DSA Logic Building

A beginner-focused C++ practice repository for learning Data Structures and Algorithms through simple, clear, and logical problem-solving.

## About this project

This repository is built to strengthen my understanding of core DSA concepts using C++. The initial focus is on arrays, which are one of the most important foundations in programming and algorithm design.

I am learning by solving small problems, understanding patterns, and practicing how data is stored, accessed, and manipulated in memory.

## What I am learning

- array declaration and initialization
- indexing and memory layout
- loops and traversal
- basic logic building
- beginner-level algorithm thinking
- understanding bugs caused by invalid indexing

## Example

The file [Arrrays/01_Basic_array.cpp](Arrrays/01_Basic_array.cpp) demonstrates a basic array example:

```cpp
int marks[5] = {10, 20, 30, 40, 50};
cout << marks[5] << endl;
```

This shows that:

- arrays have fixed size
- indexing starts from `0`
- valid indices are `0` to `4`
- using `marks[5]` is out of range and can lead to undefined behavior

## Key concepts covered

### 1. Arrays are fixed-size containers
They store data in contiguous memory locations.

### 2. Indexing starts from zero
The first element is at index `0` in C++.

### 3. Loops are used to process arrays
Traversing through elements is one of the most common programming patterns.

### 4. Logic matters more than speed at the start
Good understanding of conditions, loops, and indexing is more important than writing complex code early.

### 5. Debugging improves problem-solving
If the output is wrong, checking indices and loop conditions usually reveals the problem quickly.

## Current focus

This repository is currently centered on:

- basic array operations
- understanding array indexing
- reading and writing simple logic
- building confidence with beginner DSA problems

## Why this repository is useful

Arrays are the foundation of many later DSA topics, including:

- searching
- sorting
- strings
- stacks and queues
- matrices
- linked lists
- recursion and advanced algorithms

Understanding arrays clearly makes the next topics easier to learn.

## Learning goals

- improve problem-solving thinking
- write clean and understandable C++ code
- practice arrays systematically
- build a strong foundation for advanced DSA topics
- become comfortable with common beginner coding patterns

## Conclusion

This project is a step-by-step learning journey in DSA and C++. The goal is not just to complete exercises, but to understand the logic behind each program and develop a consistent habit of solving problems methodically.

By practicing small examples repeatedly, the foundation becomes stronger, and later topics become much easier to understand.

---

## Repository structure

```text
DSA logic building/
├── README.md
└── Arrrays/
	├── 01_Basic_array.cpp
	├── 02_Loops_on_array.cpp
	├── 03_Input_on_array.cpp
	├── 04_Question_01.cpp
	├── 05_Pass_by_reference.cpp
	├── 06_Linear_search.cpp
	└── 07_Reverse_an_array.cpp
```

## Programs included

- `01_Basic_array.cpp` - array declaration and initialization
- `02_Loops_on_array.cpp` - traversing array elements with loops
- `03_Input_on_array.cpp` - reading values into an array
- `04_Question_01.cpp` - basic array problem practice
- `05_Pass_by_reference.cpp` - changing array values inside a function
- `06_Linear_search.cpp` - finding a target value and returning its index
- `07_Reverse_an_array.cpp` - reversing an array with two pointers