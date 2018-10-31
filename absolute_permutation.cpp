#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
void smallest_permutation(int n,int k)
{
    vector <int> a;
    int i,j,cp=1;
    if(k==0)
    {
    for(i=1;i<=n;i++)
    {
        a.push_back(i);
    }

    }
    else if(k>0)
    {
        if(n%(2*k)!=0)
            cout<<-1;
        else
        {
            for(i=1;i<=n;i++)
            {
                if(cp%2==1)
                    a.push_back(i+k);
                else
                    a.push_back(i-k);

                if(i%k==0)
                    cp++;
            }
        }
    }
    for(i=0;i<a.size();i++)
        cout<<a[i]<<" ";

    cout<<"\n";
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        smallest_permutation(n,k);
    }
    return 0;
}
