#include <bits/stdc++.h>

using namespace std;

string larrysArray(vector <int> A) {
    // Complete this function
    int i,j,flag=0,len1=A.size(),num_inversions=0;
    for(i=0;i<len1-1;i++)
    {
        for(j=i+1;j<len1;j++)
        {
            if(A[i]>A[j])
                num_inversions++;
        }
    }
   if(num_inversions%2==0)
       return "YES";
    else
return "NO";

}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> A(n);
        for(int A_i = 0; A_i < n; A_i++){
           cin >> A[A_i];
        }
        string result = larrysArray(A);
        cout << result << endl;
    }
    return 0;
}
