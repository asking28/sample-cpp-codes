 #include <bits/stdc++.h>

using namespace std;

vector <int> circularArrayRotation(vector <int> a, vector <int> m,int k) {
    // Complete this function
    vector <int> b;
    vector <int> c;
    int t=k%a.size();
    int i,len=a.size(),len2=m.size();
    for(i=len-t;i<=a.size()-1;i++)
    {
        b.push_back(a[i]);
    }
    for(i=0;i<len-t;i++)
        b.push_back(a[i]);
    for(i=0;i<len2;i++)
    {
        c.push_back(b[m[i]]);
    }
    return c;
}

int main() {
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> m(q);
    for(int m_i = 0; m_i < q; m_i++){
       cin >> m[m_i];
    }
    vector <int> result = circularArrayRotation(a, m,k);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
