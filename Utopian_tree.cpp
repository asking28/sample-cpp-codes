#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
    // Complete this function
    int curr_height=1;
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            curr_height+=1;
        else
            curr_height=curr_height*2;
    }
    return curr_height;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}
