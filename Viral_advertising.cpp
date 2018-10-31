#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    // Complete this function
    int total1=0,day_total=0,i;
    vector <int> day(n);
    day[0]=2;
    for(i=1;i<n;i++)
    {
        day[i]=(day[i-1]*3)/2;
    }
    for(i=0;i<n;i++)
    {
        total1+=day[i];
    }
    return total1;
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}
