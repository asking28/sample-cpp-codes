#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c) {
    // Complete this function
    int n_jumps=0,i=0;
    int n=c.size();
    while(i<n-1)
    {   if(i+2<n-1||i+2==n-1){
        if(c[i+2]==1)
            i=i+1;
        else
            i=i+2;
        n_jumps++;
       // cout<<i<<"#\n";
        }
        else if(i+1==n-1){
        i+=1;
        n_jumps++;
        }
        else
        i++;
    }
    return n_jumps;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c);
    cout << result << endl;
    return 0;
}
