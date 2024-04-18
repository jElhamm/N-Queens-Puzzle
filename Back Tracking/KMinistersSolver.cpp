/**
 * This code defines a class `KMinistersSolver` for solving the k-ministers problem using backtracking.
 * The class includes functions for checking the safety of a placement, backtracking to explore solutions,
 * solving the problem for a given number of ministers, and retrieving the execution time.
 **/



#include "KMinistersSolver.h"
#include <iostream>
using namespace std;
using namespace std::chrono;


// Constructor to initialize solutions and execution time
KMinistersSolver::KMinistersSolver() {
    solutions     = 0;
    executionTime = 0.0;
}

// Function to check if placing a minister at a position is safe
bool KMinistersSolver::isSafe(int row, int col) {
    // Check if there is a conflict with previously placed ministers
    for (int i = 0; i < row; ++i) {
        if (board[i] == col || abs(i - row) == abs(board[i] - col)) {
            return false;
        }
    }
    return true;
}

// Function to get the execution time of the last solve operation
double KMinistersSolver::getExecutionTime() {
    return executionTime;                                                           // Return the execution time
}