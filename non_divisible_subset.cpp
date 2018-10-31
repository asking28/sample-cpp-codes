#include <bits/stdc++.h>

using namespace std;

int nonDivisibleSubset(int k, vector <int> arr) {
    // Complete this function
    int i,j,q,count=0,max1=0;
    vector <int> count1(k,0);
    for(i=0;i<arr.size();i++)
    {
        count1[arr[i]%k]++;
    }
    for(i=1;i<=k/2;i++)
    {
        if(i*2==k)
            max1+=1;
        else
        {
            max1+=max(count1[i],count1[k-i]);
        }
    }
    if(count1[0]!=0)
        max1+=1;
    return max1;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = nonDivisibleSubset(k, arr);
    cout << result << endl;
    return 0;
}
