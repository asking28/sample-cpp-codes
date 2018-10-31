#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(int n, int m, int s){
    // Complete this function
    int i,j,curr_num=m,curr_id=s;
    if(m+s-1>n)
    {
    curr_num=m-(n-s+1);

    curr_id=curr_num%n;
        if(curr_id==0)
            curr_id=n;
    }
    else
    curr_id+=m-1;
    return curr_id;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
