#include <bits\stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,water=0,cover=0;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            if(ch=='#'&&water<3){
                water=0;
            }
            else if(ch=='.'){
                water++;
                cover++;
            }
        }
        if(water>=3){
            cout<<2<<"\n";
        }
        else{
            cout<<cover<<"\n";
        }
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while (t--) {
//         int n;cin>>n;
//         string s;cin>>s;
//         int k=0;
//         int a1=0;
//         for (int i=0;i<n;i++) {
//             if (s[i]=='.') {
//                 k=k+1;
//                 if (k==3) {
//                     a1=2;
//                     break;
//                 }
//                 else {
//                     a1=a1+1;
//                 }
//             }
//             else {
//                 k=0;
//             }
//         }
//         cout<<a1<<endl;
//     }
// }

