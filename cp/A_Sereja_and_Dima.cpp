#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int>v;
    int j=0;
    while(j!=t){
        int x;cin>>x;
        v.push_back(x);
        j++;
    }
    
    int s=0,e=t-1;
    int ss=0,ds=0;
    for(auto i=0;i<t;i++){
        
        if(i%2==0){
            if(v[s]>v[e]){
                ss+=v[s];
                s++;
                
            }
            else {
                ss+= v[e];
                e--;
            }

        }
        else{
            if(v[s]>v[e]){
                ds+= v[s];
                s++;
            }
            else{
                ds+= v[e];
                e--;
            }
        }
    }
    cout<<ss<<" "<<ds<<endl;

    return 0;
}