#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    string hh,mm,ss,dt,nt;
    int c1=0,c2,c3;
    string::iterator it;
    for(it=s.begin();it<s.end();it++)
    {
        if(c1==0 || c1==1)
        {
            hh+=*it;

        }
        if(c1==3 || c1==4)
        {
            mm+=*it;
        }
        if(c1==6 || c1==7)
        {
            ss+=*it;
        }
        if(c1==8 || c1==9)
        {
            dt+=*it;
        }
        c1++;


    }
        if(dt.compare("AM")==0 && hh.compare("12")==0)
        {
            hh="00";
        }
        if(hh.compare("12")==0 && dt.compare("PM")==0)
        {
            nt.append(hh);
            nt.append(":");
            nt.append(mm);
            nt.append(":");
            nt.append(ss);
            return nt;
        }
        else if(dt.compare("PM")==0)
        {
            int hr=stoi(hh);
            hr+=12;
            hh=to_string(hr);
        }
    //cout<<dt;
        nt.append(hh);
        nt.append(":");
        nt.append(mm);
        nt.append(":");
        nt.append(ss);
        return nt;

}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
