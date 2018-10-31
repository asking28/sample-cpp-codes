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

string happyladybug(int n,string b)
{
    vector <int> counter(26,0);
    int i,count_space=0,flag=0;
    for(i=0;i<n;i++)
    {
        if(b[i]=='_')
            count_space++;
        else
            counter[b[i]-'A']++;
    }
    for(i=0;i<26;i++)
    {
        if(counter[i]==1)
            flag=1;
    }
    if(flag==1)
        return "NO";
    if(count_space==0)
    {
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if(b[i]!=b[i+1])
                flag=1;
        }
         else if(i==n-1)
        {
            if(b[i]!=b[i-1])
                flag=1;
        }
        else
        {
            if(b[i]!=b[i-1]&&b[i]!=b[i+1])
                flag=1;
        }

    }
        if(flag==1)
            return "NO";
        else
            return "YES";
    }
    else
        return "YES";

}
int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        string s;
        s=happyladybug(n,b);
        cout<<s<<"\n";
    }
    return 0;
}
