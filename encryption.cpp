    #include <bits/stdc++.h>

    using namespace std;

    string encryption(string s) {
        // Complete this function
        int n_rows,n_columns;
        n_rows=floor(sqrt(s.length()));
        n_columns=ceil(sqrt(s.length()));
        string s1="",s2="";
        if(n_columns*n_rows<s.length())
            n_rows++;
        vector <string> s3;
        int i,j,last=n_rows;
        for(i=0;i<s.length();i+=n_columns)
        {
            s3.push_back(s.substr(i,n_columns));
            //cout<<s.substr(i,n_columns)<<"#\n";
        }
        //cout<<s3[0]<<"$"<<s3[1]<<"#\n";
        for(i=0;i<n_columns;i++)
        {   s2="";
            for(j=0;j<last;j++)
            {   if(s3[j][i]==*s3[j].end())
            {   last--;
                continue;
            }
                s2+=s3[j][i];
            }
            //cout<<s2<<"#\n";
            s1+=s2+" ";
        }
        return s1;
    }

    int main() {
        string s;
        cin >> s;
        string result = encryption(s);
        cout << result << endl;
        return 0;
    }
