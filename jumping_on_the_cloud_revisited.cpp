#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) {
    // Complete this function
    int i=0;
    int curr_cost=100;
    do{
        curr_cost-=c[i]*2+1;
        i=(i+k)%c.size();


    }while(i!=0);
    return curr_cost;

}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}
