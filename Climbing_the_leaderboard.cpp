#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    // Complete this function
    int i;
    int count=0,count1=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
            count1++;
        else
            count1--;
        if(count1<0)
        {
            count++;
            while(count1!=0)
            {
                i++;
                if(s[i]=='U')
                count1++;
                else
                count1--;
                //cout<<i<<"i\n";
            }
            //cout<<count<<"#"<<"\n";
        }
        //cout<<i<<"i2\n";

    }
    return count;

}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}
