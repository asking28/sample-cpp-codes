#include <bits/stdc++.h>

using namespace std;

vector <int> stones(int n, int a, int b) {
    // Complete this function
    vector <int> poss;
    int i,j,sum1=0,t;
    if(b<a)
    {
        t=b;
        b=a;
        a=t;
    }
    if(a!=b)
    for(i=0;i<n;i++)
    {
        sum1=a*(n-1-i)+b*(i);
        poss.push_back(sum1);
    }
    if(a==b)
    {
        poss.push_back(a*(n-1));
    }
    return poss;
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        int a;
        cin >> a;
        int b;
        cin >> b;
        vector <int> result = stones(n, a, b);
        for (ssize_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i != result.size() - 1 ? " " : "");
        }
        cout << endl;


    }
    return 0;
}
