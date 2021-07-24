/*
Problem Description

You are in an infinite 2D grid where you can move in any of the 8 directions

 (x,y) to 
    (x-1, y-1), 
    (x-1, y)  , 
    (x-1, y+1), 
    (x  , y-1),
    (x  , y+1), 
    (x+1, y-1), 
    (x+1, y)  , 
    (x+1, y+1) 
You are given a sequence of points and the order in which you need to cover the points.. 

Give the minimum number of steps in which you can achieve it. You start from the first point.
*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
     int res=0;
    
     
     for(int i=1;i<A.size();i++){
         int xp=A[i-1];
         int yp=B[i-1];
         int xd=abs(A[i]-xp);
         int yd=abs(B[i]-yp);
         res+=max(xd,yd);
     }
     return res;
}
