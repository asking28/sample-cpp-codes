#include <bits/stdc++.h>

using namespace std;

string gridSearch(vector <string> G, vector <string> P) {
    // Complete this function
    int i,j,flag1=0,flag2=0,g_l=G.size(),g_w=G[0].size(),p_l=P.size(),p_w=P[0].size(),k,count1=0;
    for(i=0;i<=g_l-p_l;i++)
    {
        for(j=0;j<g_w;j++)
        {   count1=0;
            for(k=0;k<p_l;k++)
                {
                    if(G[i+k].substr(j,p_w)!=P[k])
                        break;
                    else
                    {
                        count1++;
                    }
                }

        if(count1==p_l)
        {
           flag1=1;
            break;
        }
        }
        if(flag1==1)
            break;
    }
    if(flag1==1)
        return "YES";
    else
        return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        string result = gridSearch(G, P);
        cout << result << endl;
    }
    return 0;
}
