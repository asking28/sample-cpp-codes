#include <bits/stdc++.h>

using namespace std;
void rotate(vector <vector <long long> > *matrix,long long layer)
{   long long rows=(*matrix).size(),columns=(*matrix)[0].size(),l=layer;
    long long i,j,temp1=(*matrix)[l][l],c=l,r=l;
    while(c<columns-l-1)
    {
        (*matrix)[l][c]=(*matrix)[l][c+1];
        c++;
    }
    c=columns-l-1;
    while(r<rows-l-1)
    {
        (*matrix)[r][c]=(*matrix)[r+1][c];
        r++;
    }
    r=rows-l-1;
    while(c>l)
    {
        (*matrix)[r][c]=(*matrix)[r][c-1];
        c--;
    }
    c=l;
    while(r>l)
    {
        (*matrix)[r][c]=(*matrix)[r-1][c];
        r--;
    }
    (*matrix)[l+1][l]=temp1;

}
void matrixRotation(vector < vector<long long> > matrix,long long r) {
    // Complete this function
    long long i,j,n_layers,rows=matrix.size(),columns=matrix[0].size(),l=0;
    n_layers=min(rows,columns)/2;
    vector <int> n_rotation_layer(n_layers);
    for(i=0;i<n_layers;i++)
    {
        n_rotation_layer[i]=r%((rows-2*i)*2+2*(columns-2*i)-4);
    }
    while(l<n_layers)
    {
        for(i=1;i<=n_rotation_layer[l];i++)
            rotate(&matrix,l);
        l++;
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
        cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    long long m;
    long long n;
    long long r;
    cin >> m >> n >> r;
    vector< vector<long long> > matrix(m,vector<long long>(n));
    for(int matrix_i = 0;matrix_i < m;matrix_i++){
       for(int matrix_j = 0;matrix_j < n;matrix_j++){
          cin >> matrix[matrix_i][matrix_j];
       }
    }
    matrixRotation(matrix,r);
    return 0;
}
