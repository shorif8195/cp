#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3,2,1, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
        /* code */
    }
    cout<<"After sorting"<<endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
        /* code */
    }

    auto a = unique(v.begin(),v.end());
    cout<<"After unique"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
        /* code */
    }
    v.erase(a,v.end());
    cout<<"After erase"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
        /* code */
    }
    

}

//Compilation time 0.005s
//Code submitted by Susobhan AKhuli
