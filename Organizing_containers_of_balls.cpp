#include <bits/stdc++.h>

using namespace std;

string organizingContainers(vector < vector<int> > container,int n) {
    // Complete this function
    vector <int> box_capacity(n,0);
    vector <int> ball_type(n,0);
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            box_capacity[i]+=container[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            ball_type[i]+=container[j][i];
    }
    sort(box_capacity.begin(),box_capacity.end());
    sort(ball_type.begin(),ball_type.end());
    for(i=0;i<n;i++)
    {
        if(box_capacity[i]!=ball_type[i])
            flag=1;
    }
    if(flag==1)
        return "Impossible";
    else
        return "Possible";

}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > container(n,vector<int>(n));
        for(int container_i = 0;container_i < n;container_i++){
           for(int container_j = 0;container_j < n;container_j++){
              cin >> container[container_i][container_j];
           }
        }
        string result = organizingContainers(container,n);
        cout << result << endl;
    }
    return 0;
}
