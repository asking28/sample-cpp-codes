#include <bits/stdc++.h>

using namespace std;

string biggerIsGreater(string w) {
    // Complete this function
    int i,j,len1=w.length(),a,b,flag=0;
    i=len1-1;
    string s1;
    while(i>0&&w[i-1]>=w[i])
        i--;
    if(i<=0)
        return "no answer";
    for(j=len1-1;j>=i;j--)
        if(w[j]>w[i-1])
            break;
    swap(w[i-1],w[j]);
    //cout<<w<<"#\n";
    sort(w.begin()+i,w.end());

    return w;

}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        string w;
        cin >> w;
        string result = biggerIsGreater(w);
        cout << result << endl;
    }
    return 0;
}

