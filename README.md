# DSA Logic Building

A collection of beginner-friendly C++ examples for learning data structures, algorithms, and problem-solving fundamentals. Each source file focuses on a small concept and can be compiled and run independently.

## Topics covered

### Arrays

Array declaration and initialization, traversal, input, pass by reference, linear search, and reversal.

### Vectors and memory allocation

Creating and initializing `std::vector` objects, accessing elements, looping through values, checking size and capacity, and using `push_back`, `pop_back`, `front`, `back`, and `at`.

### Subarrays and maximum subarray sum

Generating subarrays, calculating maximum subarray sums with a nested-loop approach, and solving the maximum subarray problem with Kadane's algorithm.

### Pair sum

Finding two values in a sorted array that add up to a target. The examples compare a brute-force nested-loop solution with a two-pointer solution that runs in linear time.

## Repository structure

```text
DSA logic building/
├── Arrrays/                         # Array fundamentals and exercises
├── Kadanes Algorithm/               # Subarrays and maximum subarray sum
├── Static and Dynamic Allocation/   # Vector size and capacity examples
├── Vectors/                         # Standard vector operations
└── README.md
```

## Compile and run an example

You need a C++ compiler such as `g++`. From the repository root, compile a source file and run the resulting program:

```bash
g++ "Kadanes Algorithm/03_Maximum_subarray_sum_using_Kadanes_Algorithm.cpp" -o kadane
./kadane
```

On Windows, run the generated executable with:

```powershell
g++ "Kadanes Algorithm/03_Maximum_subarray_sum_using_Kadanes_Algorithm.cpp" -o kadane.exe
.\kadane.exe
```

## Learning goals

- Strengthen C++ fundamentals through focused examples.
- Understand how arrays and vectors store and expose data.
- Compare straightforward solutions with more efficient algorithms.
- Build a foundation for advanced data structures and algorithmic problem-solving.

The examples are part of an ongoing learning journey and may use small, fixed input values to keep each concept clear.
