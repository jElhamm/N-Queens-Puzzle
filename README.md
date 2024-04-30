# N Queens Puzzle

   This repository contains an implementation of the [*N Queens Puzzle*](https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/) solver in [Python](https://www.python.org/) and [C++](https://cplusplus.com/).
   The N-Queens problem is a classic problem in computer science where the task is to place N chess queens on an N×N chessboard so that no two queens threaten each other;
   thus, a solution requires that no two queens share the same row, column, or diagonal.

## N Queens Problem

   The N Queens problem is a fascinating puzzle that dates back to the 19th century.
   It was first proposed as a chess puzzle by chess composer Max Bezzel in 1848.
   The problem gained prominence in computer science due to its simple yet challenging nature and its applications in various fields such as artificial intelligence,
   constraint satisfaction, and combinatorial optimization.

## Problem Statement

   Given an N×N chessboard, the task is to place N queens on the board in such a way that no two queens threaten each other.
   In other words, no two queens should share the same row, column, or diagonal. The goal is to find all possible arrangements of queens that satisfy these constraints.

## Solving Methods

   1. [Heuristic](Heuristic)

   The heuristic approach aims to improve the efficiency of solving the N-Queens problem by using strategies that prioritize more promising moves.
   One common heuristic is the "minimum-conflicts" heuristic, which selects the next move that minimizes the number of conflicts with other queens on the board.
   While this method may not always find a solution, it can significantly reduce the search space and solve the problem faster for larger N.

   2. [Backtracking](Back%20Tracking)

   The backtracking algorithm is a classic approach to solving combinatorial problems like the N-Queens puzzle.
   It works by systematically trying all possible configurations of queens on the board and backtracks when it reaches a dead-end.
   This method is efficient for small values of N but can become slow for larger N due to the exponential time complexity.
   [more information](https://learning.intel.com/developer/learn/course/external/view/elearning/235/verilog-hdl-basics)

   3. [Solver using Nested For Loops](Solver%20using%20Nested%20For%20Loops)

   This method involves a straightforward implementation using nested for loops to generate and test all possible configurations of queens on the board.
   While not the most efficient approach, it provides a clear and understandable solution to the problem and is suitable for smaller values of N.

## Execution Times

   The repository includes scripts to measure the execution times of each solving method for different values of N.
   These execution times can provide insights into the performance of each method and help in selecting the most appropriate approach based on the problem size.

##  Usage

   Each topic is organized into dedicated directories with clear explanations, code examples, and illustrative diagrams where applicable. 
   You can explore the content by navigating through the directories and reviewing the individual files.

## References
   
   BOOK
 
   * [Artificial Intelligence A Modern Approach, 3rd Edition by Stuart J. Russell, Peter Norvig](Artificial%20Intelligence%20A%20Modern%20Approach%2C%203rd%20Edition%20by%20Stuart%20J.%20Russell%2C%20Peter%20Norvig.pdf)

## License

   This repository is licensed under the MIT License.
   See the [LICENSE](./LICENSE) file for more details.