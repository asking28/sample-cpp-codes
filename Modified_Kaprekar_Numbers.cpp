#include <bits/stdc++.h>

using namespace std;
bool iskaprekar(long long n)
{
    long long square=n*n,sum1,a,b;
    string s=to_string(square);
    string s1,s2;
    int length1,l,r;
    length1=s.length();
    l=length1/2;
    r=length1-l;
    if(l!=0)
    s1=s.substr(0,l);
    else
        s1="0";

    s2=s.substr(l,r);
    a=stoi(s1);
    b=stoi(s2);
    sum1=a+b;
    if(sum1==n)
        return true;
    else
        return false;
}
vector <long long> kaprekarNumbers(long long p, long long q) {
    // Complete this function
    long long i,count=0;
    vector <long long> b;
    for(i=p;i<=q;i++)
    {
        if(iskaprekar(i))
            b.push_back(i);
    }
    if(b.empty())
        cout<<"INVALID RANGE\n";
    return b;

}

int main() {
    long long p;
    cin >> p;
    long long q;
    cin >> q;
    vector <long long > result = kaprekarNumbers(p, q);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
