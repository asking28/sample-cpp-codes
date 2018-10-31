#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector <int> a) {
    // Complete this function
    int i,j,cnt_pos,max1,diff;
    vector <int> count1(a.size(),1);
    vector <int> count_pos(a.size(),0);
    vector <int> count_neg(a.size(),0);
    vector <int> count_o(a.size(),0);

    for(i=0;i<a.size()-1;i++)
    {
        for(j=i+1;j<a.size();j++)
        {
            diff=(a[i]-a[j]);
            if(diff==-1)
                count_neg[i]++;
            else if(diff==1)
                count_pos[i]++;
            else if(diff==0)
                count_o[i]++;

        }
        if(count_pos[i]>count_neg[i])
            count1[i]+=count_pos[i]+count_o[i];
        else
            count1[i]+=count_neg[i]+count_o[i];
    }
    max1=count1[0];
    for(i=0;i<a.size();i++)
    {
        if(count1[i]>max1)
            max1=count1[i];
    }
    return max1;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}
