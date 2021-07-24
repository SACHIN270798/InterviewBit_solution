/*
Return an integer denoting the position where the Ath item
 will be delivered if we start from a given position C.

*/

int Solution::solve(int A, int B, int C) {
    int pos=C+A-1;
    pos=pos%B;
    return pos;
    
}
