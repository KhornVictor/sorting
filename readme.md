# Sorting Algorithms (C++)

This repository contains simple C++ implementations for learning and demonstrating:

- Finding the minimum value in an array
- Bubble Sort
- Selection Sort

The sorting examples print step-by-step output and use ANSI colors to highlight comparisons and swaps in the terminal.

## Project Structure

```
L5-Sorting/
|-- readme.md
|-- assets/
|-- docs/
|-- reports/
`-- src/
	|-- findMin.cpp
	`-- sorting/
		|-- bubble.cpp
		`-- selection.cpp
```

## Requirements

- A C++ compiler (recommended: `g++`)
- Terminal/console

## Build and Run

Run these commands from the project root (`L5-Sorting`).

### 1) Find Minimum

Compile:

```bash
g++ src/findMin.cpp -o findMin
```

Run:

```bash
./findMin
```

Windows (PowerShell / CMD):

```powershell
findMin.exe
```

### 2) Bubble Sort

Compile:

```bash
g++ src/sorting/bubble.cpp -o bubble
```

Run:

```bash
./bubble
```

Windows (PowerShell / CMD):

```powershell
bubble.exe
```

### 3) Selection Sort

Compile:

```bash
g++ src/sorting/selection.cpp -o selection
```

Run:

```bash
./selection
```

Windows (PowerShell / CMD):

```powershell
selection.exe
```

## Algorithm Notes

### Find Minimum (`findMin.cpp`)

- Idea: Iterate through the array and track the smallest value found.
- Time Complexity: `O(n)`
- Space Complexity: `O(1)`

### Bubble Sort (`bubble.cpp`)

- Idea: Repeatedly compare adjacent elements and swap when out of order.
- Time Complexity: `O(n^2)`
- Space Complexity: `O(1)`

### Selection Sort (`selection.cpp`)

- Idea: Repeatedly find the smallest element in the unsorted part and place it in front.
- Time Complexity: `O(n^2)`
- Space Complexity: `O(1)`

## Notes About Colors

`bubble.cpp` and `selection.cpp` use ANSI escape codes for colored output.

- Most Linux/macOS terminals support this by default.
- On modern Windows Terminal and most VS Code terminals, it should work.
- If colors do not appear, your terminal may not support ANSI coloring.

## Learning Goal

This project is designed for algorithm practice and understanding how sorting works step by step, not for production-level optimized sorting.
