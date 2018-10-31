#include <bits/stdc++.h>

using namespace std;
string catAndMouse(int x, int y, int z) {
    // Complete this function
    int dist1,dist2;
    dist1=abs(x-z);
    dist2=abs(y-z);
    string s1;
    if(dist1<dist2)
        s1= "Cat A";
    else if(dist1==dist2)
        s1= "Mouse C";
    else
        s1= "Cat B";
    return s1;
}

int main() {{
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        string result = catAndMouse(x, y, z);
        //for (ssize_t i = 0; i < result.size(); i++)
            cout << result<<"\n";
        }
        cout << endl;


    }
    return 0;
}
