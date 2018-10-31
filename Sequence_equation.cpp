#include <bits/stdc++.h>

using namespace std;

vector <int> permutationEquation(vector <int> p) {
    // Complete this function
    vector <int> r(p.size()+1);
    vector <int> q(p.size());
    int i;
    for(i=0;i<p.size();i++)
    {
        r[p[i]]=i+1;
    }
    for(i=0;i<p.size();i++)
    {
        q[i]=r[r[i+1]];
    }
    return q;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    vector <int> result = permutationEquation(p);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
