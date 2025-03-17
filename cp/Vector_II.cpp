#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<int>v[n];
    for(int j=0;j<q;j++){
        int x;cin>>x;
        if(x==0){
            int t,y;cin>>t,y;
            v[t].push_back(y);

        }
        else if(x==1){
            int t;cin>>t;
            cout<<v[t][0];
            for(int i=1;i<v[t].size();i++){

                cout<<" "<<v[t][i];
            }
            
            cout<<'\n';
        }
        else{
            int t;cin>>t;
            v[t].clear();
        }
    }

    return 0;
}