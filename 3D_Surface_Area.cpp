#include <bits/stdc++.h>

using namespace std;

int surfaceArea(vector < vector<int> > A,int H,int W) {
    // Complete this function
    vector <vector <int> > Ar(H,vector <int>(W));
    int i,j,area=0,total=0;
    for(i=0;i<H;i++)
    {
        for(j=0;j<W;j++)
        {   if(A[i][j]!=0)
            Ar[i][j]=A[i][j]*4+2;
         else
             Ar[i][j]=0;
        }
    }
    for(i=0;i<=H-1;i++)
    {
        for(j=0;j<=W-1;j++)
        {
            if(i<H-1&&j<W-1)
        {
            area+=min(A[i][j],A[i+1][j]);
            area+=min(A[i][j],A[i][j+1]);
        }
         else if(i==H-1&&j<W-1)
         {
             area+=min(A[i][j],A[i][j+1]);
         }
            else if(i<H-1&&j==W-1)
            {
                area+=min(A[i][j],A[i+1][j]);
            }
        }
    }
    for(i=0;i<H;i++)
    {
        for(j=0;j<W;j++)
        {
            total+=Ar[i][j];
        }
    }
    return total-2*area;

}

int main() {
    int H;
    int W;
    cin >> H >> W;
    vector< vector<int> > A(H,vector<int>(W));
    for(int A_i = 0;A_i < H;A_i++){
       for(int A_j = 0;A_j < W;A_j++){
          cin >> A[A_i][A_j];
       }
    }
    int result = surfaceArea(A,H,W);
    cout << result << endl;
    return 0;
}
