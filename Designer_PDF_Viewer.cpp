#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    // Complete this function
    int length1=word.length(),i,max_height,area;
    max_height=h[word[0]-'a'];
    for(i=0;i<length1;i++)
    {
        if(h[word[i]-'a']>max_height)
            max_height=h[word[i]-'a'];
    }
    area=max_height*length1;
    return area;
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
