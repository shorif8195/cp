#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x,n;cin>>x>>n;
        vector<int>v(x);
        for(int i=0;i<x;i++)cin>>v[i];

        sort(v.begin(),v.end());
        int distinct = 0;
        for(int i=0;i<x;i++){
            if(v[i]!= v[i+1])distinct++;

        }

        if(distinct==n)cout<<"Good\n";
        else if(distinct<n)cout<<"Bad\n";
        else cout<<"Average\n";

    }
    return 0;
}