#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    int i,j,money_spent=0,max=0;
    for(i=0;i<keyboards.size();i++)
    {
        for(j=0;j<drives.size();j++)
        {
            money_spent=keyboards[i]+drives[j];
            if(money_spent<=s&&money_spent>max)
                max=money_spent;
        }
    }
    if(max==0)
        return -1;
    else
        return max;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
