#include <bits/stdc++.h>

using namespace std;

void almostSorted(vector <int> arr) {
    // Complete this function
    int flag=0,i,j,len1=arr.size(),index1,index2,ups=0,downs=0,counter=0,flag2=0,temp,flag3=0,a,b,count1=0;
    vector <int> c(arr.size());
    if(len1==2){
        cout<<"yes\n";
        cout<<"swap 1 2";
    }
    else
    {
    for(i=0;i<len1-1;i++)
    {
        if(arr[i]>arr[i+1])
            flag=1;
    }
    if(flag==0)
        cout<<"yes\n";
    else
    {
        for(i=0;i<len1;i++)
        {
            if(i==0)
            {
                if(arr[i]>arr[i+1])
                {ups++;
                 a=i;}

            }
            else if(i>0&&i<len1-1)
            {
                if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
                {ups++;
                 a=i;}
                if(arr[i]<arr[i-1]&&arr[i]<arr[i+1])
                {downs++;
                 b=i;}
            }
            else if(i==len1-1)
            {
                if(arr[i]<arr[i-1])
                {downs++;
                 b=i;}
            }

        }
        //cout<<"ups"<<ups<<"\n";
        //cout<<"down"<<downs<<"\n";
        if(ups==1&&downs==1)
        {   //cout<<"reached";
            for(i=0;i<a;i++)
            { c[i]=arr[i];
            counter++;
            }
            for(i=b;i>=a;i--)
            {
                c[counter]=arr[i];
                counter++;
            }
            for(i=b+1;i<len1;i++)
            {

                c[counter]=arr[i];
                counter++;
            }
            for(i=0;i<len1-1;i++)
            {
                if(c[i]>c[i+1])
                    flag2=1;
            }
        //cout<<"reached";

        if(flag==1&&flag2==0)
        {
            cout<<"yes\n";
            if(b==a+1)
            cout<<"swap "<<a+1<<" "<<b+1;
            else
            cout<<"reverse "<<a+1<<" "<<b+1;
        }
        else if(flag==1&&flag2==1)
        {
            cout<<"no";
        }
        }
        else if(ups==2&&downs==2)
        {   for(i=0;i<len1-1;i++)
        {
        if(i==0)
        {
        if(arr[i]>arr[i+1])
        {
        a=0;
        break;
        }
        }
        else if(i>0&&i<len1-1)
        {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
        {
        a=i;
        break;
        }
        }
        }
        for(i=1;i<len1;i++)
        {


        if(i>0&&i<len1-1)
        {
        if(arr[i]<arr[i-1]&&arr[i]<arr[i+1])
        {
        b=i;
        count1++;
        if(count1==2)
        break;
        }
        }
        else if(i==len1-1)
        {
        if(arr[i]<arr[i-1])
        {
        b=i;
        break;
        }
        }
        }//cout<<"a"<<a;
        //cout<<"b"<<b;
            temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
           // cout<<arr[b]<<"#\n";
            for(i=0;i<len1-1;i++)
                if(arr[i]>arr[i+1])
                {   //cout<<arr[i];
                    flag3=1;
                    }
            if(flag==1&&flag3==0)
            {
                 cout<<"yes\n";
            cout<<"swap "<<a+1<<" "<<b+1;
            }
            else
            {
                cout<<"no";
            }
        }
        else
            cout<<"no";
    }
    }

}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    almostSorted(arr);
    return 0;
}
