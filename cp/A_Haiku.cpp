#include<bits/stdc++.h>
using namespace std;
int isvowel(auto c){
    if(c=='a' || c =='e' || c=='i' || c=='o' || c=='u'){
        return 1;
    }
    return 0;
}
int countVowel(string s){
    int count = 0;
    for(auto c:s){
        count+= isvowel(c);
    }
    return count;
}
int main(){
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    for(int i=0;i<s1.size();i++){
        s1[i] = tolower(s1[i]);
    }
    for(int i=0;i<s2.size();i++){
        s2[i] = tolower(s2[i]);
    }
    for(int i=0;i<s3.size();i++){
        s3[i] = tolower(s3[i]);
    }

    int c1 = countVowel(s1);
    int c2 = countVowel(s2);
    int c3 = countVowel(s3);

    if(c1 == 5 && c2==7 && c3==5){
        cout<<"YES\n";return 0;
    }
    cout<<"NO\n";

    return 0;
}