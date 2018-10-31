#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    // Complete this function
    unsigned long long n1,count=0,min1=s.length();
    if(min1>n)
        min1=n;
    int i,count2=0;
    for(i=0;i<min1;i++)
    {
        if(s[i]=='a')
            count++;

    }
    n1=count;
    if(n>=s.length())
    {
        n1=(n/s.length())*count;
        for(i=0;i<n%s.length();i++)
        {
            if(s[i]=='a')
                count2++;
        }
        n1+=count2;
    }
    return n1;

}

int main() {
    string s;
    cin >> s;
    long n;
    cin >> n;
    long result = repeatedString(s, n);
    cout << result << endl;
    return 0;
}
