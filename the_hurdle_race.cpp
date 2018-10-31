#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector <int> height) {
    // Complete this function
    int i,sum1=0,max1=height[0];
    for(i=0;i<height.size();i++)
    {
        if(max1<height[i])
            max1=height[i];
    }
    if(max1>k)
        sum1=max1-k;
    return sum1;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int result = hurdleRace(k, height);
    cout << result << endl;
    return 0;
}
