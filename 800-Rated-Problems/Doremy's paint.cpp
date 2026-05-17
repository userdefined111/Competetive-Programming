#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int> fm;
        for (int i=0;i<n;i++){
            fm[a[i]]++;
        }
        if(fm.size()>=3){
            cout<<"No\n";
        } 
        else {
            int f1= fm.begin()->second;
            int f2= fm.rbegin()->second;
            if(f1==f2){
                cout<<"Yes\n";
            }
            else if(n%2==1 && abs(f1-f2)==1){
                cout<<"Yes\n";
            }
            else{
            cout<<"No\n";
            }
        }    
    }
}