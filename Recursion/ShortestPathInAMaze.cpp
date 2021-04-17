//Given a 2D Maze with value 1 as a path and 0 is block.
//We have to find shortest path to go from 1 point to another.
#include<iostream>
using namespace std;

bool isValidMove(int a[][10],bool vis[][10],int rows,int cols,int i,int j)
{

    if((i>=0 && i<rows) && (j>=0 && j<cols) && (a[i][j]==1 && !vis[i][j])) return true;
    return false;
}

int Min(int x,int y)
{
    if(x<y) return x;
    return y;
}

int shortestPath(int a[][10],bool vis[][10],int rows,int cols,int i,int j,int x,int y)
{
    if(!isValidMove(a,vis,rows,cols,i,j)) return 10000;
    if(i==x && j==y) return 0;
    // int left = 100000;
    // int right = 100000;
    // int up = 100000;
    // int down = 100000;
    vis[i][j] == true;

    // if(isValidMove(a,vis,rows,cols,i,j-1))
        int left = shortestPath(a,vis,rows,cols,i,j-1,x,y) + 1;
    
    // if(isValidMove(a,vis,rows,cols,i+1,j))
        int down = shortestPath(a,vis,rows,cols,i+1,j,x,y) + 1;
   
    // if(isValidMove(a,vis,rows,cols,i,j+1))
        int right = shortestPath(a,vis,rows,cols,i,j+1,x,y) + 1;
    
    // if(isValidMove(a,vis,rows,cols,i-1,j))
        int up = shortestPath(a,vis,rows,cols,i-1,j,x,y) + 1;
    
    //This lines make backtracking work
    vis[i][j] = false;
    return Min(Min(left,right), Min(up,down));    
}

int findShortestPath(int a[10][10], int rows, int cols, int i, int j, int x, int y)
{
    bool vis[10][10] = {false};
    shortestPath(a,vis,rows,cols,i,j,x,y);
    return 0;
}


int main()
{
    int a[][10] =
    {
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
        { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
    };
    int rows=10,cols=10;
    int result =  findShortestPath(a,rows,cols,0,0,0,2);
    cout << result;
    return 0;
}
