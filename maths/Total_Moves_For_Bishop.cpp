/*
Given the position of a Bishop (A, B) on an 8 * 8 chessboard.

Your task is to count the total number of squares that can be visited by the Bishop in one move.

The position of the Bishop is denoted using row and column number of the chessboard.
*/

int Solution::solve(int r, int c) {

   int moves = min(r-1,c-1) + min(r-1,8-c) + min(8-r,c-1) + min(8-r,8-c);
}
