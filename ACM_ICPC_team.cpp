#include <bits/stdc++.h>

using namespace std;

vector <int> acmTeam(vector <string> topic,int n, int m) {
    // Complete this function
    vector <int> result(2,0);
    vector <int> count_topic(m+1,0);
    int i,j,count1=0,k,a,b;
    for(i=0;i<n-1;i++)
    {
        count1=0;
        for(j=i+1;j<n;j++)
        {   count1=0;
            for(k=0;k<topic[i].length();k++)
            {
                if(topic[i][k]=='1'||topic[j][k]=='1')
                    count1++;
            }
            count_topic[count1]++;
        }
        //count_topic[count1]++;
        //cout<<count1<<"#\n";
    }
    for(i=m;i>=0;i--)
    {
        if(count_topic[i]!=0)
        {
            a=count_topic[i];
            b=i;
            break;
        }
    }
    result[0]=b;
    result[1]=a;
    return result;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0; topic_i < n; topic_i++){
       cin >> topic[topic_i];
    }
    vector <int> result = acmTeam(topic,n,m);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
