/**
 * This code represents the definition of the member functions of the QueenSolver class.
 * It implements the functionalities declared in the queen_solver.h header file.
 */



#include "queen_solver.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;


// Constructor for QueenSolver class
QueenSolver::QueenSolver() {
    numQueens      = 0;                                                                                 // Initialize the number of queens to 0
    totalSolutions = 0;                                                                                 // Initialize totalSolutions to 0
}

// Method to count the number of solutions for a given board state
int QueenSolver::countQueensSolutions(std::vector<int> board) {
    int count = 0;                                                                                      // Initialize the count of solutions to 0
    do {
        if (isSafe(board)) {                                                                            // Check if the current board state is safe
            count++;                                                                                    // If safe, increment the count of solutions
        }
    } while (std::next_permutation(board.begin(), board.end()));                                        // Generate next permutation of the board
    return count; // Return the total count of solutions
}
