#include <bits/stdc++.h>

using namespace std;

vector <string> bomberMan(long long n, vector <string> grid) {
    // Complete this function
    long long t=0,i,j,r=grid.size(),c=grid[0].size();
    vector <string> s1;
    string s;
    vector <vector <int> > a(r,(vector <int>(c)));
    if(n>4)
        n=4+n%4;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(grid[i][j]=='O')
                a[i][j]=3;
            else
                a[i][j]=0;
            //cout<<a[i][j];
        }
        //cout<<"\n";
    }

    while(t<n)
    {
        if(t==0)
        {
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
                a[i][j]=0;
            else
                a[i][j]--;
        }
        }
            t++;
        }
        else if(t%2==1)
        {
            for(i=0;i<r;i++)
            {
            for(j=0;j<c;j++)
            {
            if(a[i][j]==0)
                a[i][j]=3;
            else
                a[i][j]--;
            }
            }
            t++;
        }
        else
        {
            for(i=0;i<r;i++)
            {
            for(j=0;j<c;j++)
            {
            if(a[i][j]==1)
            {   if(i!=r-1)
                if(a[i+1][j]!=1)
                    a[i+1][j]=0;
                if(j!=c-1)
                if(a[i][j+1]!=1&&j!=c-1)
                    a[i][j+1]=0;
                if(i>0)
                if(a[i-1][j]!=1)
                    a[i-1][j]=0;
                if(j>0)
                if(a[i][j-1]!=1)
                    a[i][j-1]=0;
               // if(i==5&&j==2)
                 //   cout<<a[i][j];
                a[i][j]=0;
            }
            else if(a[i][j]!=0)
                a[i][j]--;
            }
            }
            t++;
        }



    }

    //cout<<a[5][3];
    for(i=0;i<r;i++)
    {   s="";
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
                s+='.';
            else
                s+='O';
        }
        s1.push_back(s);
    }

    return s1;

}

int main() {
    int r;
    int c;
    long long n;
    cin >> r >> c >> n;
    vector<string> grid(r);
    for(int grid_i = 0; grid_i < r; grid_i++){
       cin >> grid[grid_i];
    }
    vector <string> result = bomberMan(n, grid);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
