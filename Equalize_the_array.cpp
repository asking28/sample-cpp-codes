#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr) {
    // Complete this function
    vector <int> count1(101,0);
    int i,count_max=0,n_subs;
    for(i=0;i<arr.size();i++)
    {
        count1[arr[i]%101]++;

    }
    count_max=*max_element(count1.begin(),count1.end());
    n_subs=arr.size()-count_max;
    return n_subs;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}
