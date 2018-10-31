#include <bits/stdc++.h>

using namespace std;
int reverse(int a)
{
    int n_max=0,a_1=a,rev=0;
    while(a_1!=0)
    {
        n_max++;
        a_1/=10;
    }
    while(a!=0)
    {
        rev+=(a%10)*pow(10,n_max-1);
        a/=10;
        n_max--;
    }
    return rev;
}
int beautifulDays(int i, int j, int k) {
    // Complete this function
    int a,count=0,revers;
    for(a=i;a<=j;a++)
    {
        revers=reverse(a);
        if(abs(revers-a)%k==0)
            count++;
    }
    return count;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}
