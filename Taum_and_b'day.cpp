#include <bits/stdc++.h>

using namespace std;

long taumBday(int b, int w, int x, int y, int z) {
    // Complete this function
    long min_cost=min(x,y),cost_white=y,cost_black=x,total_cost;
    if(min_cost+z<cost_white)
        cost_white=min_cost+z;
    if(min_cost+z<cost_black)
        cost_black=min_cost+z;
    total_cost=cost_white*w+cost_black*b;
    //cout<<cost_white*w<<"#\n";
    //cout<<cost_black*b<<"$\n";
    return total_cost;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int b;
        int w;
        cin >> b >> w;
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        long result = taumBday(b, w, x, y, z);
        cout << result << endl;
    }
    return 0;
}
