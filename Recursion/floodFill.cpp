#include<iostream>
using namespace std;

void floodFill(int a[][8], int rows, int cols, int r, int c, int prevFill, int toFill)
{
    if(r <0 || r > rows || c < 0 || c > cols) {
        return;
    }
    if(a[r][c] != prevFill) return;
    
    a[r][c] = toFill;

    floodFill(a,rows,cols,r-1,c,prevFill,toFill);
    floodFill(a,rows,cols,r+1,c,prevFill,toFill);
    floodFill(a,rows,cols,r,c-1,prevFill,toFill);
    floodFill(a,rows,cols,r,c+1,prevFill,toFill);
}

int main()
{
    int a[8][8] = {
       {1,1,1,1,1,1,1,1},
       {1,1,1,1,1,2,0,0},
       {1,0,0,1,2,0,1,1},
       {1,2,2,2,2,0,1,0},
       {1,1,1,2,2,0,1,0},
       {1,1,1,2,2,2,2,0},
       {1,1,1,1,1,2,1,2},
       {1,1,1,1,1,2,2,1},
    };
    int rows=8,cols=8;
    int prevFill = 2;
    int toFill = 3;
    int r=5,c=4;
    
    floodFill(a,rows-1,cols-1,r,c,prevFill,toFill);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
